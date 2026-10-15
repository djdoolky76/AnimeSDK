#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionBackup3Config; }

#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A6350)
#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A6360)
#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A6310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionBackup3Config_TypeDefinitionIndex = 17064;

	class ConditionBackup3Config : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionBackup3Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionBackup3Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
