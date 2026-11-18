#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FHONKIFADCM_PCAMNOEFMDP_OFFSET UNITYSDK_OFFSET(0x10EB47E0)
#define FHONKIFADCM__CTOR_OFFSET UNITYSDK_OFFSET(0x10EB4700)

inline static constexpr unsigned int FHONKIFADCM_TypeDefinitionIndex = 81394;

class FHONKIFADCM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* ILEOGINILIM; // 0x10
	::System::Collections::Generic::Queue_1<::System::Int32>* CMLFALFJONB; // 0x18
	::System::Int32 PILJJPDCLLM; // 0x20
	::System::Int32 LNJFKBBFABK; // 0x24

	::System::Void _ctor(::System::Int32 LNJFKBBFABK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FHONKIFADCM__CTOR_OFFSET))(this, LNJFKBBFABK);
	}

	::System::Int32 PCAMNOEFMDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHONKIFADCM_PCAMNOEFMDP_OFFSET))(this);
	}
};
