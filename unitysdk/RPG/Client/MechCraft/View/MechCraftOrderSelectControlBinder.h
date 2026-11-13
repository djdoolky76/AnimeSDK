#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::MechCraft::View { class MechCraftCoinResBarControl; }
namespace RPG::Client::MechCraft::View { class MechCraftOrderDetailInfoControl; }
namespace RPG::Client::MechCraft::View { class MechCraftOrderListControl; }
namespace RPG::Client::MechCraft::View { class MechCraftOrderSelectTipsControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentTreeEntranceControl; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEA780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_BTNCONFIRM_OFFSET UNITYSDK_OFFSET(0x1DEE9660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_BTNEXIT_OFFSET UNITYSDK_OFFSET(0x1DEE9710)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x1DEE9DE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_DETAILINFO_OFFSET UNITYSDK_OFFSET(0x1DEE9AD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_FADEINANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x1DEE97C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_NODEEMPTYTALENT_OFFSET UNITYSDK_OFFSET(0x1DEE9F40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_NODETALENTTREE_OFFSET UNITYSDK_OFFSET(0x1DEE9E90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_ORDERLIST_OFFSET UNITYSDK_OFFSET(0x1DEE9870)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0x1DEE9920)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_TIPS_OFFSET UNITYSDK_OFFSET(0x1DEE9B80)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderSelectControlBinder_TypeDefinitionIndex = 82780;

	class MechCraftOrderSelectControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftOrderListControl* get_OrderList()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftOrderListControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_ORDERLIST_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentTreeEntranceControl* get_TalentEntrance()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentTreeEntranceControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_TALENTENTRANCE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftOrderDetailInfoControl* get_DetailInfo()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftOrderDetailInfoControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_DETAILINFO_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftOrderSelectTipsControl* get_Tips()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftOrderSelectTipsControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_TIPS_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnConfirm()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_BTNCONFIRM_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnExit()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_BTNEXIT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCoinResBarControl* get_CoinResBar()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCoinResBarControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_COINRESBAR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeTalentTree()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_NODETALENTTREE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_NodeEmptyTalent()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_NODEEMPTYTALENT_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* get_FadeInAnimTrigger()
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTCONTROLBINDER_GET_FADEINANIMTRIGGER_OFFSET))(this);
		}

	};
}
