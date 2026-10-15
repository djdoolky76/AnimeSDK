#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitServerGroupPropertyChangeV2; }

#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC73ED0)
#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC73EE0)
#define RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC73EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerGroupPropertyChangeV2_TypeDefinitionIndex = 21183;

	class WaitServerGroupPropertyChangeV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerGroupPropertyChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerGroupPropertyChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerGroupPropertyChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerGroupPropertyChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERGROUPPROPERTYCHANGEV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
