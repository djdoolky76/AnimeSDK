#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitServerGroupPropertyChange; }

#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1730)
#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA1740)
#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA16F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerGroupPropertyChange_TypeDefinitionIndex = 21181;

	class WaitServerGroupPropertyChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
