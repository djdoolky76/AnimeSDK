#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LGPIKCCEFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0850)

inline static constexpr unsigned int LGPIKCCEFPJ_TypeDefinitionIndex = 43172;

	class LGPIKCCEFPJ : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x10
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord FNDCAGIKLAJ; // 0x20
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPIKCCEFPJ_CTOR_OFFSET))(this);
		}

	};
