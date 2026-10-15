#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionCheckActionConfig; }
namespace RPG::GameCore { class MiActionConfigBase; }

#define RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D343D90)
#define RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D343DA0)
#define RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D343D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionCheckActionConfig_TypeDefinitionIndex = 17057;

	class ActionCheckActionConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionCheckActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionCheckActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionCheckActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionCheckActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCHECKACTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
