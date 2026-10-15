#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActDebugLogConfig; }

#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699C90)
#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699CA0)
#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActDebugLogConfig_TypeDefinitionIndex = 19223;

	class FateActDebugLogConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActDebugLogConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActDebugLogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActDebugLogConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActDebugLogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
