#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define OFEDNOALGAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CD00)

	class OFEDNOALGAE : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEDNOALGAE_CTOR_OFFSET))(this);
		}

	};
