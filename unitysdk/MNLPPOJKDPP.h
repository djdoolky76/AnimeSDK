#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define MNLPPOJKDPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92DD50)

inline static constexpr unsigned int MNLPPOJKDPP_TypeDefinitionIndex = 42810;

	class MNLPPOJKDPP : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLPPOJKDPP_CTOR_OFFSET))(this);
		}

	};
