#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_D195B50D9B4DF9C9_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53AD00)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_D195B50D9B4DF9C9_TypeDefinitionIndex = 41606;

	class RefSafetyRulesAttribute_D195B50D9B4DF9C9 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_D195B50D9B4DF9C9_CTOR_OFFSET))(this, a1);
		}

	};
}
