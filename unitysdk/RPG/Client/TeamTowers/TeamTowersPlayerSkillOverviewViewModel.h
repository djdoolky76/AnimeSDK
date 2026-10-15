#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DFGLKHAAGJB;
class LGGELBFHJIM;
namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillGroupViewModel; }
namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillViewModel; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE1FCC50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_GET_PLAYERSKILLGROUPS_OFFSET UNITYSDK_OFFSET(0xE1FD730)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_GET_SELECTEDSKILL_OFFSET UNITYSDK_OFFSET(0xE1FD890)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_REGISTEROVERVIEWREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0xE1FD3E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__ADDSKILLGROUP_OFFSET UNITYSDK_OFFSET(0xE1FD430)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__INITPLAYERSKILLGROUPS_OFFSET UNITYSDK_OFFSET(0xE1FCDA0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__INITPLAYERSKILLS_OFFSET UNITYSDK_OFFSET(0xE1FCF30)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__ONSELECTEDSKILLCHANGED_OFFSET UNITYSDK_OFFSET(0xE1FD6A0)

namespace RPG::Client::TeamTowers
{
	class TeamTowersPlayerSkillOverviewViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*>* _PlayerSkillGroups; // 0x10
		::System::Action* _RefreshOverviewCallBack; // 0x18
		::LGGELBFHJIM* _Repository; // 0x20
		::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* _SelectedSkill; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamTowersPlayerSkillType, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*>* _PlayerSkillGroupDict; // 0x30
		::System::Collections::Generic::List_1<::DFGLKHAAGJB*>* _PlayerSkillInfoList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Void RegisterOverviewRefreshCallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_REGISTEROVERVIEWREFRESHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _InitPlayerSkillGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__INITPLAYERSKILLGROUPS_OFFSET))(this);
		}

		::System::Void _AddSkillGroup(::RPG::GameCore::TeamTowersPlayerSkillType a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersPlayerSkillType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__ADDSKILLGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void _InitPlayerSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__INITPLAYERSKILLS_OFFSET))(this);
		}

		::System::Void _OnSelectedSkillChanged(::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__ONSELECTEDSKILLCHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*>* get_PlayerSkillGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_GET_PLAYERSKILLGROUPS_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* get_SelectedSkill()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_GET_SELECTEDSKILL_OFFSET))(this);
		}

	};
}
