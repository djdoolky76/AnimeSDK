#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/RuntimeFieldHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/TypedReference.h"

namespace System { class Object; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_FIELDINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1D1B85B0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1D1B8650)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1D1B8670)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1D1B8690)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1D1B86B0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1D1B86E0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1D1B8760)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1D1B87E0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1D1B8930)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1D1B8980)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1D1B89E0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1D1B89F0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1D1B8C10)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1D1B8C60)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_24_24_OFFSET UNITYSDK_OFFSET(0x1D1B8C70)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_25_25_OFFSET UNITYSDK_OFFSET(0x1D1B8900)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_26_26_OFFSET UNITYSDK_OFFSET(0x1D1B8C80)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1D1B85C0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1D1B85D0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1D1B85F0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1D1B8610)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1D1B8630)

namespace System::Reflection
{
	inline static constexpr unsigned int FieldInfo_TypeDefinitionIndex = 579;

	class FieldInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::MemberTypes Method_5_5()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_5_5_OFFSET))(this);
		}

		::System::Boolean Method_6_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_6_6_OFFSET))(this);
		}

		::System::Boolean Method_7_7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_7_7_OFFSET))(this);
		}

		::System::Boolean Method_8_8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_8_8_OFFSET))(this);
		}

		::System::Boolean Method_9_9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_9_9_OFFSET))(this);
		}

		::System::Boolean Method_10_10()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_10_10_OFFSET))(this);
		}

		::System::Boolean Method_11_11()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_11_11_OFFSET))(this);
		}

		::System::Boolean Method_12_12()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_12_12_OFFSET))(this);
		}

		::System::Void Method_14_14(::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_14_14_OFFSET))(this, obj, value);
		}

		static ::System::Reflection::FieldInfo* Method_15_15(::System::IntPtr field_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_15_15_OFFSET))(field_handle, type_handle);
		}

		static ::System::Reflection::FieldInfo* Method_16_16(::System::RuntimeFieldHandle handle)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_16_16_OFFSET))(handle);
		}

		static ::System::Reflection::FieldInfo* Method_17_17(::System::RuntimeFieldHandle handle, ::System::RuntimeTypeHandle declaringType)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_17_17_OFFSET))(handle, declaringType);
		}

		::System::Int32 Method_18_18()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_18_18_OFFSET))(this);
		}

		::System::Void Method_19_19(::System::TypedReference obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_19_19_OFFSET))(this, obj, value);
		}

		::System::Runtime::InteropServices::MarshalAsAttribute* Method_20_20()
		{
			return ((::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_20_20_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_21_21()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_21_21_OFFSET))(this);
		}

		::System::Object* Method_22_22()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_22_22_OFFSET))(this);
		}

		::System::Boolean Method_23_23(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_23_23_OFFSET))(this, obj);
		}

		::System::Int32 Method_24_24()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_24_24_OFFSET))(this);
		}

		static ::System::Boolean Method_25_25(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_25_25_OFFSET))(left, right);
		}

		static ::System::Boolean Method_26_26(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_26_26_OFFSET))(left, right);
		}
	};
}
