#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AIGMPHIBKJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D863B50)

inline static constexpr unsigned int AIGMPHIBKJG_TypeDefinitionIndex = 44825;

	class AIGMPHIBKJG : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NAHBPNCLGHE; // 0x10
		::UnityEngine::Vector3 GPGNBLLEFHA; // 0x1C
		::System::UInt32 BKGJPJLLEDI; // 0x28
		::RPG::Client::LittleGame::ChenLing::ChenLingHitType EENDFLPBDFK; // 0x2C
		::RPG::GameCore::FixPoint KFBHFFHDCCN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGMPHIBKJG_CTOR_OFFSET))(this);
		}

	};
