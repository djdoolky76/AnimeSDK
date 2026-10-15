#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define JBCMHIMLKJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5EE00)

inline static constexpr unsigned int JBCMHIMLKJB_TypeDefinitionIndex = 42803;

	class JBCMHIMLKJB : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCMHIMLKJB_CTOR_OFFSET))(this);
		}

	};
