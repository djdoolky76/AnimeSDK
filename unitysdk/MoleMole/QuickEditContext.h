#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EGOPHPIBPJJ;
class EJLCJOMCEKJ;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_QUICKEDITCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC0590)

namespace MoleMole
{
	inline static constexpr unsigned int QuickEditContext_TypeDefinitionIndex = 68785;

	class QuickEditContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EJLCJOMCEKJ* ueHandler; // 0x28
		::EGOPHPIBPJJ* QuestCfg; // 0x30
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckAvatarHasLock; // 0x38
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckBuddyHasLock; // 0x40
		::System::Action_2<::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*>* OnSelectTeamAction; // 0x48
		::System::Boolean ApplyTeamWhenLock; // 0x50
		::System::Boolean IsBigScene; // 0x51
		::System::Boolean withOutBattle; // 0x52
		::System::Boolean IsHideOkBtn; // 0x53
		::System::Boolean isTwoTeam; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKEDITCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
