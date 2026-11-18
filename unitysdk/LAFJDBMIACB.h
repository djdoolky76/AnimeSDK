#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPJIKIMGBCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAFJDBMIACB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7EB300)
#define LAFJDBMIACB_DCICMNPAMHK_OFFSET UNITYSDK_OFFSET(0x1B7EAEE0)
#define LAFJDBMIACB_DIPBPHOCMOO_OFFSET UNITYSDK_OFFSET(0x1B7EAC10)
#define LAFJDBMIACB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7EA660)
#define LAFJDBMIACB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7EB2F0)
#define LAFJDBMIACB_NIAFIPLNJNL_OFFSET UNITYSDK_OFFSET(0x1B7EA940)
#define LAFJDBMIACB_OPDBEKJACGF_OFFSET UNITYSDK_OFFSET(0x1B7EA670)
#define LAFJDBMIACB_PPLOCADJGBM_OFFSET UNITYSDK_OFFSET(0x1B7EB020)
#define LAFJDBMIACB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EA650)

inline static constexpr unsigned int LAFJDBMIACB_TypeDefinitionIndex = 17383;

class LAFJDBMIACB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FCMFAJGEOPB; // 0x10
	::LPJIKIMGBCK HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* DKMJNNFOIBB; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* OFCEPENEDMN; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* JDFJHLJDPCO; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* HMMLDCBNOLL; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* EKPIFCOGIDE; // 0x50
	::System::Int32 FJFPEBOGNNE; // 0x58
	::System::Int32 LMMCMIMOFMN; // 0x5C
	::System::Byte ACIOBDEBDNK; // 0x60
	::System::Byte CNIAANMNOCF; // 0x61
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x62

	::System::Void _ctor(::LPJIKIMGBCK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LPJIKIMGBCK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LAFJDBMIACB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAFJDBMIACB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OPDBEKJACGF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFJDBMIACB_OPDBEKJACGF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NIAFIPLNJNL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFJDBMIACB_NIAFIPLNJNL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DIPBPHOCMOO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFJDBMIACB_DIPBPHOCMOO_OFFSET))(this);
	}

	::System::Int32 DCICMNPAMHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFJDBMIACB_DCICMNPAMHK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PPLOCADJGBM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFJDBMIACB_PPLOCADJGBM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFJDBMIACB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFJDBMIACB_COFGIJJOFLP_OFFSET))(this);
	}
};
