#include "Entity.h"

Entity::Entity(Vector2f p_pos, SDL_Texture* p_tex, int width, int height)
    : pos(p_pos), tex(p_tex)
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = width/*32*/;
    currentFrame.h = height/*32*/;
}

Vector2f& Entity::getPos(){
    return pos;
}

SDL_Texture* Entity::getTex(){
    return tex;
}

SDL_Rect Entity::getCurrFrame(){
    return currentFrame;
}

void Entity::changeTex(SDL_Texture* newTex){
    if (tex == newTex) return; //nothing to do
    tex = newTex;
}