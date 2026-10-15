#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define MFJBACAKMJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C925480)

inline static constexpr unsigned int MFJBACAKMJO_TypeDefinitionIndex = 42821;

	class MFJBACAKMJO : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJBACAKMJO_CTOR_OFFSET))(this);
		}

	};
