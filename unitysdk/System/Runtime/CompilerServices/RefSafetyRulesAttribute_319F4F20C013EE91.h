#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_319F4F20C013EE91_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF5E10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_319F4F20C013EE91_TypeDefinitionIndex = 10125;

	class RefSafetyRulesAttribute_319F4F20C013EE91 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_319F4F20C013EE91_CTOR_OFFSET))(this, a1);
		}

	};
}
