#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupInitMemberEntityPropState; }

#define RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71DA80)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71DA90)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71DA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupInitMemberEntityPropState_TypeDefinitionIndex = 20735;

	class GroupInitMemberEntityPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PropInstanceID; // 0x18
		::RPG::GameCore::PropState InitPropState; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupInitMemberEntityPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupInitMemberEntityPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupInitMemberEntityPropState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupInitMemberEntityPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYPROPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
