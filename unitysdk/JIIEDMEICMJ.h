#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirProjectileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define JIIEDMEICMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB9E830)

	class JIIEDMEICMJ : public ::System::Object
	{
	public:
		::System::Action* GKOIKCBJICD; // 0x10
		::System::Int32 FOAIMPPILHN; // 0x18
		::System::Single DBFNBLDDIEO; // 0x1C
		::RPG::Client::LittleGame::PixAir::PixAirProjectileType ALOOCIOKPNL; // 0x20
		::System::Int32 KAPFPAKBGOK; // 0x24
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x28
		::System::Single FKCDDLPIMEI; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIEDMEICMJ_CTOR_OFFSET))(this);
		}

	};
