#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COGNLKNIHPD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BCIMHKKEHFD_BHFCDEJGCJL_OFFSET UNITYSDK_OFFSET(0x19AC2CC0)
#define BCIMHKKEHFD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AC2EE0)
#define BCIMHKKEHFD_ECOBGODHBND_OFFSET UNITYSDK_OFFSET(0x19AC28A0)
#define BCIMHKKEHFD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AC2FD0)
#define BCIMHKKEHFD_GFHNNDGAJJI_OFFSET UNITYSDK_OFFSET(0x19AC2AB0)
#define BCIMHKKEHFD_JEJOFIOMEOG_OFFSET UNITYSDK_OFFSET(0x19AC2FE0)
#define BCIMHKKEHFD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AC2ED0)
#define BCIMHKKEHFD__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC2890)

inline static constexpr unsigned int BCIMHKKEHFD_TypeDefinitionIndex = 10662;

class BCIMHKKEHFD : public ::System::Object
{
public:
	::COGNLKNIHPD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* FBCDJOLCCBH; // 0x28
	::System::String* OIHNOMMHBCL; // 0x30
	::System::String* NABAKKFPJHE; // 0x38
	::System::String* EIOLECNKALM; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A

	::System::Void _ctor(::COGNLKNIHPD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::COGNLKNIHPD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BCIMHKKEHFD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ECOBGODHBND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMHKKEHFD_ECOBGODHBND_OFFSET))(this);
	}

	::System::String* GFHNNDGAJJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMHKKEHFD_GFHNNDGAJJI_OFFSET))(this);
	}

	::System::String* BHFCDEJGCJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMHKKEHFD_BHFCDEJGCJL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMHKKEHFD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMHKKEHFD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCIMHKKEHFD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* JEJOFIOMEOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMHKKEHFD_JEJOFIOMEOG_OFFSET))(this);
	}
};
