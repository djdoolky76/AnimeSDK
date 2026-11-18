#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAEJMGGEAKN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NOPNALMPNHB_AMDNKGIAOGM_OFFSET UNITYSDK_OFFSET(0x1BAAEB60)
#define NOPNALMPNHB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAAE7E0)
#define NOPNALMPNHB_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x1BAAE8E0)
#define NOPNALMPNHB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAAE8D0)
#define NOPNALMPNHB_LBILOAHHEOH_OFFSET UNITYSDK_OFFSET(0x1BAAEDE0)
#define NOPNALMPNHB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAAEF20)
#define NOPNALMPNHB_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1BAAECA0)
#define NOPNALMPNHB_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x1BAAEA20)
#define NOPNALMPNHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAE7D0)

inline static constexpr unsigned int NOPNALMPNHB_TypeDefinitionIndex = 12744;

class NOPNALMPNHB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::EAEJMGGEAKN HBDPAIKANDB; // 0x18
	::System::Int32 JDNHPDCOJPP; // 0x28
	::System::Int32 JEDEMPHDCAK; // 0x2C
	::System::Int32 LLJBFIIHJDI; // 0x30
	::System::Int32 COHJGPCKEIH; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 GMOALNPKJIE; // 0x3C

	::System::Void _ctor(::EAEJMGGEAKN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EAEJMGGEAKN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOPNALMPNHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPNALMPNHB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOPNALMPNHB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPNALMPNHB_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPNALMPNHB_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 AMDNKGIAOGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPNALMPNHB_AMDNKGIAOGM_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPNALMPNHB_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 LBILOAHHEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPNALMPNHB_LBILOAHHEOH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPNALMPNHB_LJANCIBECFG_OFFSET))(this);
	}
};
