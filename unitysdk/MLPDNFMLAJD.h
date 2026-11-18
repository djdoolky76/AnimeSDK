#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDHJEOLLHEG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MLPDNFMLAJD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DB6F20)
#define MLPDNFMLAJD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DB7130)
#define MLPDNFMLAJD_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x19DB6D00)
#define MLPDNFMLAJD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DB7010)
#define MLPDNFMLAJD_NHBJFCKFNCN_OFFSET UNITYSDK_OFFSET(0x19DB6E10)
#define MLPDNFMLAJD_OCLNGPOCFPO_OFFSET UNITYSDK_OFFSET(0x19DB7020)
#define MLPDNFMLAJD__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB6CF0)

inline static constexpr unsigned int MLPDNFMLAJD_TypeDefinitionIndex = 16156;

class MLPDNFMLAJD : public ::System::Object
{
public:
	::System::String* POPADHGEMAA; // 0x10
	::JDHJEOLLHEG HBDPAIKANDB; // 0x18
	::System::String* ANANPABFAHL; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* JBFMBNFEEAO; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::JDHJEOLLHEG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JDHJEOLLHEG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MLPDNFMLAJD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPDNFMLAJD_GBDHPMDIJDK_OFFSET))(this);
	}

	::System::String* NHBJFCKFNCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPDNFMLAJD_NHBJFCKFNCN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPDNFMLAJD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPDNFMLAJD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* OCLNGPOCFPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPDNFMLAJD_OCLNGPOCFPO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLPDNFMLAJD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
