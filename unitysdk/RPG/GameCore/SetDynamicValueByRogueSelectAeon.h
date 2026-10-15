#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueSelectAeon; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C8E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C8F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSelectAeon_TypeDefinitionIndex = 21784;

	class SetDynamicValueByRogueSelectAeon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
