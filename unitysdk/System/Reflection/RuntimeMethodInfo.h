#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/MethodInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E48F2E0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E48EC70)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E48ED90)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E48EE00)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E48EF40)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1E48EF60)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1E48EF90)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1E48ED00)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1E48F010)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1E48F260)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeMethodInfo_TypeDefinitionIndex = 592;

	class RuntimeMethodInfo : public ::System::Reflection::MethodInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::Module* Method_1_1()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_1_1_OFFSET))(this);
		}

		::System::RuntimeType* Method_2_2()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_2_2_OFFSET))(this);
		}

		::System::String* Method_3_3(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_3_3_OFFSET))(this, serialization);
		}

		::System::Delegate* Method_4_4(::System::Type* delegateType)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_4_OFFSET))(this, delegateType);
		}

		::System::Delegate* Method_5_5(::System::Type* delegateType, ::System::Object* target)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_5_5_OFFSET))(this, delegateType, target);
		}

		::System::String* Method_6_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_6_6_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_7_7()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_7_7_OFFSET))(this);
		}

		::System::Void Method_8_8(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_8_8_OFFSET))(this, info, context);
		}

		::System::String* Method_9_9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_9_9_OFFSET))(this);
		}
	};
}
