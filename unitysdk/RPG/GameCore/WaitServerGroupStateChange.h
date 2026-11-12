#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitServerGroupStateChange; }

#define RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB4280)
#define RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEB4290)
#define RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEB4240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerGroupStateChange_TypeDefinitionIndex = 21522;

	class WaitServerGroupStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerGroupStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerGroupStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
