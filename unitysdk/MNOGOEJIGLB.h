#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEFIICKFMPL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNOGOEJIGLB_BKPLGMAAAHH_OFFSET UNITYSDK_OFFSET(0x195AB500)
#define MNOGOEJIGLB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195AB930)
#define MNOGOEJIGLB_DBNDEFBLBMO_OFFSET UNITYSDK_OFFSET(0x195ABB60)
#define MNOGOEJIGLB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195AB640)
#define MNOGOEJIGLB_GIBNAFKACOO_OFFSET UNITYSDK_OFFSET(0x195ABA20)
#define MNOGOEJIGLB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195AB650)
#define MNOGOEJIGLB_MCJPFNJOEDO_OFFSET UNITYSDK_OFFSET(0x195AB660)
#define MNOGOEJIGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x195AB4F0)

inline static constexpr unsigned int MNOGOEJIGLB_TypeDefinitionIndex = 13210;

class MNOGOEJIGLB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* NAEKHLDKJPC; // 0x18
	::JEFIICKFMPL HBDPAIKANDB; // 0x20
	::System::Byte GCHCDJCFCEG; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte CNIAANMNOCF; // 0x33
	::System::Int32 DGBAOOLLECB; // 0x34
	::System::Int32 LKIBHDJLDDK; // 0x38
	::System::Int32 JBEOHIOPDGI; // 0x3C

	::System::Void _ctor(::JEFIICKFMPL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JEFIICKFMPL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MNOGOEJIGLB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BKPLGMAAAHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGOEJIGLB_BKPLGMAAAHH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNOGOEJIGLB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGOEJIGLB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MCJPFNJOEDO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGOEJIGLB_MCJPFNJOEDO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGOEJIGLB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GIBNAFKACOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGOEJIGLB_GIBNAFKACOO_OFFSET))(this);
	}

	::System::Int32 DBNDEFBLBMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOGOEJIGLB_DBNDEFBLBMO_OFFSET))(this);
	}
};
