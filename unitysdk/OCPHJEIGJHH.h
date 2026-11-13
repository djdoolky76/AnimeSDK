#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define OCPHJEIGJHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05A560)

inline static constexpr unsigned int OCPHJEIGJHH_TypeDefinitionIndex = 43794;

	class OCPHJEIGJHH : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHJEIGJHH_CTOR_OFFSET))(this);
		}

	};
