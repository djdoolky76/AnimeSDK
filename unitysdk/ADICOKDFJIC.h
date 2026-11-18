#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANMJMFIFBJG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADICOKDFJIC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F08F90)
#define ADICOKDFJIC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F08F80)
#define ADICOKDFJIC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F09080)
#define ADICOKDFJIC_OHHJMOAEHDE_OFFSET UNITYSDK_OFFSET(0x19F09090)
#define ADICOKDFJIC__CTOR_OFFSET UNITYSDK_OFFSET(0x19F08F70)

inline static constexpr unsigned int ADICOKDFJIC_TypeDefinitionIndex = 9881;

class ADICOKDFJIC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CHIBIMCNHJN; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::ANMJMFIFBJG HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::ANMJMFIFBJG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ANMJMFIFBJG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ADICOKDFJIC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADICOKDFJIC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICOKDFJIC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICOKDFJIC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OHHJMOAEHDE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICOKDFJIC_OHHJMOAEHDE_OFFSET))(this);
	}
};
