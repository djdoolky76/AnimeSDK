#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Reward/FateRinLongTailRewardItem.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class CEEGMMCFCBG;
class EBEHJBOGLII;
class MCPENPHEEFF;
namespace RPG::Client { class QuestData; }
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_ADD_ONQUESTGETREWARD_OFFSET UNITYSDK_OFFSET(0x1C4D8F20)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D6E70)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_INITTABGROUPID_OFFSET UNITYSDK_OFFSET(0x1C4D8EE0)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_INITTABID_OFFSET UNITYSDK_OFFSET(0x1C4D8F00)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_LONGTAILREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C4D8DD0)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_ONUIDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4D8FE0)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_STORYQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1C4D8ED0)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_REMOVE_ONQUESTGETREWARD_OFFSET UNITYSDK_OFFSET(0x1C4D8F80)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_SET_INITTABGROUPID_OFFSET UNITYSDK_OFFSET(0x1C4D8EF0)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_SET_INITTABID_OFFSET UNITYSDK_OFFSET(0x1C4D8F10)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_SET_ONUIDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4D8FF0)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL__DECIDEINITSHOWTAB_OFFSET UNITYSDK_OFFSET(0x1C4D8010)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL__ONQUESTGETREWARD_OFFSET UNITYSDK_OFFSET(0x1C4D8D50)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL__ONUIDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4D8E10)
#define RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL__REFRESHCLAIMEDCOUNTS_OFFSET UNITYSDK_OFFSET(0x1C4D76F0)

namespace RPG::Client::FateRin::Reward
{
	inline static constexpr unsigned int FateRinResidentRewardViewModel_TypeDefinitionIndex = 83511;

	class FateRinResidentRewardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* _StoryQuestList_k__BackingField; // 0x20
		::RPG::Client::FateRin::ViewModelEventHandler* OnQuestGetReward; // 0x28
		::CEEGMMCFCBG* _OnUIDispose_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Reward::FateRinLongTailRewardItem>* _LongTailRewardItemList; // 0x38
		::System::UInt32 _InitTabGroupID_k__BackingField; // 0x40
		::System::UInt32 _InitTabID_k__BackingField; // 0x44
		::System::Void _ctor(::EBEHJBOGLII* a1, ::MCPENPHEEFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EBEHJBOGLII*, ::MCPENPHEEFF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnQuestGetReward(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL__ONQUESTGETREWARD_OFFSET))(this, a1);
		}

		::System::Void _RefreshClaimedCounts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL__REFRESHCLAIMEDCOUNTS_OFFSET))(this);
		}

		::System::Void _DecideInitShowTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL__DECIDEINITSHOWTAB_OFFSET))(this);
		}

		::System::Void _OnUIDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL__ONUIDISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* get_StoryQuestList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_STORYQUESTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Reward::FateRinLongTailRewardItem>* get_LongTailRewardItemList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Reward::FateRinLongTailRewardItem>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_LONGTAILREWARDITEMLIST_OFFSET))(this);
		}

		::System::UInt32 get_InitTabGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_INITTABGROUPID_OFFSET))(this);
		}

		::System::Void set_InitTabGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_SET_INITTABGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InitTabID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_INITTABID_OFFSET))(this);
		}

		::System::Void set_InitTabID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_SET_INITTABID_OFFSET))(this, a1);
		}

		::System::Void add_OnQuestGetReward(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_ADD_ONQUESTGETREWARD_OFFSET))(this, a1);
		}

		::System::Void remove_OnQuestGetReward(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_REMOVE_ONQUESTGETREWARD_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* get_OnUIDispose()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_GET_ONUIDISPOSE_OFFSET))(this);
		}

		::System::Void set_OnUIDispose(::CEEGMMCFCBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEEGMMCFCBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REWARD_FATERINRESIDENTREWARDVIEWMODEL_SET_ONUIDISPOSE_OFFSET))(this, a1);
		}

	};
}
