#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define MEMKBDKPHDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE6930)

inline static constexpr unsigned int MEMKBDKPHDA_TypeDefinitionIndex = 43802;

	class MEMKBDKPHDA : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMKBDKPHDA_CTOR_OFFSET))(this);
		}

	};
