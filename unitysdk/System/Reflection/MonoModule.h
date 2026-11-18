#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeModule.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Guid.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MONOMODULE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1CC35B60)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1CC35AF0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1CC35960)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1CC35970)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1CC35980)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1CC359C0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1CC359D0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1CC359E0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1CC359F0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1CC35A00)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1CC35A10)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoModule_TypeDefinitionIndex = 597;

	class MonoModule : public ::System::Reflection::RuntimeModule
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::Assembly* Method_1_1()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_1_1_OFFSET))(this);
		}

		::System::String* Method_2_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_2_2_OFFSET))(this);
		}

		::System::Guid Method_3_3()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_3_OFFSET))(this);
		}

		::System::String* Method_4_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_4_4_OFFSET))(this);
		}

		::System::Boolean Method_5_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_5_5_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_6_6(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_6_6_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_7_7(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_7_7_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_8_8(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_8_8_OFFSET))(this, attributeType, inherit);
		}

		::System::Void Method_9_9(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_9_9_OFFSET))(this, info, context);
		}

		::System::Reflection::RuntimeAssembly* Method_10_10()
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_10_10_OFFSET))(this);
		}
	};
}
