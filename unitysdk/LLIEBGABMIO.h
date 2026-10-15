#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define LLIEBGABMIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C711C50)

inline static constexpr unsigned int LLIEBGABMIO_TypeDefinitionIndex = 37060;

	class LLIEBGABMIO : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIEBGABMIO_CTOR_OFFSET))(this);
		}

	};
