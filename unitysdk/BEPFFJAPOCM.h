#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEJGOONCCDO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BEPFFJAPOCM_BMHJDECGOEE_OFFSET UNITYSDK_OFFSET(0x1ADB0520)
#define BEPFFJAPOCM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADB0430)
#define BEPFFJAPOCM_FADPBKFIBDD_OFFSET UNITYSDK_OFFSET(0x1ADB0670)
#define BEPFFJAPOCM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADB0660)
#define BEPFFJAPOCM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADB0420)
#define BEPFFJAPOCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB0410)

inline static constexpr unsigned int BEPFFJAPOCM_TypeDefinitionIndex = 10060;

class BEPFFJAPOCM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IMAFCDDJOME; // 0x18
	::System::String* BHMOGLIOECA; // 0x20
	::MEJGOONCCDO HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 BMJLCEPHENM; // 0x3C

	::System::Void _ctor(::MEJGOONCCDO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MEJGOONCCDO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BEPFFJAPOCM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPFFJAPOCM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPFFJAPOCM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BMHJDECGOEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPFFJAPOCM_BMHJDECGOEE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEPFFJAPOCM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* FADPBKFIBDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPFFJAPOCM_FADPBKFIBDD_OFFSET))(this);
	}
};
