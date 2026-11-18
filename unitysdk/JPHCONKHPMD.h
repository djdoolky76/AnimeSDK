#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAFDLHGBPME.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JPHCONKHPMD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAFEAB0)
#define JPHCONKHPMD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAFEBA0)
#define JPHCONKHPMD_HECLEPIPAAM_OFFSET UNITYSDK_OFFSET(0x1BAFE820)
#define JPHCONKHPMD_ICINFJGJJDE_OFFSET UNITYSDK_OFFSET(0x1BAFE970)
#define JPHCONKHPMD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAFE960)
#define JPHCONKHPMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFE810)

inline static constexpr unsigned int JPHCONKHPMD_TypeDefinitionIndex = 15938;

class JPHCONKHPMD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CAFDLHGBPME HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 OKMEJPFJHAP; // 0x2C
	::System::Int32 NAKOGFHBHCH; // 0x30

	::System::Void _ctor(::CAFDLHGBPME LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CAFDLHGBPME, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JPHCONKHPMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HECLEPIPAAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCONKHPMD_HECLEPIPAAM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCONKHPMD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 ICINFJGJJDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCONKHPMD_ICINFJGJJDE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCONKHPMD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPHCONKHPMD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
