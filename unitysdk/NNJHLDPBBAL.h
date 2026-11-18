#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COKLMMOBOGN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNJHLDPBBAL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFEEC50)
#define NNJHLDPBBAL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFEF020)
#define NNJHLDPBBAL_ICNGMAMKAJN_OFFSET UNITYSDK_OFFSET(0x1CFEED50)
#define NNJHLDPBBAL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFEED40)
#define NNJHLDPBBAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEEC40)

inline static constexpr unsigned int NNJHLDPBBAL_TypeDefinitionIndex = 11839;

class NNJHLDPBBAL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::COKLMMOBOGN HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* LEGMKLJPECG; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::COKLMMOBOGN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::COKLMMOBOGN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NNJHLDPBBAL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJHLDPBBAL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJHLDPBBAL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ICNGMAMKAJN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJHLDPBBAL_ICNGMAMKAJN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNJHLDPBBAL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
