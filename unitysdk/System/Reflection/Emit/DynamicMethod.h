#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/MethodInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection::Emit { class ILGenerator; }

#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C26DFB0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1C26E170)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1C26E1F0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C26E1B0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETILGENERATOR_OFFSET UNITYSDK_OFFSET(0x1C26E230)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1C26E270)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C26E2B0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C26DFF0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1C26E030)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1C26E070)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C26E0B0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1C26E0F0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C26E130)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C26E2F0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1C26E330)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int DynamicMethod_TypeDefinitionIndex = 1769;

	class DynamicMethod : public ::System::Reflection::MethodInfo
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Type* a2, ::Il2CppArray<::System::Type*>* a3, ::System::Reflection::Module* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::System::Reflection::Module*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Reflection::MethodAttributes get_Attributes()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::RuntimeMethodHandle get_MethodHandle()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_METHODHANDLE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Reflection::ICustomAttributeProvider* get_ReturnTypeCustomAttributes()
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetBaseDefinition()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETBASEDEFINITION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Emit::ILGenerator* GetILGenerator()
		{
			return ((::System::Reflection::Emit::ILGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETILGENERATOR_OFFSET))(this);
		}

		::System::Reflection::MethodImplAttributes GetMethodImplementationFlags()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETPARAMETERS_OFFSET))(this);
		}

		::System::Object* Invoke(::System::Object* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Object*>* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_ISDEFINED_OFFSET))(this, a1, a2);
		}

	};
}
