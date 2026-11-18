#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPHADHKBCN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DDLFCFAFHPB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F37420)
#define DDLFCFAFHPB_DENBGHPAMIL_OFFSET UNITYSDK_OFFSET(0x19F36E70)
#define DDLFCFAFHPB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F37410)
#define DDLFCFAFHPB_ICELFLFIBDK_OFFSET UNITYSDK_OFFSET(0x19F37520)
#define DDLFCFAFHPB_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x19F37140)
#define DDLFCFAFHPB_KACFKIIMCAO_OFFSET UNITYSDK_OFFSET(0x19F36D30)
#define DDLFCFAFHPB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F37510)
#define DDLFCFAFHPB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19F37000)
#define DDLFCFAFHPB__CTOR_OFFSET UNITYSDK_OFFSET(0x19F344F0)

inline static constexpr unsigned int DDLFCFAFHPB_TypeDefinitionIndex = 12424;

class DDLFCFAFHPB : public ::System::Object
{
public:
	::System::String* MKHIJNBONPD; // 0x10
	::CPPHADHKBCN HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* OFGMKLFNPPJ; // 0x30
	::System::Int32 KPNOLLJCMFO; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 JJHFDLMLAMK; // 0x44

	::System::Void _ctor(::CPPHADHKBCN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CPPHADHKBCN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DDLFCFAFHPB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KACFKIIMCAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLFCFAFHPB_KACFKIIMCAO_OFFSET))(this);
	}

	::System::String* DENBGHPAMIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLFCFAFHPB_DENBGHPAMIL_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLFCFAFHPB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IGKFAFBGBAP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLFCFAFHPB_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDLFCFAFHPB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLFCFAFHPB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLFCFAFHPB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 ICELFLFIBDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLFCFAFHPB_ICELFLFIBDK_OFFSET))(this);
	}
};
