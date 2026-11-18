#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GADJODHJBBO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FMOFCBEOPOC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7B0A30)
#define FMOFCBEOPOC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7B0C60)
#define FMOFCBEOPOC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7B08E0)
#define FMOFCBEOPOC_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1B7B08F0)
#define FMOFCBEOPOC_OOGODFAOKBP_OFFSET UNITYSDK_OFFSET(0x1B7B0B20)
#define FMOFCBEOPOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B08D0)

inline static constexpr unsigned int FMOFCBEOPOC_TypeDefinitionIndex = 13777;

class FMOFCBEOPOC : public ::System::Object
{
public:
	::GADJODHJBBO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 JEDEMPHDCAK; // 0x28
	::System::Int32 ANPHPFMGGFD; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::GADJODHJBBO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GADJODHJBBO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FMOFCBEOPOC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOFCBEOPOC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOFCBEOPOC_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOFCBEOPOC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OOGODFAOKBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOFCBEOPOC_OOGODFAOKBP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMOFCBEOPOC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
