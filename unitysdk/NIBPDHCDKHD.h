#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define NIBPDHCDKHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9660C0)

inline static constexpr unsigned int NIBPDHCDKHD_TypeDefinitionIndex = 42806;

	class NIBPDHCDKHD : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBPDHCDKHD_CTOR_OFFSET))(this);
		}

	};
