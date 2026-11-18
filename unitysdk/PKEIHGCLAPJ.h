#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBABCFHOHKL.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/NIJCNNHDHEJ.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PKEIHGCLAPJ_EKBDJFDAGKI_OFFSET UNITYSDK_OFFSET(0x17FECC00)
#define PKEIHGCLAPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17FECB10)

inline static constexpr unsigned int PKEIHGCLAPJ_TypeDefinitionIndex = 12879;

class PKEIHGCLAPJ : public ::BBABCFHOHKL
{
public:
	::System::Collections::Generic::HashSet_1<::System::DayOfWeek>* _FDOFENAOHCL_k__BackingField; // 0xC8

	::System::Void _ctor(::NIJCNNHDHEJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NIJCNNHDHEJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PKEIHGCLAPJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::HashSet_1<::System::DayOfWeek>* EKBDJFDAGKI()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::DayOfWeek>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEIHGCLAPJ_EKBDJFDAGKI_OFFSET))(this);
	}
};
