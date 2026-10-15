#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define OEKCIKFHGLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95E360)

inline static constexpr unsigned int OEKCIKFHGLM_TypeDefinitionIndex = 42812;

	class OEKCIKFHGLM : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKCIKFHGLM_CTOR_OFFSET))(this);
		}

	};
