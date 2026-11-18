#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCPLFKNEJDE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JMGHHAILOKJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BCFC60)
#define JMGHHAILOKJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BCFD50)
#define JMGHHAILOKJ_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x18BCFB50)
#define JMGHHAILOKJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BCFB40)
#define JMGHHAILOKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCFB30)

inline static constexpr unsigned int JMGHHAILOKJ_TypeDefinitionIndex = 16754;

class JMGHHAILOKJ : public ::System::Object
{
public:
	::System::String* HKKJIFGKKEH; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JCPLFKNEJDE HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::JCPLFKNEJDE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JCPLFKNEJDE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JMGHHAILOKJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGHHAILOKJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGHHAILOKJ_IFOHJNHGHBK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGHHAILOKJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMGHHAILOKJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
