#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParameterBackup3Config; }

#define RPG_GAMECORE_PARAMETERBACKUP3CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0FC0)
#define RPG_GAMECORE_PARAMETERBACKUP3CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C0FD0)
#define RPG_GAMECORE_PARAMETERBACKUP3CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C0F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParameterBackup3Config_TypeDefinitionIndex = 17067;

	class ParameterBackup3Config : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP3CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParameterBackup3Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParameterBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP3CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParameterBackup3Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParameterBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP3CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
