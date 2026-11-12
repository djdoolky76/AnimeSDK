#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define CDBCAPBPADO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5E190)

inline static constexpr unsigned int CDBCAPBPADO_TypeDefinitionIndex = 43797;

	class CDBCAPBPADO : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBCAPBPADO_CTOR_OFFSET))(this);
		}

	};
