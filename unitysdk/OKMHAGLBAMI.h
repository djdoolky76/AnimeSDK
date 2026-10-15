#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define OKMHAGLBAMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96F810)

inline static constexpr unsigned int OKMHAGLBAMI_TypeDefinitionIndex = 42818;

	class OKMHAGLBAMI : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMHAGLBAMI_CTOR_OFFSET))(this);
		}

	};
