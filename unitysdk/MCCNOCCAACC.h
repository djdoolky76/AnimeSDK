#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MCCNOCCAACC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C25B990)

inline static constexpr unsigned int MCCNOCCAACC_TypeDefinitionIndex = 44811;

	class MCCNOCCAACC : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x10
		::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType PPJNKIMIAKO; // 0x1C
		::System::Int32 NMOKIHDMMNG; // 0x20
		::System::Single HKOANFBDPCK; // 0x24
		::System::Int32 KJJEEBJNAAA; // 0x28
		::UnityEngine::Vector3 IJHDBLGLCMN; // 0x2C
		::System::Single GCJMFBKLGHI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCNOCCAACC_CTOR_OFFSET))(this);
		}

	};
