#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define DELIAOGHDJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BA590)

inline static constexpr unsigned int DELIAOGHDJG_TypeDefinitionIndex = 37057;

	class DELIAOGHDJG : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELIAOGHDJG_CTOR_OFFSET))(this);
		}

	};
