#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKKMDLNEIKO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GJJGCNKPMPO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17BEFA70)
#define GJJGCNKPMPO_EDEEHOEBCHI_OFFSET UNITYSDK_OFFSET(0x17BEF960)
#define GJJGCNKPMPO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17BEF950)
#define GJJGCNKPMPO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17BEFB60)
#define GJJGCNKPMPO_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x17BEFCD0)
#define GJJGCNKPMPO_OPCFEFMMJFA_OFFSET UNITYSDK_OFFSET(0x17BEFB70)
#define GJJGCNKPMPO__CTOR_OFFSET UNITYSDK_OFFSET(0x17BEF940)

inline static constexpr unsigned int GJJGCNKPMPO_TypeDefinitionIndex = 17553;

class GJJGCNKPMPO : public ::System::Object
{
public:
	::IKKMDLNEIKO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* ECDHBAGKJHC; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Boolean HGEGBGGLNNF; // 0x32
	::System::Byte CNIAANMNOCF; // 0x33
	::System::Int32 NADKMNAIMNB; // 0x34

	::System::Void _ctor(::IKKMDLNEIKO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IKKMDLNEIKO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GJJGCNKPMPO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJJGCNKPMPO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EDEEHOEBCHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJGCNKPMPO_EDEEHOEBCHI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJGCNKPMPO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJGCNKPMPO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean OPCFEFMMJFA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJGCNKPMPO_OPCFEFMMJFA_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJGCNKPMPO_NKCNGLADFNA_OFFSET))(this);
	}
};
