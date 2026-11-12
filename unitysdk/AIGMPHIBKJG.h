#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AIGMPHIBKJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0F050)

inline static constexpr unsigned int AIGMPHIBKJG_TypeDefinitionIndex = 44825;

	class AIGMPHIBKJG : public ::System::Object
	{
	public:
		::System::UInt32 BKGJPJLLEDI; // 0x10
		::UnityEngine::Vector3 GPGNBLLEFHA; // 0x14
		::RPG::Client::LittleGame::ChenLing::ChenLingHitType EENDFLPBDFK; // 0x20
		::UnityEngine::Vector3 NAHBPNCLGHE; // 0x24
		::RPG::GameCore::FixPoint KFBHFFHDCCN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGMPHIBKJG_CTOR_OFFSET))(this);
		}

	};
