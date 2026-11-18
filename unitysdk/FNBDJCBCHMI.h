#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"

class BGMAOELOEGI;
class FNBDJCBCHMI_EBLBGCHPLMK;
class PEPGAFEGEME;
namespace System { class EventArgs; }
namespace System { class String; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class DBMAHDDGMHM_1;

#define FNBDJCBCHMI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x11D89740)
#define FNBDJCBCHMI_BIFNOOJCAHJ_OFFSET UNITYSDK_OFFSET(0x11D88340)
#define FNBDJCBCHMI_BOCJMDIKMLE_OFFSET UNITYSDK_OFFSET(0x11D87E20)
#define FNBDJCBCHMI_DBMJOMNGFMK_OFFSET UNITYSDK_OFFSET(0x11D89750)
#define FNBDJCBCHMI_FBMNCADAJHG_OFFSET UNITYSDK_OFFSET(0x11D88C50)
#define FNBDJCBCHMI_IAIPPMPPHBF_OFFSET UNITYSDK_OFFSET(0x11D88CE0)
#define FNBDJCBCHMI_JPDAKPBKLJJ_OFFSET UNITYSDK_OFFSET(0x11D880C0)
#define FNBDJCBCHMI_MFNOCGEDCAD_OFFSET UNITYSDK_OFFSET(0x11D88910)
#define FNBDJCBCHMI_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x11D880B0)
#define FNBDJCBCHMI_NKJNEEGHEAC_OFFSET UNITYSDK_OFFSET(0x11D88640)
#define FNBDJCBCHMI_NKLPDEBMBEG_OFFSET UNITYSDK_OFFSET(0x11D883F0)
#define FNBDJCBCHMI_OCHPJDDIOBI_OFFSET UNITYSDK_OFFSET(0x11D898E0)
#define FNBDJCBCHMI_ONREADY_OFFSET UNITYSDK_OFFSET(0x11D869D0)
#define FNBDJCBCHMI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11D87E90)
#define FNBDJCBCHMI__CTOR_OFFSET UNITYSDK_OFFSET(0x11D88020)

inline static constexpr unsigned int FNBDJCBCHMI_TypeDefinitionIndex = 68956;

class FNBDJCBCHMI
{
public:
	::BFMLEHMAGAK_1<::BGMAOELOEGI*>* OCKHEIGGEAG; // 0x38
	::FNBDJCBCHMI_EBLBGCHPLMK* LEJOKHDDIJO; // 0x40
	::DBMAHDDGMHM_1<::System::Int32>* NHIMJBOMBBN; // 0x48
	::PEPGAFEGEME* AHMFPFACACD; // 0x50
	::System::Boolean GJOHKMFAFGP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI__CTOR_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_ONRECYCLE_OFFSET))(this);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_MLMLEKKJJID_OFFSET))(this);
	}

	::System::Void JPDAKPBKLJJ(::Foundation::Unreal::FGameplayTag NGDHFIJKKDO)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_JPDAKPBKLJJ_OFFSET))(this, NGDHFIJKKDO);
	}

	::System::String* NKLPDEBMBEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_NKLPDEBMBEG_OFFSET))(this);
	}

	::BGMAOELOEGI* NKJNEEGHEAC()
	{
		return ((::BGMAOELOEGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_NKJNEEGHEAC_OFFSET))(this);
	}

	::System::Void FBMNCADAJHG(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_FBMNCADAJHG_OFFSET))(this, EIFONLCJOPG);
	}

	::Foundation::Unreal::FGameplayTag MFNOCGEDCAD()
	{
		return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_MFNOCGEDCAD_OFFSET))(this);
	}

	::System::Void IAIPPMPPHBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_IAIPPMPPHBF_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Int32 DBMJOMNGFMK(::GPJMHAAEIKO CBHKCCOFHKA)
	{
		return ((::System::Int32(*)(::PVOID, ::GPJMHAAEIKO))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_DBMJOMNGFMK_OFFSET))(this, CBHKCCOFHKA);
	}

	::System::Void BOCJMDIKMLE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_BOCJMDIKMLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OCHPJDDIOBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_OCHPJDDIOBI_OFFSET))(this);
	}

	::System::Void BIFNOOJCAHJ(::Foundation::Unreal::FGameplayTag LGEOOBHMAPF)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_BIFNOOJCAHJ_OFFSET))(this, LGEOOBHMAPF);
	}
};
