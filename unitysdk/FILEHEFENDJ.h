#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHLKEKJAOGM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FILEHEFENDJ_BBBMANAGDCO_OFFSET UNITYSDK_OFFSET(0x1B106230)
#define FILEHEFENDJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B106140)
#define FILEHEFENDJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B105D60)
#define FILEHEFENDJ_GKBCGPBAGCL_OFFSET UNITYSDK_OFFSET(0x1B105EC0)
#define FILEHEFENDJ_GNHFIHOHHBA_OFFSET UNITYSDK_OFFSET(0x1B106000)
#define FILEHEFENDJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B105EB0)
#define FILEHEFENDJ_POMGKNNDMAH_OFFSET UNITYSDK_OFFSET(0x1B105D70)
#define FILEHEFENDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B105D50)

inline static constexpr unsigned int FILEHEFENDJ_TypeDefinitionIndex = 16850;

class FILEHEFENDJ : public ::System::Object
{
public:
	::CHLKEKJAOGM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 OPOEBGPIIIG; // 0x2C
	::System::Int32 ACOHHPDNPAD; // 0x30
	::System::Int32 HMIACKGHNIO; // 0x34
	::System::Int32 BNPIDPAHDAK; // 0x38

	::System::Void _ctor(::CHLKEKJAOGM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CHLKEKJAOGM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FILEHEFENDJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FILEHEFENDJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 POMGKNNDMAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILEHEFENDJ_POMGKNNDMAH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FILEHEFENDJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GKBCGPBAGCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILEHEFENDJ_GKBCGPBAGCL_OFFSET))(this);
	}

	::System::Int32 GNHFIHOHHBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILEHEFENDJ_GNHFIHOHHBA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILEHEFENDJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BBBMANAGDCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILEHEFENDJ_BBBMANAGDCO_OFFSET))(this);
	}
};
