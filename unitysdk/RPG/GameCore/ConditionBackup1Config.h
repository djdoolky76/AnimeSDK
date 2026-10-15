#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionBackup1Config; }

#define RPG_GAMECORE_CONDITIONBACKUP1CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D3D20)
#define RPG_GAMECORE_CONDITIONBACKUP1CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D3D30)
#define RPG_GAMECORE_CONDITIONBACKUP1CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D3CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionBackup1Config_TypeDefinitionIndex = 17062;

	class ConditionBackup1Config : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP1CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionBackup1Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP1CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionBackup1Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP1CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
