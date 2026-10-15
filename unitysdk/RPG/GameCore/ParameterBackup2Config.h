#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParameterBackup2Config; }

#define RPG_GAMECORE_PARAMETERBACKUP2CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EE920)
#define RPG_GAMECORE_PARAMETERBACKUP2CONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8EE930)
#define RPG_GAMECORE_PARAMETERBACKUP2CONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EE8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParameterBackup2Config_TypeDefinitionIndex = 17066;

	class ParameterBackup2Config : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP2CONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParameterBackup2Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParameterBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP2CONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParameterBackup2Config* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParameterBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP2CONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
