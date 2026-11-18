#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPGHCLGMPI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NCIKPLKPFLN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195B2FD0)
#define NCIKPLKPFLN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195B3210)
#define NCIKPLKPFLN_GOPPNOEDNMN_OFFSET UNITYSDK_OFFSET(0x195B30C0)
#define NCIKPLKPFLN_JNOOFDJNPFJ_OFFSET UNITYSDK_OFFSET(0x195B2E90)
#define NCIKPLKPFLN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195B3200)
#define NCIKPLKPFLN__CTOR_OFFSET UNITYSDK_OFFSET(0x195B2E80)

inline static constexpr unsigned int NCIKPLKPFLN_TypeDefinitionIndex = 12370;

class NCIKPLKPFLN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FMPGHCLGMPI HBDPAIKANDB; // 0x18
	::System::Int32 ADJCDHFABCB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 EMDCNFGONFG; // 0x30

	::System::Void _ctor(::FMPGHCLGMPI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMPGHCLGMPI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCIKPLKPFLN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JNOOFDJNPFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIKPLKPFLN_JNOOFDJNPFJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIKPLKPFLN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GOPPNOEDNMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIKPLKPFLN_GOPPNOEDNMN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIKPLKPFLN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCIKPLKPFLN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
