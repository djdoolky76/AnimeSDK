#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveGearTypeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D65E460)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D65DC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveGearTypeConfigRow_TypeDefinitionIndex = 11413;

	class EvolveGearTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* FontColor; // 0x10
		::System::String* TypeImg; // 0x18
		::System::String* WeaponToastEffectBg; // 0x20
		::System::String* TypeImgColor; // 0x28
		::System::String* Name; // 0x30
		::System::String* MixDetailPropsInfoBg; // 0x38
		::RPG::GameCore::EvolveBuildSeason Season; // 0x40
		::RPG::GameCore::EvolveGearType ID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveGearTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveGearTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
