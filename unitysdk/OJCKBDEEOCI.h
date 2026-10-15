#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define OJCKBDEEOCI_AAJFOPHDDIG_OFFSET UNITYSDK_OFFSET(0xBEAD290)
#define OJCKBDEEOCI_AHHONLKBJEC_OFFSET UNITYSDK_OFFSET(0xBEACD90)
#define OJCKBDEEOCI_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xBEAD240)
#define OJCKBDEEOCI_CTOR_OFFSET UNITYSDK_OFFSET(0xBEAD350)
#define OJCKBDEEOCI_DMDJFEPHHGP_OFFSET UNITYSDK_OFFSET(0xBEAD300)
#define OJCKBDEEOCI_FADEIN_OFFSET UNITYSDK_OFFSET(0xBEAD060)
#define OJCKBDEEOCI_FULLSHOW_OFFSET UNITYSDK_OFFSET(0xBEACF70)
#define OJCKBDEEOCI_GET_ISALWAYSSHOW_OFFSET UNITYSDK_OFFSET(0xBEACCA0)
#define OJCKBDEEOCI_GET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0xBEACCC0)
#define OJCKBDEEOCI_GET_STATE_OFFSET UNITYSDK_OFFSET(0xBEACCE0)
#define OJCKBDEEOCI_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0xBEACF00)
#define OJCKBDEEOCI_HIDE_OFFSET UNITYSDK_OFFSET(0xBEAD150)
#define OJCKBDEEOCI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBEACD00)
#define OJCKBDEEOCI_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xBEACC40)
#define OJCKBDEEOCI_SET_ISALWAYSSHOW_OFFSET UNITYSDK_OFFSET(0xBEACCB0)
#define OJCKBDEEOCI_SET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0xBEACCD0)
#define OJCKBDEEOCI_SET_STATE_OFFSET UNITYSDK_OFFSET(0xBEACCF0)

	class OJCKBDEEOCI : public ::System::Object
	{
	public:
		::UnityEngine::AnimationClip* GNCMMGECOBK; // 0x10
		::UnityEngine::AnimationClip* MFGGIEHDMCI; // 0x18
		::UnityEngine::Animation* PMOJILOJEPE; // 0x20
		::UnityEngine::AnimationClip* LPLCLNAOOOH; // 0x28
		::System::Boolean _IsAlwaysShow_k__BackingField; // 0x30
		::System::Boolean _IsAutoFadeIn_k__BackingField; // 0x31
		::System::Byte _padding0[0x2];
		::RPG::Client::BookletFadeInState _State_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_CTOR_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean get_IsAlwaysShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_GET_ISALWAYSSHOW_OFFSET))(this);
		}

		::System::Void set_IsAlwaysShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_SET_ISALWAYSSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAutoFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_GET_ISAUTOFADEIN_OFFSET))(this);
		}

		::System::Void set_IsAutoFadeIn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_SET_ISAUTOFADEIN_OFFSET))(this, a1);
		}

		::RPG::Client::BookletFadeInState get_State()
		{
			return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::BookletFadeInState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletFadeInState))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Animation* a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::AnimationClip* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GNPDMIGGLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_GNPDMIGGLPF_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_FADEIN_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_HIDE_OFFSET))(this);
		}

		::System::Void FullShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_FULLSHOW_OFFSET))(this);
		}

		::System::Void AHHONLKBJEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_AHHONLKBJEC_OFFSET))(this);
		}

		::System::Void AAJFOPHDDIG(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_AAJFOPHDDIG_OFFSET))(this, a1);
		}

		::System::Void DMDJFEPHHGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCKBDEEOCI_DMDJFEPHHGP_OFFSET))(this);
		}

	};
