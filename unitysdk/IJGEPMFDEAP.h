#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLNIDAFBIFD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IJGEPMFDEAP_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x152E7F30)
#define IJGEPMFDEAP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152E81A0)
#define IJGEPMFDEAP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152E8080)
#define IJGEPMFDEAP_HIPIGIJHPDP_OFFSET UNITYSDK_OFFSET(0x152E8090)
#define IJGEPMFDEAP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152E8070)
#define IJGEPMFDEAP__CTOR_OFFSET UNITYSDK_OFFSET(0x152E7F20)

inline static constexpr unsigned int IJGEPMFDEAP_TypeDefinitionIndex = 10165;

class IJGEPMFDEAP : public ::System::Object
{
public:
	::System::String* KHCLEDINMGG; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::HLNIDAFBIFD HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 BPMHKHIBGEJ; // 0x34

	::System::Void _ctor(::HLNIDAFBIFD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HLNIDAFBIFD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IJGEPMFDEAP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGEPMFDEAP_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGEPMFDEAP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJGEPMFDEAP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HIPIGIJHPDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGEPMFDEAP_HIPIGIJHPDP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGEPMFDEAP_COFGIJJOFLP_OFFSET))(this);
	}
};
