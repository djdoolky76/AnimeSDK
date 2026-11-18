#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ExceptionHandlingClause; }
namespace System::Reflection { class LocalVariableInfo; }

#define SYSTEM_REFLECTION_METHODBODY_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DF816C0)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodBody_TypeDefinitionIndex = 581;

	class MethodBody : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::ExceptionHandlingClause*>* Field_0; // 0x10
		::Il2CppArray<::System::Reflection::LocalVariableInfo*>* Field_1; // 0x18
		::Il2CppArray<::System::Byte>* Field_2; // 0x20
		::System::Boolean Field_3; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 Field_4; // 0x2C
		::System::Int32 Field_5; // 0x30

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBODY_METHOD_0_OFFSET))(this);
		}
	};
}
