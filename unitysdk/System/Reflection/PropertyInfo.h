#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/Mono/RuntimePropertyHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DD19E80)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1DD19EB0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1DD19ED0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1DD19F00)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1DD19F30)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1DD19F60)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1DD19F90)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1DD19FA0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1DD19FB0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1DD19FE0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_24_24_OFFSET UNITYSDK_OFFSET(0x1DD1A010)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_25_25_OFFSET UNITYSDK_OFFSET(0x1DD1A070)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1DD19E30)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1DD19E50)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1DD19E70)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1DD19E90)

namespace System::Reflection
{
	inline static constexpr unsigned int PropertyInfo_TypeDefinitionIndex = 608;

	class PropertyInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_4_4()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_4_4_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_5_5()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_5_5_OFFSET))(this);
		}

		::System::Reflection::MemberTypes Method_6_6()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_6_6_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_9_9()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_9_9_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_12_12()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_12_12_OFFSET))(this);
		}

		::System::Object* Method_14_14(::System::Object* obj, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_14_14_OFFSET))(this, obj, index);
		}

		::System::Object* Method_15_15(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_15_15_OFFSET))(this, obj);
		}

		::System::Void Method_17_17(::System::Object* obj, ::System::Object* value, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_17_17_OFFSET))(this, obj, value, index);
		}

		::System::Void Method_18_18(::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_18_18_OFFSET))(this, obj, value);
		}

		::System::Boolean Method_20_20(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_20_20_OFFSET))(this, obj);
		}

		::System::Int32 Method_21_21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_21_21_OFFSET))(this);
		}

		static ::System::Boolean Method_22_22(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_22_22_OFFSET))(left, right);
		}

		static ::System::Boolean Method_23_23(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_23_23_OFFSET))(left, right);
		}

		static ::System::Reflection::PropertyInfo* Method_24_24(::System::IntPtr event_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_24_24_OFFSET))(event_handle, type_handle);
		}

		static ::System::Reflection::PropertyInfo* Method_25_25(::Mono::RuntimePropertyHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::Mono::RuntimePropertyHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_25_25_OFFSET))(handle, reflectedType);
		}
	};
}
