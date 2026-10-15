#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define OHEKHDIOPLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9649F0)

inline static constexpr unsigned int OHEKHDIOPLD_TypeDefinitionIndex = 42819;

	class OHEKHDIOPLD : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEKHDIOPLD_CTOR_OFFSET))(this);
		}

	};
