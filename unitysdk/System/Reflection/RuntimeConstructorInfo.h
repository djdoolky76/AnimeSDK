#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/ConstructorInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E262520)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E262090)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E262110)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E2621B0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E2621C0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1E262230)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1E262380)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1E262390)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeConstructorInfo_TypeDefinitionIndex = 594;

	class RuntimeConstructorInfo : public ::System::Reflection::ConstructorInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::Module* Method_1_1()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_1_1_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_2_2()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_2_2_OFFSET))(this);
		}

		::System::Reflection::BindingFlags Method_3_3()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_3_3_OFFSET))(this);
		}

		::System::RuntimeType* Method_4_4()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_4_OFFSET))(this);
		}

		::System::Void Method_5_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_5_5_OFFSET))(this, info, context);
		}

		::System::String* Method_6_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_6_6_OFFSET))(this);
		}

		::System::Void Method_7_7(::System::Object* target, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_7_7_OFFSET))(this, target, info, context);
		}
	};
}
