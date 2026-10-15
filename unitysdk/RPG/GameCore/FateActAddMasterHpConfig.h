#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddMasterHpConfig; }

#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6999F0)
#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699A00)
#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6999B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterHpConfig_TypeDefinitionIndex = 19228;

	class FateActAddMasterHpConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddMasterHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddMasterHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
