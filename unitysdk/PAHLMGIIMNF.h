#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define PAHLMGIIMNF_BFBMNJNNBFN_OFFSET UNITYSDK_OFFSET(0x15FF83E0)
#define PAHLMGIIMNF_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x15FF80D0)
#define PAHLMGIIMNF_JDNCICHMFKE_OFFSET UNITYSDK_OFFSET(0x15FF83B0)
#define PAHLMGIIMNF_KEGCPNHDONH_OFFSET UNITYSDK_OFFSET(0x15FF83D0)
#define PAHLMGIIMNF_ONDROP_OFFSET UNITYSDK_OFFSET(0x15FF82E0)
#define PAHLMGIIMNF_PGIGLFGOMPO_OFFSET UNITYSDK_OFFSET(0x15FF83C0)
#define PAHLMGIIMNF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF80C0)

inline static constexpr unsigned int PAHLMGIIMNF_TypeDefinitionIndex = 53642;

class PAHLMGIIMNF : public ::System::Object
{
public:
	::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>* _DJOFIHADCHP_k__BackingField; // 0x10
	::System::Action_2<::FMHDMLBDIJC*, ::FMHDMLBDIJC*>* KFBIFIGFGLN; // 0x18
	::FMHDMLBDIJC* GILPMHFIKFF; // 0x20
	::System::Nullable_1<::OFDKEANKAIL> JHEEOAFPHEK; // 0x28

	::System::Void _ctor(::FMHDMLBDIJC* IMLOMPEFIAB, ::System::Action_2<::FMHDMLBDIJC*, ::FMHDMLBDIJC*>* EFNGJOLKNJK, ::System::Nullable_1<::OFDKEANKAIL> MAOCFFFKJCF)
	{
		return ((::System::Void(*)(::PVOID, ::FMHDMLBDIJC*, ::System::Action_2<::FMHDMLBDIJC*, ::FMHDMLBDIJC*>*, ::System::Nullable_1<::OFDKEANKAIL>))((::PBYTE)hIl2Cpp + PAHLMGIIMNF__CTOR_OFFSET))(this, IMLOMPEFIAB, EFNGJOLKNJK, MAOCFFFKJCF);
	}

	::System::Boolean CanAcceptDrop(::System::Object* MFHBPIBHAOB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAHLMGIIMNF_CANACCEPTDROP_OFFSET))(this, MFHBPIBHAOB);
	}

	::System::Void OnDrop(::System::Object* MFHBPIBHAOB, ::UnityEngine::Transform* JHDOMODPOPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PAHLMGIIMNF_ONDROP_OFFSET))(this, MFHBPIBHAOB, JHDOMODPOPO);
	}

	::System::Void JDNCICHMFKE(::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>*))((::PBYTE)hIl2Cpp + PAHLMGIIMNF_JDNCICHMFKE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Nullable_1<::OFDKEANKAIL> PGIGLFGOMPO()
	{
		return ((::System::Nullable_1<::OFDKEANKAIL>(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHLMGIIMNF_PGIGLFGOMPO_OFFSET))(this);
	}

	::FMHDMLBDIJC* KEGCPNHDONH()
	{
		return ((::FMHDMLBDIJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHLMGIIMNF_KEGCPNHDONH_OFFSET))(this);
	}

	::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>* BFBMNJNNBFN()
	{
		return ((::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHLMGIIMNF_BFBMNJNNBFN_OFFSET))(this);
	}
};
