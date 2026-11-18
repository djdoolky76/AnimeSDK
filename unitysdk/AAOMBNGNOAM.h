#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOKGIKFOFE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AAOMBNGNOAM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B97F4A0)
#define AAOMBNGNOAM_EABPPOIEGBF_OFFSET UNITYSDK_OFFSET(0x1B97F250)
#define AAOMBNGNOAM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B97F5A0)
#define AAOMBNGNOAM_HIKCEMKAGJO_OFFSET UNITYSDK_OFFSET(0x1B97F360)
#define AAOMBNGNOAM_HOKEGMMCGEL_OFFSET UNITYSDK_OFFSET(0x1B97F110)
#define AAOMBNGNOAM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B97F590)
#define AAOMBNGNOAM_NAEBKLJMCNA_OFFSET UNITYSDK_OFFSET(0x1B97F5B0)
#define AAOMBNGNOAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97F100)

inline static constexpr unsigned int AAOMBNGNOAM_TypeDefinitionIndex = 16811;

class AAOMBNGNOAM : public ::System::Object
{
public:
	::IOOKGIKFOFE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* OLCMHJJOIJO; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 JCMCAEBNLDC; // 0x34
	::System::Int32 FKEGBKAGEGA; // 0x38
	::System::Int32 NKIACCFPKPE; // 0x3C

	::System::Void _ctor(::IOOKGIKFOFE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IOOKGIKFOFE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AAOMBNGNOAM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HOKEGMMCGEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOMBNGNOAM_HOKEGMMCGEL_OFFSET))(this);
	}

	::System::String* EABPPOIEGBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOMBNGNOAM_EABPPOIEGBF_OFFSET))(this);
	}

	::System::Int32 HIKCEMKAGJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOMBNGNOAM_HIKCEMKAGJO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOMBNGNOAM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOMBNGNOAM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAOMBNGNOAM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NAEBKLJMCNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOMBNGNOAM_NAEBKLJMCNA_OFFSET))(this);
	}
};
