#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define BPMADEEINBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AD840)

inline static constexpr unsigned int BPMADEEINBP_TypeDefinitionIndex = 42825;

	class BPMADEEINBP : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMADEEINBP_CTOR_OFFSET))(this);
		}

	};
