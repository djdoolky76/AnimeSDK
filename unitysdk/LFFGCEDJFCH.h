#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define LFFGCEDJFCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73AC70)

	class LFFGCEDJFCH : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFGCEDJFCH_CTOR_OFFSET))(this);
		}

	};
