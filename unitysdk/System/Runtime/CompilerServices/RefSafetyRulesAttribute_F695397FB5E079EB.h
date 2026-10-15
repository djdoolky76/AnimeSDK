#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_F695397FB5E079EB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F186A80)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_F695397FB5E079EB_TypeDefinitionIndex = 38718;

	class RefSafetyRulesAttribute_F695397FB5E079EB : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_F695397FB5E079EB_CTOR_OFFSET))(this, a1);
		}

	};
}
