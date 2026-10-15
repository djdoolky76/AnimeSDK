#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
class GOOGNAIABBN;
namespace RPG::GameCore { class PixAirMissleConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRMISSLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EF240)
#define RPG_GAMECORE_PIXAIRMISSLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EEE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirMissleConfig_TypeDefinitionIndex = 21397;

	class PixAirMissleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* OnCollideEffectPath; // 0x18
		::RPG::GameCore::FixPoint ArrivalTime; // 0x20
		::GOOGNAIABBN* OnHit; // 0x28
		::RPG::MVector3 NormalizedControlPoint; // 0x30
		::System::UInt32 MissleCount; // 0x3C
		::RPG::MVector3 LocalScale; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRMISSLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirMissleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirMissleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRMISSLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
