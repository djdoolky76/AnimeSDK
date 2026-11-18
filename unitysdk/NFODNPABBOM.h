#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DALMPCOJIPM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NFODNPABBOM_AJFEEILIIKH_OFFSET UNITYSDK_OFFSET(0x1BF6C410)
#define NFODNPABBOM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF6C200)
#define NFODNPABBOM_FEDPLDCPDHN_OFFSET UNITYSDK_OFFSET(0x1BF6BFD0)
#define NFODNPABBOM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF6C400)
#define NFODNPABBOM_KGJBFPGGGKE_OFFSET UNITYSDK_OFFSET(0x1BF6C0F0)
#define NFODNPABBOM_LGCDCINFEHD_OFFSET UNITYSDK_OFFSET(0x1BF6C2F0)
#define NFODNPABBOM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF6C0E0)
#define NFODNPABBOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6BFC0)

inline static constexpr unsigned int NFODNPABBOM_TypeDefinitionIndex = 17515;

class NFODNPABBOM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IPNFEOLAAKL; // 0x18
	::System::String* JNOGNJPEFJL; // 0x20
	::System::String* GBCGKKEDNCD; // 0x28
	::DALMPCOJIPM HBDPAIKANDB; // 0x30
	::System::String* DOAIMPLMPMD; // 0x40
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A

	::System::Void _ctor(::DALMPCOJIPM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DALMPCOJIPM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NFODNPABBOM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FEDPLDCPDHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFODNPABBOM_FEDPLDCPDHN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFODNPABBOM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* KGJBFPGGGKE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFODNPABBOM_KGJBFPGGGKE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFODNPABBOM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LGCDCINFEHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFODNPABBOM_LGCDCINFEHD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFODNPABBOM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* AJFEEILIIKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFODNPABBOM_AJFEEILIIKH_OFFSET))(this);
	}
};
