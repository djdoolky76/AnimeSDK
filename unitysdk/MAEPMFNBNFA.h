#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAFHLHBNLEF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MAEPMFNBNFA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA8F4F0)
#define MAEPMFNBNFA_CPDKDJHHCOB_OFFSET UNITYSDK_OFFSET(0x1BA8F600)
#define MAEPMFNBNFA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA8F5E0)
#define MAEPMFNBNFA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA8F5F0)
#define MAEPMFNBNFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8F4E0)

inline static constexpr unsigned int MAEPMFNBNFA_TypeDefinitionIndex = 15020;

class MAEPMFNBNFA : public ::System::Object
{
public:
	::System::String* FMLDCPEMNOJ; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::CAFHLHBNLEF HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::CAFHLHBNLEF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CAFHLHBNLEF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MAEPMFNBNFA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEPMFNBNFA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAEPMFNBNFA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEPMFNBNFA_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CPDKDJHHCOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEPMFNBNFA_CPDKDJHHCOB_OFFSET))(this);
	}
};
