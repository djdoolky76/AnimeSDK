#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityAttributeConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D64F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D63D0)

namespace RPG::GameCore
{
	class LittleGameAbilityAttributeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityAttributeType AttributeType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
