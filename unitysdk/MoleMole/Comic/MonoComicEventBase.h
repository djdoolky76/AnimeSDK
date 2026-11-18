#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xFAA0050)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFAA00E0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_BJNILHPIEPI_OFFSET UNITYSDK_OFFSET(0xFAA02C0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_CMGFGOFMIEM_OFFSET UNITYSDK_OFFSET(0xFAA0030)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xFAA0990)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_FAAANINJHMC_OFFSET UNITYSDK_OFFSET(0xFAA0360)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_FGLGALMNDBM_OFFSET UNITYSDK_OFFSET(0xFAA0310)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0xFAA0950)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_GMNCKCLJFNP_OFFSET UNITYSDK_OFFSET(0xFAA0A80)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0xFAA0150)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISAUTOFINISH_OFFSET UNITYSDK_OFFSET(0xFAA0850)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISDELAYING_OFFSET UNITYSDK_OFFSET(0xFAA0730)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISFINISH_OFFSET UNITYSDK_OFFSET(0xFAA07F0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xFAA0790)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_KMOJEJNHCPM_OFFSET UNITYSDK_OFFSET(0xFAA0AE0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_PCKGOECGJFP_OFFSET UNITYSDK_OFFSET(0xFAA0040)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0xFAA0910)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xFAA09D0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xFAA0540)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETPARENT_OFFSET UNITYSDK_OFFSET(0xFAA03B0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xFAA08D0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xFAA06D0)
#define MOLEMOLE_COMIC_MONOCOMICEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA0A30)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicEventBase_TypeDefinitionIndex = 81586;

	class MonoComicEventBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* FPIKPNDEBGI; // 0x18
		::UnityEngine::RectTransform* KBLLFJCIPPO; // 0x20
		::System::Boolean HPINBCPMHJE; // 0x28
		::System::Boolean _BAEEGPEDIFG_k__BackingField; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single DDFLPPKHDHB; // 0x2C
		::System::Action* callbackFunc; // 0x30
		::System::String* DCJCHGOGLMF; // 0x38
		::MoleMole::ComicImgPart belongPart; // 0x40
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* LogicTags; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean CMGFGOFMIEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_CMGFGOFMIEM_OFFSET))(this);
		}

		::System::Void PCKGOECGJFP(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_PCKGOECGJFP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_AWAKE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* IGLBHBHINFH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_INITWITHBASE_OFFSET))(this, IGLBHBHINFH);
		}

		::System::Void SetParent(::UnityEngine::RectTransform* DNPCBBFCMJO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETPARENT_OFFSET))(this, DNPCBBFCMJO);
		}

		::System::Void SetActive(::System::Boolean JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_SETACTIVE_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void UpdateTime(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_UPDATETIME_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Boolean IsDelaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISDELAYING_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISFINISH_OFFSET))(this);
		}

		::System::Boolean IsAutoFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ISAUTOFINISH_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_ENDPLAY_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void GMNCKCLJFNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_GMNCKCLJFNP_OFFSET))(this);
		}

		::System::Void FGLGALMNDBM(::MoleMole::ComicImgPart GMGJEBKPBEK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_FGLGALMNDBM_OFFSET))(this, GMGJEBKPBEK);
		}

		::System::Void FAAANINJHMC(::System::Collections::Generic::List_1<::System::Int32>* JMDOANHOEJG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_FAAANINJHMC_OFFSET))(this, JMDOANHOEJG);
		}

		::System::Void BJNILHPIEPI(::System::String* MCOHLHMKLIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_BJNILHPIEPI_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void KMOJEJNHCPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_KMOJEJNHCPM_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICEVENTBASE_BBOMJDBNHIC_OFFSET))(this);
		}
	};
}
