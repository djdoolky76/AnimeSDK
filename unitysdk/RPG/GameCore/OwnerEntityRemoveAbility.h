#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class OwnerEntityRemoveAbility; }

#define RPG_GAMECORE_OWNERENTITYREMOVEABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E9F10)
#define RPG_GAMECORE_OWNERENTITYREMOVEABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E9F20)
#define RPG_GAMECORE_OWNERENTITYREMOVEABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E9EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OwnerEntityRemoveAbility_TypeDefinitionIndex = 23471;

	class OwnerEntityRemoveAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AbilityName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYREMOVEABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OwnerEntityRemoveAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OwnerEntityRemoveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYREMOVEABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OwnerEntityRemoveAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OwnerEntityRemoveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OWNERENTITYREMOVEABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
