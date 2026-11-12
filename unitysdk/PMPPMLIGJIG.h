#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define PMPPMLIGJIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D978730)

inline static constexpr unsigned int PMPPMLIGJIG_TypeDefinitionIndex = 37984;

	class PMPPMLIGJIG : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPPMLIGJIG_CTOR_OFFSET))(this);
		}

	};
