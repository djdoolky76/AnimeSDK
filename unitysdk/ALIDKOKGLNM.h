#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class AHLMMFMPHEO;
class AMMIEAEEEGB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALIDKOKGLNM_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1820C1B0)

inline static constexpr unsigned int ALIDKOKGLNM_TypeDefinitionIndex = 67926;

struct alignas(8) ALIDKOKGLNM
{
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::AMMIEAEEEGB*>>* ANPBCLAFCJB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* FLHNGDLANDC; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::AHLMMFMPHEO*>>* IIHLGEFGOBL; // 0x20

	/*
	static ::ALIDKOKGLNM COKNIICCODC()
	{
		return ((::ALIDKOKGLNM(*)())((::PBYTE)hIl2Cpp + ALIDKOKGLNM_COKNIICCODC_OFFSET))();
	}
	*/
};
