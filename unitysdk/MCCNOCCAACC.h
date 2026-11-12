#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MCCNOCCAACC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE6120)

inline static constexpr unsigned int MCCNOCCAACC_TypeDefinitionIndex = 44811;

	class MCCNOCCAACC : public ::System::Object
	{
	public:
		::System::Int32 NMOKIHDMMNG; // 0x10
		::System::Int32 KJJEEBJNAAA; // 0x14
		::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType PPJNKIMIAKO; // 0x18
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x1C
		::UnityEngine::Vector3 IJHDBLGLCMN; // 0x28
		::System::Single GCJMFBKLGHI; // 0x34
		::System::Single HKOANFBDPCK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCNOCCAACC_CTOR_OFFSET))(this);
		}

	};
