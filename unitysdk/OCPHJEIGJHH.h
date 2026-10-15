#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define OCPHJEIGJHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C97A0A0)

inline static constexpr unsigned int OCPHJEIGJHH_TypeDefinitionIndex = 42814;

	class OCPHJEIGJHH : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHJEIGJHH_CTOR_OFFSET))(this);
		}

	};
