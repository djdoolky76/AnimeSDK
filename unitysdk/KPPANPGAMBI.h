#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define KPPANPGAMBI_ADD_CLICKED_OFFSET UNITYSDK_OFFSET(0xB5D4180)
#define KPPANPGAMBI_BCPBHFDHFBP_OFFSET UNITYSDK_OFFSET(0xB5D4200)
#define KPPANPGAMBI_CLJMAHKPLDJ_OFFSET UNITYSDK_OFFSET(0xB5D4350)
#define KPPANPGAMBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D40C0)
#define KPPANPGAMBI_JEFBHFHNGGN_OFFSET UNITYSDK_OFFSET(0xB5D4140)
#define KPPANPGAMBI_NAEBIMHCNJD_OFFSET UNITYSDK_OFFSET(0xB5D43E0)
#define KPPANPGAMBI_REMOVE_CLICKED_OFFSET UNITYSDK_OFFSET(0xB5D42E0)
#define KPPANPGAMBI___ENSURECLICKWIRED_B__12_0_OFFSET UNITYSDK_OFFSET(0xB5D4510)

	class KPPANPGAMBI : public ::System::Object
	{
	public:
		::System::Action* BGFEONFDMJC; // 0x10
		::UnityEngine::UI::Button* AAFGIHCCPOP; // 0x18
		::UnityEngine::Transform* BKPOHOCNDOL; // 0x20
		::System::Boolean LPDIDHJOFIN; // 0x28
		::System::Boolean JLMFDOFGIAC; // 0x29
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KPPANPGAMBI_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* JEFBHFHNGGN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPANPGAMBI_JEFBHFHNGGN_OFFSET))(this);
		}

		::System::Void add_Clicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPPANPGAMBI_ADD_CLICKED_OFFSET))(this, a1);
		}

		::System::Void remove_Clicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPPANPGAMBI_REMOVE_CLICKED_OFFSET))(this, a1);
		}

		::System::Void CLJMAHKPLDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPPANPGAMBI_CLJMAHKPLDJ_OFFSET))(this, a1);
		}

		::System::Void BCPBHFDHFBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPANPGAMBI_BCPBHFDHFBP_OFFSET))(this);
		}

		::UnityEngine::UI::Button* NAEBIMHCNJD()
		{
			return ((::UnityEngine::UI::Button*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPANPGAMBI_NAEBIMHCNJD_OFFSET))(this);
		}

		::System::Void __EnsureClickWired_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPANPGAMBI___ENSURECLICKWIRED_B__12_0_OFFSET))(this);
		}

	};
