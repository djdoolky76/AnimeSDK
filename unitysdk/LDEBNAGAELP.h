#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMKJJBIDALA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LDEBNAGAELP_ALMJBHFEOFA_OFFSET UNITYSDK_OFFSET(0x18BE1740)
#define LDEBNAGAELP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BE1880)
#define LDEBNAGAELP_EGBAGIODDCI_OFFSET UNITYSDK_OFFSET(0x18BE1970)
#define LDEBNAGAELP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BE1730)
#define LDEBNAGAELP_IEJBHOLKNPO_OFFSET UNITYSDK_OFFSET(0x18BE1AB0)
#define LDEBNAGAELP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BE1BC0)
#define LDEBNAGAELP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18BE1BD0)
#define LDEBNAGAELP__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE1720)

inline static constexpr unsigned int LDEBNAGAELP_TypeDefinitionIndex = 16188;

class LDEBNAGAELP : public ::System::Object
{
public:
	::OMKJJBIDALA HBDPAIKANDB; // 0x10
	::System::String* OCKDFOKJNEM; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 OOONGDPBPFJ; // 0x30
	::System::Int32 NNPNCDADEDD; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::OMKJJBIDALA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OMKJJBIDALA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LDEBNAGAELP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDEBNAGAELP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ALMJBHFEOFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEBNAGAELP_ALMJBHFEOFA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEBNAGAELP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 EGBAGIODDCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEBNAGAELP_EGBAGIODDCI_OFFSET))(this);
	}

	::System::String* IEJBHOLKNPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEBNAGAELP_IEJBHOLKNPO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEBNAGAELP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEBNAGAELP_PPIFNHNGCGO_OFFSET))(this);
	}
};
