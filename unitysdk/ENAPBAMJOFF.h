#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJLIFDCAPOH.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENAPBAMJOFF_HMCBMLEJCCN_OFFSET UNITYSDK_OFFSET(0x7A2990)
#define ENAPBAMJOFF_MILMBLEAPPE_OFFSET UNITYSDK_OFFSET(0x7A29A0)

inline static constexpr unsigned int ENAPBAMJOFF_TypeDefinitionIndex = 42350;

struct alignas(8) ENAPBAMJOFF
{
	::System::Boolean KLLBKLCMOJJ; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::JJLIFDCAPOH>* JPCJDGGFOBM; // 0x18
	::System::Int32 ABHBKFJKINO; // 0x20

	::System::Boolean HMCBMLEJCCN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPBAMJOFF_HMCBMLEJCCN_OFFSET))(this);
	}

	::System::Int64 MILMBLEAPPE()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPBAMJOFF_MILMBLEAPPE_OFFSET))(this);
	}
};
