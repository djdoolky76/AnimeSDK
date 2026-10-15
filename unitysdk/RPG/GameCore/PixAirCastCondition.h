#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define RPG_GAMECORE_PIXAIRCASTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D919500)
#define RPG_GAMECORE_PIXAIRCASTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D919380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirCastCondition_TypeDefinitionIndex = 16249;

	class PixAirCastCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PixAirEventType Event; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*>* Params; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* EventCaster; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRCASTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirCastCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirCastCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRCASTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
