#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Mathematics/float3.h"

namespace System { class Object; }

#define ECGCMHEDEPC_DJGDPDKNAHB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x78E920)

inline static constexpr unsigned int ECGCMHEDEPC_DJGDPDKNAHB_TypeDefinitionIndex = 55293;

struct alignas(8) ECGCMHEDEPC_DJGDPDKNAHB
{
	::Unity::Mathematics::float3 PMMHPDOBJAC; // 0x10
	::System::Byte _padding0[0x4];
	::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> OJKLNDIBAKG; // 0x20
	::System::Byte _padding1[0x8];
	::Unity::Collections::NativeArray_1<::System::Object*> EFBHDHJCDCP; // 0x30

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_DJGDPDKNAHB_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
