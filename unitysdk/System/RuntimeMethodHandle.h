#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeNameFormatFlags.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class RuntimeMethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x358B00)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x8C0980)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x8C0990)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x8C09A0)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x359320)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1D7754D0)
#define SYSTEM_RUNTIMEMETHODHANDLE_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x3D5A00)

namespace System
{
	inline static constexpr unsigned int RuntimeMethodHandle_TypeDefinitionIndex = 408;

	struct alignas(4) RuntimeMethodHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void Method_0(::System::IntPtr v)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_0_OFFSET))(this, v);
		}

		::System::Void Method_1_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_1_1_OFFSET))(this, info, context);
		}

		::System::Void Method_2_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_2_2_OFFSET))(this, info, context);
		}

		::System::Boolean Method_3_3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_3_3_OFFSET))(this, obj);
		}

		::System::Int32 Method_4_4()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_4_4_OFFSET))(this);
		}

		static ::System::String* Method_5_5(::System::Reflection::RuntimeMethodInfo* method, ::System::TypeNameFormatFlags format)
		{
			return ((::System::String*(*)(::System::Reflection::RuntimeMethodInfo*, ::System::TypeNameFormatFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_5_5_OFFSET))(method, format);
		}

		::System::Boolean Method_6_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_METHOD_6_6_OFFSET))(this);
		}
	};
}
