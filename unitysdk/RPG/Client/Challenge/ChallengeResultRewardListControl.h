#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AHCEFHABPDI;
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC93FB60)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xC93F590)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC93F620)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_MPEBHMLOMGD_OFFSET UNITYSDK_OFFSET(0xC93F850)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xC93F5D0)
#define RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL___REFRESH_B__5_0_OFFSET UNITYSDK_OFFSET(0xC93FB70)

namespace RPG::Client::Challenge
{
	class ChallengeResultRewardListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::AHCEFHABPDI*>* GCIKKMGIPIO; // 0x18
		::SuperScrollView::LoopGridView* _ItemList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::AHCEFHABPDI*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::AHCEFHABPDI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::IReadOnlyList_1<::AHCEFHABPDI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::AHCEFHABPDI*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_SET_ITEMS_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_KANMCJHEFJJ_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* MPEBHMLOMGD(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL_MPEBHMLOMGD_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* __Refresh_b__5_0(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGERESULTREWARDLISTCONTROL___REFRESH_B__5_0_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
}
