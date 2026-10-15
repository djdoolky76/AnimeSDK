#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_206FD883B4FE6738_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC56AC0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_206FD883B4FE6738_TypeDefinitionIndex = 37459;

	class RefSafetyRulesAttribute_206FD883B4FE6738 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_206FD883B4FE6738_CTOR_OFFSET))(this, a1);
		}

	};
}
