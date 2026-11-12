#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define NIBPDHCDKHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB27EC0)

inline static constexpr unsigned int NIBPDHCDKHD_TypeDefinitionIndex = 43786;

	class NIBPDHCDKHD : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBPDHCDKHD_CTOR_OFFSET))(this);
		}

	};
