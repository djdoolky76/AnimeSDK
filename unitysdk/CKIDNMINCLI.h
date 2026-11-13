#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define CKIDNMINCLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB16AF0)

inline static constexpr unsigned int CKIDNMINCLI_TypeDefinitionIndex = 43787;

	class CKIDNMINCLI : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIDNMINCLI_CTOR_OFFSET))(this);
		}

	};
