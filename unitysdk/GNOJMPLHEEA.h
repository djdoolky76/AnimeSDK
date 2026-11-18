#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPCGPPIMLLE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNOJMPLHEEA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1746C060)
#define GNOJMPLHEEA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1746C6B0)
#define GNOJMPLHEEA_FPCEIHMHFDE_OFFSET UNITYSDK_OFFSET(0x1746C150)
#define GNOJMPLHEEA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1746C290)
#define GNOJMPLHEEA_NOKNGIEGNKK_OFFSET UNITYSDK_OFFSET(0x1746C570)
#define GNOJMPLHEEA_PABFFIGIAJC_OFFSET UNITYSDK_OFFSET(0x1746C2A0)
#define GNOJMPLHEEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1746C050)

inline static constexpr unsigned int GNOJMPLHEEA_TypeDefinitionIndex = 13207;

class GNOJMPLHEEA : public ::System::Object
{
public:
	::HPCGPPIMLLE HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* JEPJHHILNGB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 MJNKNHBFBKD; // 0x34
	::System::Int32 BJANKPMOMPO; // 0x38

	::System::Void _ctor(::HPCGPPIMLLE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HPCGPPIMLLE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GNOJMPLHEEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOJMPLHEEA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FPCEIHMHFDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOJMPLHEEA_FPCEIHMHFDE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOJMPLHEEA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PABFFIGIAJC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOJMPLHEEA_PABFFIGIAJC_OFFSET))(this);
	}

	::System::Int32 NOKNGIEGNKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOJMPLHEEA_NOKNGIEGNKK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNOJMPLHEEA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
