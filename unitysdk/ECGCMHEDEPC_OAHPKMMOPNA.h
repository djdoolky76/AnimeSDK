#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

#define ECGCMHEDEPC_OAHPKMMOPNA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6EED20)

inline static constexpr unsigned int ECGCMHEDEPC_OAHPKMMOPNA_TypeDefinitionIndex = 55302;

struct alignas(8) ECGCMHEDEPC_OAHPKMMOPNA
{
	::Unity::Collections::NativeArray_1<::System::Object*> EFBHDHJCDCP; // 0x10

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_OAHPKMMOPNA_EXECUTE_OFFSET))(this);
	}
};
