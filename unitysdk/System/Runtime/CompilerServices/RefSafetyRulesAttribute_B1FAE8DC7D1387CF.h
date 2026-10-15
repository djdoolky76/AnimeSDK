#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_B1FAE8DC7D1387CF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD869C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_B1FAE8DC7D1387CF_TypeDefinitionIndex = 43914;

	class RefSafetyRulesAttribute_B1FAE8DC7D1387CF : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_B1FAE8DC7D1387CF_CTOR_OFFSET))(this, a1);
		}

	};
}
