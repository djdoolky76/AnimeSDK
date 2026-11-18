#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEFGAHIGDBD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCMKCBJHNGN_BCACLHDEJHP_OFFSET UNITYSDK_OFFSET(0x17BE8380)
#define GCMKCBJHNGN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17BE88E0)
#define GCMKCBJHNGN_FFDOGDNAGJP_OFFSET UNITYSDK_OFFSET(0x17BE87A0)
#define GCMKCBJHNGN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17BE84C0)
#define GCMKCBJHNGN_GLCBHOMFPGF_OFFSET UNITYSDK_OFFSET(0x17BE84D0)
#define GCMKCBJHNGN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17BE8370)
#define GCMKCBJHNGN_POJMICLADCB_OFFSET UNITYSDK_OFFSET(0x17BE8230)
#define GCMKCBJHNGN__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE8220)

inline static constexpr unsigned int GCMKCBJHNGN_TypeDefinitionIndex = 12144;

class GCMKCBJHNGN : public ::System::Object
{
public:
	::JEFGAHIGDBD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* PBBIAPOFIJG; // 0x28
	::System::Int32 EHOKDLMPHBL; // 0x30
	::System::Int32 KFLEHIGBNEG; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 COFHHEOFIGE; // 0x3C

	::System::Void _ctor(::JEFGAHIGDBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JEFGAHIGDBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GCMKCBJHNGN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 POJMICLADCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMKCBJHNGN_POJMICLADCB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMKCBJHNGN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BCACLHDEJHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMKCBJHNGN_BCACLHDEJHP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCMKCBJHNGN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GLCBHOMFPGF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMKCBJHNGN_GLCBHOMFPGF_OFFSET))(this);
	}

	::System::Int32 FFDOGDNAGJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMKCBJHNGN_FFDOGDNAGJP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMKCBJHNGN_COFGIJJOFLP_OFFSET))(this);
	}
};
