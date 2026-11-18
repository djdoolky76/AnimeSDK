#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJEKFGAOEBG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HNAOOMJOIFP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5CDE40)
#define HNAOOMJOIFP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5CDE30)
#define HNAOOMJOIFP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5CDF30)
#define HNAOOMJOIFP_MLMPIEEGOGH_OFFSET UNITYSDK_OFFSET(0x1A5CDF40)
#define HNAOOMJOIFP_PILPAGGGFDC_OFFSET UNITYSDK_OFFSET(0x1A5CE050)
#define HNAOOMJOIFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CDE20)

inline static constexpr unsigned int HNAOOMJOIFP_TypeDefinitionIndex = 13807;

class HNAOOMJOIFP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PJEKFGAOEBG HBDPAIKANDB; // 0x18
	::System::String* NDKIHENAPHA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 LGMLPBICHJO; // 0x34

	::System::Void _ctor(::PJEKFGAOEBG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PJEKFGAOEBG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HNAOOMJOIFP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNAOOMJOIFP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAOOMJOIFP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAOOMJOIFP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MLMPIEEGOGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAOOMJOIFP_MLMPIEEGOGH_OFFSET))(this);
	}

	::System::Int32 PILPAGGGFDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAOOMJOIFP_PILPAGGGFDC_OFFSET))(this);
	}
};
