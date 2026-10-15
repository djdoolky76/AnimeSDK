#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CondRandomSuccConfig; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D3B80)
#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D3B90)
#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D3B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondRandomSuccConfig_TypeDefinitionIndex = 17078;

	class CondRandomSuccConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Probability; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondRandomSuccConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondRandomSuccConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondRandomSuccConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondRandomSuccConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
