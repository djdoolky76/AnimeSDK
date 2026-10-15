#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirProjectileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define JIIEDMEICMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB704C0)

inline static constexpr unsigned int JIIEDMEICMJ_TypeDefinitionIndex = 43690;

	class JIIEDMEICMJ : public ::System::Object
	{
	public:
		::System::Action* GKOIKCBJICD; // 0x10
		::System::Single DBFNBLDDIEO; // 0x18
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x1C
		::RPG::Client::LittleGame::PixAir::PixAirProjectileType ALOOCIOKPNL; // 0x28
		::System::Single FKCDDLPIMEI; // 0x2C
		::System::Int32 KAPFPAKBGOK; // 0x30
		::System::Int32 FOAIMPPILHN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIEDMEICMJ_CTOR_OFFSET))(this);
		}

	};
