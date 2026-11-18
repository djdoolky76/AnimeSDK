#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class RtFieldInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x8FCCA0)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x8FCCB0)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x8FCCC0)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x359320)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E3A1D50)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1E3A1D60)
#define SYSTEM_RUNTIMEFIELDHANDLE_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1E3A1D70)

namespace System
{
	inline static constexpr unsigned int RuntimeFieldHandle_TypeDefinitionIndex = 407;

	struct alignas(4) RuntimeFieldHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void Method_0(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_0_OFFSET))(this, info, context);
		}

		::System::Void Method_1_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_1_1_OFFSET))(this, info, context);
		}

		::System::Boolean Method_2_2(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_2_2_OFFSET))(this, obj);
		}

		::System::Int32 Method_3_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_3_3_OFFSET))(this);
		}

		static ::System::Void Method_4_4(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_4_4_OFFSET))(fi, obj, value);
		}

		static ::System::Void Method_5_5(::System::Reflection::RtFieldInfo* field, ::System::Object* obj, ::System::Object* value, ::System::RuntimeType* fieldType, ::System::Reflection::FieldAttributes fieldAttr, ::System::RuntimeType* declaringType, ::System::Boolean& domainInitialized)
		{
			return ((::System::Void(*)(::System::Reflection::RtFieldInfo*, ::System::Object*, ::System::Object*, ::System::RuntimeType*, ::System::Reflection::FieldAttributes, ::System::RuntimeType*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_5_5_OFFSET))(field, obj, value, fieldType, fieldAttr, declaringType, domainInitialized);
		}

		static ::System::Void Method_6_6(::System::Reflection::RtFieldInfo* field, ::System::RuntimeType* fieldType, ::PVOID pTypedRef, ::System::Object* value, ::System::RuntimeType* contextType)
		{
			return ((::System::Void(*)(::System::Reflection::RtFieldInfo*, ::System::RuntimeType*, ::PVOID, ::System::Object*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_METHOD_6_6_OFFSET))(field, fieldType, pTypedRef, value, contextType);
		}
	};
}
