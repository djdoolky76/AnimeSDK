#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

#define ECGCMHEDEPC_KOPIECOODLF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x602560)

inline static constexpr unsigned int ECGCMHEDEPC_KOPIECOODLF_TypeDefinitionIndex = 55300;

struct alignas(8) ECGCMHEDEPC_KOPIECOODLF
{
	::Unity::Collections::NativeArray_1<::System::Object*> EFBHDHJCDCP; // 0x10
	::System::Byte _padding0[0x8];
	::System::Int32 FBIMJJAKJCM; // 0x20
	::System::Int32 HJOIJFKCEJG; // 0x24
	::System::Int32 CPIDCEFBMIM; // 0x28

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_KOPIECOODLF_EXECUTE_OFFSET))(this);
	}
};
