#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define HMGGAEKEMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABED50)

inline static constexpr unsigned int HMGGAEKEMPJ_TypeDefinitionIndex = 42811;

	class HMGGAEKEMPJ : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGAEKEMPJ_CTOR_OFFSET))(this);
		}

	};
