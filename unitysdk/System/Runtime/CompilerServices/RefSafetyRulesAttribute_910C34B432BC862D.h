#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_910C34B432BC862D_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC34E10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_910C34B432BC862D_TypeDefinitionIndex = 9972;

	class RefSafetyRulesAttribute_910C34B432BC862D : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_910C34B432BC862D_CTOR_OFFSET))(this, a1);
		}

	};
}
