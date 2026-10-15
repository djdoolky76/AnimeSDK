#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define JKDDMBEEMJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA1480)

	class JKDDMBEEMJN : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDDMBEEMJN_CTOR_OFFSET))(this);
		}

	};
