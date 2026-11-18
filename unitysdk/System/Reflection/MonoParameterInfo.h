#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeParameterInfo.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1D423930)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1D423960)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1D4239C0)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1D423BC0)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1D423BB0)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1D423BD0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoParameterInfo_TypeDefinitionIndex = 599;

	class MonoParameterInfo : public ::System::Reflection::RuntimeParameterInfo
	{
	public:
		::System::Void Method_0(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_0_OFFSET))(this, pinfo, member);
		}

		::System::Void Method_1_1(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_1_1_OFFSET))(this, type, member, marshalAs);
		}

		::System::Object* Method_2_2()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_2_2_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_3_3(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_3_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_4(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_4_4_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_5_5(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_5_5_OFFSET))(this, attributeType, inherit);
		}
	};
}
