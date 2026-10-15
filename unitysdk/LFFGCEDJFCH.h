#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define LFFGCEDJFCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73AC70)

inline static constexpr unsigned int LFFGCEDJFCH_TypeDefinitionIndex = 37059;

	class LFFGCEDJFCH : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFGCEDJFCH_CTOR_OFFSET))(this);
		}

	};
