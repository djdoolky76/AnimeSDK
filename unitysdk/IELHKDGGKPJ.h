#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PICGFACOKEJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IELHKDGGKPJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19349600)
#define IELHKDGGKPJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19349920)
#define IELHKDGGKPJ_HNPDLMHBIJD_OFFSET UNITYSDK_OFFSET(0x193493B0)
#define IELHKDGGKPJ_JMBLEJJDJAK_OFFSET UNITYSDK_OFFSET(0x193494F0)
#define IELHKDGGKPJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x193496F0)
#define IELHKDGGKPJ_LJLMAPCONEM_OFFSET UNITYSDK_OFFSET(0x19349810)
#define IELHKDGGKPJ_MAONCODANDL_OFFSET UNITYSDK_OFFSET(0x19349700)
#define IELHKDGGKPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x193493A0)

inline static constexpr unsigned int IELHKDGGKPJ_TypeDefinitionIndex = 13513;

class IELHKDGGKPJ : public ::System::Object
{
public:
	::System::String* CHOLILIHFGJ; // 0x10
	::System::String* AOBIDNIIFGK; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* EEHNOLCHJEE; // 0x28
	::PICGFACOKEJ HBDPAIKANDB; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 OCHMMNMGAKJ; // 0x44

	::System::Void _ctor(::PICGFACOKEJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PICGFACOKEJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IELHKDGGKPJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HNPDLMHBIJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IELHKDGGKPJ_HNPDLMHBIJD_OFFSET))(this);
	}

	::System::String* JMBLEJJDJAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IELHKDGGKPJ_JMBLEJJDJAK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IELHKDGGKPJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IELHKDGGKPJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MAONCODANDL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IELHKDGGKPJ_MAONCODANDL_OFFSET))(this);
	}

	::System::String* LJLMAPCONEM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IELHKDGGKPJ_LJLMAPCONEM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IELHKDGGKPJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
