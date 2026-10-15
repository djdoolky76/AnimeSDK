#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_4700F967DFAB9FFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B7E20)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_4700F967DFAB9FFB_TypeDefinitionIndex = 40346;

	class RefSafetyRulesAttribute_4700F967DFAB9FFB : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_4700F967DFAB9FFB_CTOR_OFFSET))(this, a1);
		}

	};
}
