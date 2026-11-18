#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOBLNPKPDFC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEEKOJBFGEA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19340410)
#define HEEKOJBFGEA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19340400)
#define HEEKOJBFGEA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x193403F0)
#define HEEKOJBFGEA_MDGLCEHCOIF_OFFSET UNITYSDK_OFFSET(0x19340500)
#define HEEKOJBFGEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1933B030)

inline static constexpr unsigned int HEEKOJBFGEA_TypeDefinitionIndex = 10401;

class HEEKOJBFGEA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HGHINIHEKKL; // 0x10
	::DOBLNPKPDFC HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::DOBLNPKPDFC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DOBLNPKPDFC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HEEKOJBFGEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEEKOJBFGEA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEEKOJBFGEA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEEKOJBFGEA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MDGLCEHCOIF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEEKOJBFGEA_MDGLCEHCOIF_OFFSET))(this);
	}
};
