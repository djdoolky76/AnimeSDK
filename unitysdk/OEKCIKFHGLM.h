#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define OEKCIKFHGLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06CAD0)

inline static constexpr unsigned int OEKCIKFHGLM_TypeDefinitionIndex = 43792;

	class OEKCIKFHGLM : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKCIKFHGLM_CTOR_OFFSET))(this);
		}

	};
