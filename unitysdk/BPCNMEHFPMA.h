#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define BPCNMEHFPMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AD7E0)

inline static constexpr unsigned int BPCNMEHFPMA_TypeDefinitionIndex = 42809;

	class BPCNMEHFPMA : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCNMEHFPMA_CTOR_OFFSET))(this);
		}

	};
