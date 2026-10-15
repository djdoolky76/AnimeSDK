#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveRogueNpcInOtherGroup; }

#define RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D986590)
#define RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9865A0)
#define RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D986550)

namespace RPG::GameCore
{
	class RemoveRogueNpcInOtherGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveRogueNpcInOtherGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveRogueNpcInOtherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveRogueNpcInOtherGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveRogueNpcInOtherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
