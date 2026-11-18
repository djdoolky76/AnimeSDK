#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGBOFPIEHBM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define INGGEEAJAIC_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x19354950)
#define INGGEEAJAIC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x193545D0)
#define INGGEEAJAIC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19354A90)
#define INGGEEAJAIC_HGOJEGDOHOH_OFFSET UNITYSDK_OFFSET(0x193546D0)
#define INGGEEAJAIC_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x193307C0)
#define INGGEEAJAIC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x193546C0)
#define INGGEEAJAIC_NMNJFPOODPI_OFFSET UNITYSDK_OFFSET(0x19354810)
#define INGGEEAJAIC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19354AA0)
#define INGGEEAJAIC__CTOR_OFFSET UNITYSDK_OFFSET(0x193545C0)

inline static constexpr unsigned int INGGEEAJAIC_TypeDefinitionIndex = 12721;

class INGGEEAJAIC : public ::System::Object
{
public:
	::EGBOFPIEHBM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 BPMHKHIBGEJ; // 0x2C
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 MFABDEBPOJH; // 0x34
	::System::Int32 ONPMJGJBNOA; // 0x38
	::System::Int32 BLLIOAFMPGP; // 0x3C

	::System::Void _ctor(::EGBOFPIEHBM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EGBOFPIEHBM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + INGGEEAJAIC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGGEEAJAIC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGGEEAJAIC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGGEEAJAIC_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Int32 HGOJEGDOHOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGGEEAJAIC_HGOJEGDOHOH_OFFSET))(this);
	}

	::System::Int32 NMNJFPOODPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGGEEAJAIC_NMNJFPOODPI_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGGEEAJAIC_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INGGEEAJAIC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGGEEAJAIC_PPIFNHNGCGO_OFFSET))(this);
	}
};
