#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NHLMMNKIFMB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLEHPMHHDKC_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0xFB96A30)
#define OLEHPMHHDKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFB96B80)
#define OLEHPMHHDKC__CTOR_OFFSET UNITYSDK_OFFSET(0xFB96920)

inline static constexpr unsigned int OLEHPMHHDKC_TypeDefinitionIndex = 72517;

class OLEHPMHHDKC : public ::System::Object
{
public:
	// static const ::System::Int32 KACOJPIAJGN = 0x3; // 0x0
	::System::Collections::Generic::List_1<::NHLMMNKIFMB*>* DCBBOJCFFHF; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* LGOAHAMILJM; // 0x18
	::System::Collections::Generic::List_1<::NHLMMNKIFMB*>* PMFNHMGMMHD; // 0x20
	::System::Single OAOFDGFDEIF; // 0x28
	::UnityEngine::Vector3 PMKFIKPGPIM; // 0x2C
	::System::Boolean GPOGPLHGDLP; // 0x38
	::System::Boolean FHKECCLCBGF; // 0x39
	::System::Byte _padding0[0x2];
	::System::Int32 MADBIJIEPJK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEHPMHHDKC__CTOR_OFFSET))(this);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEHPMHHDKC_JCFJOKPIFPL_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEHPMHHDKC_PHOADBJGFBE_OFFSET))(this);
	}
};
