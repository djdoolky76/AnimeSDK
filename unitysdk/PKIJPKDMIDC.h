#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KACOGGMAOCL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKIJPKDMIDC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19146D70)
#define PKIJPKDMIDC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19146A90)
#define PKIJPKDMIDC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19146E60)
#define PKIJPKDMIDC_LKINMLPFBOO_OFFSET UNITYSDK_OFFSET(0x19146AA0)
#define PKIJPKDMIDC__CTOR_OFFSET UNITYSDK_OFFSET(0x19146A80)

inline static constexpr unsigned int PKIJPKDMIDC_TypeDefinitionIndex = 9189;

class PKIJPKDMIDC : public ::System::Object
{
public:
	::KACOGGMAOCL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* MCJKIIICPIL; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::KACOGGMAOCL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KACOGGMAOCL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PKIJPKDMIDC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKIJPKDMIDC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LKINMLPFBOO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIJPKDMIDC_LKINMLPFBOO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIJPKDMIDC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIJPKDMIDC_LJANCIBECFG_OFFSET))(this);
	}
};
