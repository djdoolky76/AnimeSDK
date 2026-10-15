#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitServerPropStateChange; }

#define RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1830)
#define RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA1840)
#define RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA1800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerPropStateChange_TypeDefinitionIndex = 21231;

	class WaitServerPropStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerPropStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerPropStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERPROPSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
