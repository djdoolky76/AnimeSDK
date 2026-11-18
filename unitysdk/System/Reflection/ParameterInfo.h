#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/ParameterAttributes.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E6CF090)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1E6CF680)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1E6CF690)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1E6CF970)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1E6CF9C0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1E6CFA00)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1E6CFA40)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1E6CFA90)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1E6CFAA0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1E6CFB20)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E6CF0A0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E6CF240)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E6CF620)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E6CF630)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1E6CF640)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1E6CF650)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1E6CF230)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1E6CF660)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1E6CF670)

namespace System::Reflection
{
	inline static constexpr unsigned int ParameterInfo_TypeDefinitionIndex = 607;

	class ParameterInfo : public ::System::Object
	{
	public:
		::System::Type* Field_0; // 0x10
		::System::Object* Field_1; // 0x18
		::System::Reflection::MemberInfo* Field_2; // 0x20
		::System::String* Field_3; // 0x28
		::System::Int32 Field_4; // 0x30
		::System::Reflection::ParameterAttributes Field_5; // 0x34
		::System::Runtime::InteropServices::MarshalAsAttribute* Field_6; // 0x38

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_0_OFFSET))(this);
		}

		::System::String* Method_1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_1_OFFSET))(this);
		}

		static ::System::Void Method_2_2(::System::Text::StringBuilder* sb, ::Il2CppArray<::System::Reflection::ParameterInfo*>* p, ::System::Reflection::CallingConventions callingConvention, ::System::Boolean serialization)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Reflection::CallingConventions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_2_2_OFFSET))(sb, p, callingConvention, serialization);
		}

		::System::Type* Method_3_3()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_3_3_OFFSET))(this);
		}

		::System::Boolean Method_4_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_4_4_OFFSET))(this);
		}

		::System::Boolean Method_5_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_5_5_OFFSET))(this);
		}

		::System::Boolean Method_6_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_6_6_OFFSET))(this);
		}

		::System::Boolean Method_7_7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_7_7_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* Method_8_8()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_8_8_OFFSET))(this);
		}

		::System::String* Method_9_9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_9_9_OFFSET))(this);
		}

		::System::Int32 Method_10_10()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_10_10_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_11_11()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_11_11_OFFSET))(this);
		}

		::System::Object* Method_12_12()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_12_12_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_13_13(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_13_13_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_14_14(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_14_14_OFFSET))(this, attributeType, inherit);
		}

		::System::Object* Method_15_15(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_15_15_OFFSET))(this, context);
		}

		::System::Boolean Method_16_16(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_16_16_OFFSET))(this, attributeType, inherit);
		}

		static ::System::Reflection::ParameterInfo* Method_17_17(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_17_17_OFFSET))(pinfo, member);
		}

		static ::System::Reflection::ParameterInfo* Method_18_18(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_18_18_OFFSET))(type, member, marshalAs);
		}
	};
}
