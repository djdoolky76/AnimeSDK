#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonsterGuideData; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::Challenge { class ChallengeFocusChangeDetectControl; }
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_CKBDFHJBOLA_OFFSET UNITYSDK_OFFSET(0xD2A28D0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD2A2FE0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_GET_MONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0xD2A2570)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_KAMGGJKLALN_OFFSET UNITYSDK_OFFSET(0xD2A2DC0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD2A2650)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_MPEBHMLOMGD_OFFSET UNITYSDK_OFFSET(0xD2A29D0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_NODBBGNBNAJ_OFFSET UNITYSDK_OFFSET(0xD2A2960)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_SET_MONSTERGUIDE_OFFSET UNITYSDK_OFFSET(0xD2A25B0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___REFRESH_B__11_0_OFFSET UNITYSDK_OFFSET(0xD2A2FF0)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___REFRESH_B__11_1_OFFSET UNITYSDK_OFFSET(0xD2A3000)

namespace RPG::Client::Challenge::Boss
{
	inline static constexpr unsigned int ChallengeBossGuideTagListControl_TypeDefinitionIndex = 84423;

	class ChallengeBossGuideTagListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::StaticListView* _ItemList; // 0x18
		::UnityEngine::RectTransform* _NodePlaceHolder; // 0x20
		::UnityEngine::RectTransform* _NodePopup; // 0x28
		::UnityEngine::RectTransform* _NodeTagList; // 0x30
		::RPG::Client::Challenge::ChallengeFocusChangeDetectControl* _FocusChangeDetect; // 0x38
		::RPG::Client::AnimatorButton* _BtnDetail; // 0x40
		::RPG::Client::MonsterGuideData* IMNGOFFJLON; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* NNDOBIMOFEO; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MonsterGuideData* get_MonsterGuide()
		{
			return ((::RPG::Client::MonsterGuideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_GET_MONSTERGUIDE_OFFSET))(this);
		}

		::System::Void set_MonsterGuide(::RPG::Client::MonsterGuideData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterGuideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_SET_MONSTERGUIDE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void CKBDFHJBOLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_CKBDFHJBOLA_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* MPEBHMLOMGD(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_MPEBHMLOMGD_OFFSET))(this, a1);
		}

		::System::Void KAMGGJKLALN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_KAMGGJKLALN_OFFSET))(this, a1);
		}

		::System::Void NODBBGNBNAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL_NODBBGNBNAJ_OFFSET))(this, a1);
		}

		::System::Void __Refresh_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___REFRESH_B__11_0_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* __Refresh_b__11_1(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___REFRESH_B__11_1_OFFSET))(this, a1, a2, a3);
		}

	};
}
