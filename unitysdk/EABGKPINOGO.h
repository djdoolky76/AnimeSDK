#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGLJJCPPLD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EABGKPINOGO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157A8700)
#define EABGKPINOGO_FKDADFNFIIE_OFFSET UNITYSDK_OFFSET(0x157A87F0)
#define EABGKPINOGO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157A86F0)
#define EABGKPINOGO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157A8AC0)
#define EABGKPINOGO_LJKOBMGLFLO_OFFSET UNITYSDK_OFFSET(0x157A82E0)
#define EABGKPINOGO_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x157A85B0)
#define EABGKPINOGO__CTOR_OFFSET UNITYSDK_OFFSET(0x157A82D0)

inline static constexpr unsigned int EABGKPINOGO_TypeDefinitionIndex = 15205;

class EABGKPINOGO : public ::System::Object
{
public:
	::GNGLJJCPPLD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* BMGFIKALJNM; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* CBNOIHEFPPB; // 0x30
	::System::Int32 OIKCPMJLMGI; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x40

	::System::Void _ctor(::GNGLJJCPPLD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GNGLJJCPPLD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EABGKPINOGO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LJKOBMGLFLO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABGKPINOGO_LJKOBMGLFLO_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EABGKPINOGO_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EABGKPINOGO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABGKPINOGO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FKDADFNFIIE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABGKPINOGO_FKDADFNFIIE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EABGKPINOGO_LJANCIBECFG_OFFSET))(this);
	}
};
