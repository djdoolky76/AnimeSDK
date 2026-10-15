#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitHeartDialScriptStepChange; }

#define RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9A620)
#define RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9A630)
#define RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9A5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitHeartDialScriptStepChange_TypeDefinitionIndex = 21218;

	class WaitHeartDialScriptStepChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitHeartDialScriptStepChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitHeartDialScriptStepChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitHeartDialScriptStepChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitHeartDialScriptStepChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
