#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PACALOOLLBD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKFCJFDABEO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A170970)
#define BKFCJFDABEO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A170680)
#define BKFCJFDABEO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A170690)
#define BKFCJFDABEO_PMHOFKAGKCL_OFFSET UNITYSDK_OFFSET(0x1A1706A0)
#define BKFCJFDABEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A170670)

inline static constexpr unsigned int BKFCJFDABEO_TypeDefinitionIndex = 15487;

class BKFCJFDABEO : public ::System::Object
{
public:
	::PACALOOLLBD HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ACNIDEKJPJO; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::PACALOOLLBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PACALOOLLBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BKFCJFDABEO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKFCJFDABEO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFCJFDABEO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PMHOFKAGKCL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFCJFDABEO_PMHOFKAGKCL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFCJFDABEO_COFGIJJOFLP_OFFSET))(this);
	}
};
