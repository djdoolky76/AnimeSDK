#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirProjectileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define JIIEDMEICMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE15980)

inline static constexpr unsigned int JIIEDMEICMJ_TypeDefinitionIndex = 44673;

	class JIIEDMEICMJ : public ::System::Object
	{
	public:
		::System::Action* GKOIKCBJICD; // 0x10
		::RPG::Client::LittleGame::PixAir::PixAirProjectileType ALOOCIOKPNL; // 0x18
		::System::Single FKCDDLPIMEI; // 0x1C
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x20
		::System::Single DBFNBLDDIEO; // 0x2C
		::System::Int32 FOAIMPPILHN; // 0x30
		::System::Int32 KAPFPAKBGOK; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIEDMEICMJ_CTOR_OFFSET))(this);
		}

	};
