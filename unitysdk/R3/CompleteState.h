#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
namespace System { class Exception; }
namespace System { class Nullable; }

#define R3_COMPLETESTATE_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3C26E60)
#define R3_COMPLETESTATE_GET_ISCOMPLETEDORDISPOSED_OFFSET UNITYSDK_OFFSET(0x3C26E30)
#define R3_COMPLETESTATE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3C26DC0)
#define R3_COMPLETESTATE_THROWOBJECTDIPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C421650)
#define R3_COMPLETESTATE_TRYGETRESULT_OFFSET UNITYSDK_OFFSET(0x3C26E40)
#define R3_COMPLETESTATE_TRYSETDISPOSED_OFFSET UNITYSDK_OFFSET(0x3C26D90)

namespace R3
{
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

		::System::Nullable* TryGetResult()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_COMPLETESTATE_TRYGETRESULT_OFFSET))(this);
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
