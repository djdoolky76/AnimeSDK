#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_362A1F67D5A41EEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB60A50)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_362A1F67D5A41EEE_TypeDefinitionIndex = 40778;

	class RefSafetyRulesAttribute_362A1F67D5A41EEE : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_362A1F67D5A41EEE_CTOR_OFFSET))(this, a1);
		}

	};
}
