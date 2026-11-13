#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Nullable_1.h"
namespace System { class Exception; }

#define R3_COMPLETESTATE_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3FA2EF0)
#define R3_COMPLETESTATE_GET_ISCOMPLETEDORDISPOSED_OFFSET UNITYSDK_OFFSET(0x3FA2EC0)
#define R3_COMPLETESTATE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3FA2E50)
#define R3_COMPLETESTATE_THROWOBJECTDIPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x20919690)
#define R3_COMPLETESTATE_TRYGETRESULT_OFFSET UNITYSDK_OFFSET(0x3FA2ED0)
#define R3_COMPLETESTATE_TRYSETDISPOSED_OFFSET UNITYSDK_OFFSET(0x3FA2E20)

namespace R3
{
	inline static constexpr unsigned int CompleteState_TypeDefinitionIndex = 36899;

	struct alignas(8) CompleteState
	{
		::System::Int32 completeState; // 0x10
		::System::Byte _padding0[0x4];
		::System::Exception* error; // 0x18
		::System::Boolean TrySetDisposed(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + R3_COMPLETESTATE_TRYSETDISPOSED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPLETESTATE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsCompletedOrDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPLETESTATE_GET_ISCOMPLETEDORDISPOSED_OFFSET))(this);
		}

		::System::Nullable_1<::R3::Result> TryGetResult()
		{
			return ((::System::Nullable_1<::R3::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPLETESTATE_TRYGETRESULT_OFFSET))(this);
		}

		::System::Exception* GetException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPLETESTATE_GETEXCEPTION_OFFSET))(this);
		}

		static ::System::Void ThrowObjectDiposedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_COMPLETESTATE_THROWOBJECTDIPOSEDEXCEPTION_OFFSET))();
		}

	};
}
