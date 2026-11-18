#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCNFDFGFCB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHKACJBPGEM_AKJAILHOIEC_OFFSET UNITYSDK_OFFSET(0x1A4D9500)
#define GHKACJBPGEM_CFOONJHKOJN_OFFSET UNITYSDK_OFFSET(0x1A4D93C0)
#define GHKACJBPGEM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4D9650)
#define GHKACJBPGEM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4D9880)
#define GHKACJBPGEM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4D9640)
#define GHKACJBPGEM_OHBJCLKJEEK_OFFSET UNITYSDK_OFFSET(0x1A4D9890)
#define GHKACJBPGEM_OLDJAFAKEON_OFFSET UNITYSDK_OFFSET(0x1A4D9740)
#define GHKACJBPGEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D93B0)

inline static constexpr unsigned int GHKACJBPGEM_TypeDefinitionIndex = 15611;

class GHKACJBPGEM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OMCNFDFGFCB HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* NABADLCIOOI; // 0x28
	::System::Int32 JFFPLPGOLNL; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 KMCGEFBLCHO; // 0x38
	::System::Int32 NEKKJHONEBO; // 0x3C

	::System::Void _ctor(::OMCNFDFGFCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OMCNFDFGFCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GHKACJBPGEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CFOONJHKOJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKACJBPGEM_CFOONJHKOJN_OFFSET))(this);
	}

	::System::Int32 AKJAILHOIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKACJBPGEM_AKJAILHOIEC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKACJBPGEM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKACJBPGEM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OLDJAFAKEON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKACJBPGEM_OLDJAFAKEON_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHKACJBPGEM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* OHBJCLKJEEK()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKACJBPGEM_OHBJCLKJEEK_OFFSET))(this);
	}
};
