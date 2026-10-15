#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREHITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39AB50)
#define RPG_GAMECORE_ADVENTUREHITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39A8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureHitConfig_TypeDefinitionIndex = 16278;

	class AdventureHitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HitAnimation; // 0x10
		::System::String* HitEffect; // 0x18
		::System::Single HitAngleHorizontal; // 0x20
		::System::Single RandomHitAngleHorizontal; // 0x24
		::System::Single HitAngleVertical; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* HitSoundEvent; // 0x30
		::System::Single HitEffectHeight; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREHITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureHitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureHitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREHITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
