#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define KPPANPGAMBI_ADD_CLICKED_OFFSET UNITYSDK_OFFSET(0xBE65410)
#define KPPANPGAMBI_BCPBHFDHFBP_OFFSET UNITYSDK_OFFSET(0xBE65490)
#define KPPANPGAMBI_CLJMAHKPLDJ_OFFSET UNITYSDK_OFFSET(0xBE655E0)
#define KPPANPGAMBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE65350)
#define KPPANPGAMBI_JEFBHFHNGGN_OFFSET UNITYSDK_OFFSET(0xBE653D0)
#define KPPANPGAMBI_NAEBIMHCNJD_OFFSET UNITYSDK_OFFSET(0xBE65670)
#define KPPANPGAMBI_REMOVE_CLICKED_OFFSET UNITYSDK_OFFSET(0xBE65570)
#define KPPANPGAMBI___ENSURECLICKWIRED_B__12_0_OFFSET UNITYSDK_OFFSET(0xBE657A0)

inline static constexpr unsigned int KPPANPGAMBI_TypeDefinitionIndex = 74753;

	class KPPANPGAMBI : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* AAFGIHCCPOP; // 0x10
		::System::Action* BGFEONFDMJC; // 0x18
		::UnityEngine::Transform* BKPOHOCNDOL; // 0x20
		::System::Boolean JLMFDOFGIAC; // 0x28
		::System::Boolean LPDIDHJOFIN; // 0x29
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
