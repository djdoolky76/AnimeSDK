#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define MEMKBDKPHDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C925420)

inline static constexpr unsigned int MEMKBDKPHDA_TypeDefinitionIndex = 42822;

	class MEMKBDKPHDA : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMKBDKPHDA_CTOR_OFFSET))(this);
		}

	};
