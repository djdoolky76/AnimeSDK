#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGAKBGCEIAJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IMCINJNIOLD_BBBJJJABCOG_OFFSET UNITYSDK_OFFSET(0x1A5E2320)
#define IMCINJNIOLD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5E2460)
#define IMCINJNIOLD_DJFGOALCAOF_OFFSET UNITYSDK_OFFSET(0x1A5E27E0)
#define IMCINJNIOLD_EGLMIMILBPO_OFFSET UNITYSDK_OFFSET(0x1A5E2550)
#define IMCINJNIOLD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5E2920)
#define IMCINJNIOLD_HMCBOMGBLIB_OFFSET UNITYSDK_OFFSET(0x1A5E21E0)
#define IMCINJNIOLD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5E2690)
#define IMCINJNIOLD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A5E26A0)
#define IMCINJNIOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E21D0)

inline static constexpr unsigned int IMCINJNIOLD_TypeDefinitionIndex = 14081;

class IMCINJNIOLD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::BGAKBGCEIAJ HBDPAIKANDB; // 0x18
	::System::Int32 DGNJHENGJBC; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 NOBOONPLJFG; // 0x34
	::System::Int32 GEGMEHLNLMD; // 0x38
	::System::Int32 LEKAHANOJMD; // 0x3C

	::System::Void _ctor(::BGAKBGCEIAJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BGAKBGCEIAJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMCINJNIOLD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HMCBOMGBLIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCINJNIOLD_HMCBOMGBLIB_OFFSET))(this);
	}

	::System::Int32 BBBJJJABCOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCINJNIOLD_BBBJJJABCOG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCINJNIOLD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 EGLMIMILBPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCINJNIOLD_EGLMIMILBPO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCINJNIOLD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCINJNIOLD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 DJFGOALCAOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCINJNIOLD_DJFGOALCAOF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMCINJNIOLD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
