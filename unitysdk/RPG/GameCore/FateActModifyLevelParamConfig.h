#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActModifyLevelParamConfig; }

#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66C390)
#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66C3A0)
#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66C350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActModifyLevelParamConfig_TypeDefinitionIndex = 19231;

	class FateActModifyLevelParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActModifyLevelParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActModifyLevelParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActModifyLevelParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActModifyLevelParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
