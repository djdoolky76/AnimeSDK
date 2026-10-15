#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_A4DCC844EBF0774D_CTOR_OFFSET UNITYSDK_OFFSET(0x166B6550)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_A4DCC844EBF0774D_TypeDefinitionIndex = 39710;

	class RefSafetyRulesAttribute_A4DCC844EBF0774D : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_A4DCC844EBF0774D_CTOR_OFFSET))(this, a1);
		}

	};
}
