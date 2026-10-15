#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiAtomBackupParamConfig; }

#define RPG_GAMECORE_MIATOMBACKUPPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D851790)
#define RPG_GAMECORE_MIATOMBACKUPPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D851750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiAtomBackupParamConfig_TypeDefinitionIndex = 17058;

	class MiAtomBackupParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMBACKUPPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiAtomBackupParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiAtomBackupParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMBACKUPPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
