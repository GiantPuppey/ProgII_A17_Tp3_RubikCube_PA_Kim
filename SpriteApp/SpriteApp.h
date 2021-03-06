#pragma once

#include "D3DApp.h"

class CubeApp
	: public D3DApp
{

public:
	CubeApp();
	CubeApp(HINSTANCE hInstance, int nCmdShow);

	void Update();
	void Draw();

private:
	ID3DXSprite* spriteBatch;

	// Texture
	D3DXIMAGE_INFO texInfo;
	IDirect3DTexture9* texture;
	D3DXVECTOR3 position;
	D3DXVECTOR3 center;

	// Camera
	D3DXMATRIX mView;
	D3DXMATRIX mProj;
	
	D3DXVECTOR3 Pos;
	D3DXVECTOR3 target;
	D3DXVECTOR3 up;


};