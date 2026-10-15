#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LGPIKCCEFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90EB30)

	class LGPIKCCEFPJ : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord FNDCAGIKLAJ; // 0x10
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x28
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPIKCCEFPJ_CTOR_OFFSET))(this);
		}

	};
