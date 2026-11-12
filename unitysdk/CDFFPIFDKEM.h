#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define CDFFPIFDKEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5E220)

inline static constexpr unsigned int CDFFPIFDKEM_TypeDefinitionIndex = 43784;

	class CDFFPIFDKEM : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFFPIFDKEM_CTOR_OFFSET))(this);
		}

	};
