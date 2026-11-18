#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMPFOMALOMD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define AJGANONGHNP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ABC750)
#define AJGANONGHNP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ABC840)
#define AJGANONGHNP_GLCPLJOLBKP_OFFSET UNITYSDK_OFFSET(0x19ABC4C0)
#define AJGANONGHNP_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x19ABC600)
#define AJGANONGHNP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ABC740)
#define AJGANONGHNP__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABC4B0)

inline static constexpr unsigned int AJGANONGHNP_TypeDefinitionIndex = 10150;

class AJGANONGHNP : public ::System::Object
{
public:
	::PMPFOMALOMD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 CKALBMAMAKP; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 FGFCAMCOPIF; // 0x30

	::System::Void _ctor(::PMPFOMALOMD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PMPFOMALOMD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AJGANONGHNP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GLCPLJOLBKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGANONGHNP_GLCPLJOLBKP_OFFSET))(this);
	}

	::System::Int32 LFGIDEIHCID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGANONGHNP_LFGIDEIHCID_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGANONGHNP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGANONGHNP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJGANONGHNP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
