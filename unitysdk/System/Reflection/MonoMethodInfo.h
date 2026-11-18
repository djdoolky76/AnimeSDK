#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MonoMethod; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1C897680)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1C897970)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1C897980)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1C8976F0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1C897700)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1C897780)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1C8977E0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1C897840)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1C897850)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1C8978B0)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1C897910)
#define SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1C897940)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethodInfo_TypeDefinitionIndex = 591;

	struct alignas(8) MonoMethodInfo
	{
		::System::Type* Field_0; // 0x10
		::System::Type* Field_1; // 0x18
		::System::Reflection::MethodAttributes Field_2; // 0x20
		::System::Reflection::MethodImplAttributes Field_3; // 0x24
		::System::Reflection::CallingConventions Field_4; // 0x28

		/*
		static ::System::Void Method_0(::System::IntPtr handle, ::System::Reflection::MonoMethodInfo& info)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Reflection::MonoMethodInfo&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_0_OFFSET))(handle, info);
		}
		*/

		static ::System::Int32 Method_1_1(::System::IntPtr handle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_1_1_OFFSET))(handle);
		}

		/*
		static ::System::Reflection::MonoMethodInfo Method_2_2(::System::IntPtr handle)
		{
			return ((::System::Reflection::MonoMethodInfo(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_2_2_OFFSET))(handle);
		}
		*/

		static ::System::Type* Method_3_3(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_3_3_OFFSET))(handle);
		}

		static ::System::Type* Method_4_4(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_4_4_OFFSET))(handle);
		}

		static ::System::Reflection::MethodAttributes Method_5_5(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodAttributes(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_5_5_OFFSET))(handle);
		}

		static ::System::Reflection::CallingConventions Method_6_6(::System::IntPtr handle)
		{
			return ((::System::Reflection::CallingConventions(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_6_6_OFFSET))(handle);
		}

		static ::System::Reflection::MethodImplAttributes Method_7_7(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_7_7_OFFSET))(handle);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_8_8(::System::IntPtr handle, ::System::Reflection::MemberInfo* member)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::IntPtr, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_8_8_OFFSET))(handle, member);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_9_9(::System::IntPtr handle, ::System::Reflection::MemberInfo* member)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::IntPtr, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_9_9_OFFSET))(handle, member);
		}

		static ::System::Runtime::InteropServices::MarshalAsAttribute* Method_10_10(::System::IntPtr handle)
		{
			return ((::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_10_10_OFFSET))(handle);
		}

		static ::System::Reflection::ParameterInfo* Method_11_11(::System::Reflection::MonoMethod* method)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Reflection::MonoMethod*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHODINFO_METHOD_11_11_OFFSET))(method);
		}
	};
}
