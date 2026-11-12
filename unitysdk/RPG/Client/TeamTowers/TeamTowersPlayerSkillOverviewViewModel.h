#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DFGLKHAAGJB;
class LGGELBFHJIM;
namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillGroupViewModel; }
namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xECA9D50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_GET_PLAYERSKILLGROUPS_OFFSET UNITYSDK_OFFSET(0xECAA830)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_GET_SELECTEDSKILL_OFFSET UNITYSDK_OFFSET(0xECAA990)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_REGISTEROVERVIEWREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0xECAA4E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__ADDSKILLGROUP_OFFSET UNITYSDK_OFFSET(0xECAA530)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__INITPLAYERSKILLGROUPS_OFFSET UNITYSDK_OFFSET(0xECA9EA0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__INITPLAYERSKILLS_OFFSET UNITYSDK_OFFSET(0xECAA030)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL__ONSELECTEDSKILLCHANGED_OFFSET UNITYSDK_OFFSET(0xECAA7A0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersPlayerSkillOverviewViewModel_TypeDefinitionIndex = 81860;

	class TeamTowersPlayerSkillOverviewViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DFGLKHAAGJB*>* _PlayerSkillInfoList; // 0x10
		::System::Action_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>* _RefreshOverviewCallBack; // 0x18
		::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* _SelectedSkill; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*>* _PlayerSkillGroups; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamTowersPlayerSkillType, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*>* _PlayerSkillGroupDict; // 0x30
		::LGGELBFHJIM* _Repository; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Void RegisterOverviewRefreshCallBack(::System::Action_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL_REGISTEROVERVIEWREFRESHCALLBACK_OFFSET))(this, a1);
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
