#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_6902BC67EF831C45_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F80B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_6902BC67EF831C45_TypeDefinitionIndex = 35892;

	class RefSafetyRulesAttribute_6902BC67EF831C45 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_6902BC67EF831C45_CTOR_OFFSET))(this, a1);
		}

	};
}
