#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESGAMECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9267F0)
#define RPG_GAMECORE_PLANETFESGAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9265E0)

namespace RPG::GameCore
{
	class PlanetFesGameConfigRow : public ::System::Object
	{
	public:
		::System::String* ParamStr1; // 0x10
		::System::UInt32 RewardPool; // 0x18
		::RPG::GameCore::PlanetFesGameType GameID; // 0x1C
		::System::UInt32 ParamInt3; // 0x20
		::System::UInt32 LandID; // 0x24
		::System::UInt32 RaiseCurveID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesGameConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesGameConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
