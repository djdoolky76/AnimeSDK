#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define FLPMJKNKODN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA712C0)

inline static constexpr unsigned int FLPMJKNKODN_TypeDefinitionIndex = 42824;

	class FLPMJKNKODN : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMJKNKODN_CTOR_OFFSET))(this);
		}

	};
