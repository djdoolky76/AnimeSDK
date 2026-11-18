#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHKMCGIHMGB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELBPNKPNCIM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17AA93B0)
#define ELBPNKPNCIM_DAMNLLCBCOH_OFFSET UNITYSDK_OFFSET(0x17AA8E40)
#define ELBPNKPNCIM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17AA90D0)
#define ELBPNKPNCIM_JPKCBKBABKM_OFFSET UNITYSDK_OFFSET(0x17AA90E0)
#define ELBPNKPNCIM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17AA90C0)
#define ELBPNKPNCIM_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x17AA8F80)
#define ELBPNKPNCIM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17AA94A0)
#define ELBPNKPNCIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA8E30)

inline static constexpr unsigned int ELBPNKPNCIM_TypeDefinitionIndex = 9470;

class ELBPNKPNCIM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GNFPAFNMGGK; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::EHKMCGIHMGB HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 AEMJJEABKGP; // 0x38
	::System::Int32 KPHOGJKNLGN; // 0x3C

	::System::Void _ctor(::EHKMCGIHMGB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EHKMCGIHMGB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ELBPNKPNCIM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DAMNLLCBCOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBPNKPNCIM_DAMNLLCBCOH_OFFSET))(this);
	}

	::System::Int32 PEOEBEBFIJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBPNKPNCIM_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBPNKPNCIM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELBPNKPNCIM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JPKCBKBABKM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBPNKPNCIM_JPKCBKBABKM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBPNKPNCIM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBPNKPNCIM_PPIFNHNGCGO_OFFSET))(this);
	}
};
