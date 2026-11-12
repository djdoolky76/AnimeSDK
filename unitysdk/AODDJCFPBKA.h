#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define AODDJCFPBKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1FDB0)

inline static constexpr unsigned int AODDJCFPBKA_TypeDefinitionIndex = 43807;

	class AODDJCFPBKA : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODDJCFPBKA_CTOR_OFFSET))(this);
		}

	};
