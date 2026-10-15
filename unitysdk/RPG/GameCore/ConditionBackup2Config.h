#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionBackup2Config; }

#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D3D80)
#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D3D90)
#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D3D40)

namespace RPG::GameCore
{
	class ConditionBackup2Config : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionBackup2Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConditionBackup2Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConditionBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
