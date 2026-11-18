#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJDIAMLNILA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NEENFCCNCAP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FD1290)
#define NEENFCCNCAP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FD1390)
#define NEENFCCNCAP_LIPELOIJHME_OFFSET UNITYSDK_OFFSET(0x17FD13A0)
#define NEENFCCNCAP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FD1380)
#define NEENFCCNCAP__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD1280)

inline static constexpr unsigned int NEENFCCNCAP_TypeDefinitionIndex = 17065;

class NEENFCCNCAP : public ::System::Object
{
public:
	::CJDIAMLNILA HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PFLLDDLLNAO; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::CJDIAMLNILA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CJDIAMLNILA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NEENFCCNCAP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEENFCCNCAP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEENFCCNCAP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEENFCCNCAP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LIPELOIJHME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEENFCCNCAP_LIPELOIJHME_OFFSET))(this);
	}
};
