#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEIDNDJNFPC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JHDOOJFOMCI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C282A0)
#define JHDOOJFOMCI_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x17C28010)
#define JHDOOJFOMCI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C28290)
#define JHDOOJFOMCI_GCKLAJCDKOH_OFFSET UNITYSDK_OFFSET(0x17C28150)
#define JHDOOJFOMCI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C284D0)
#define JHDOOJFOMCI_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x17C28390)
#define JHDOOJFOMCI__CTOR_OFFSET UNITYSDK_OFFSET(0x17C28000)

inline static constexpr unsigned int JHDOOJFOMCI_TypeDefinitionIndex = 11122;

class JHDOOJFOMCI : public ::System::Object
{
public:
	::AEIDNDJNFPC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 COHJGPCKEIH; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 IMEJAFHPLJD; // 0x30
	::System::Int32 JEDEMPHDCAK; // 0x34

	::System::Void _ctor(::AEIDNDJNFPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AEIDNDJNFPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JHDOOJFOMCI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDOOJFOMCI_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Int32 GCKLAJCDKOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDOOJFOMCI_GCKLAJCDKOH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHDOOJFOMCI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDOOJFOMCI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDOOJFOMCI_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDOOJFOMCI_LJANCIBECFG_OFFSET))(this);
	}
};
