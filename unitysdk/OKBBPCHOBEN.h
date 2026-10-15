#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define OKBBPCHOBEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C966F40)

inline static constexpr unsigned int OKBBPCHOBEN_TypeDefinitionIndex = 42808;

	class OKBBPCHOBEN : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBBPCHOBEN_CTOR_OFFSET))(this);
		}

	};
