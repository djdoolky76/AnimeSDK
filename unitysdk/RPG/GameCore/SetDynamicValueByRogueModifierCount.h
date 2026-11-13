#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueModifierCount; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F86DD70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F86DD80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F86DD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueModifierCount_TypeDefinitionIndex = 22186;

	class SetDynamicValueByRogueModifierCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueModifierCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueModifierCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueModifierCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueModifierCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
