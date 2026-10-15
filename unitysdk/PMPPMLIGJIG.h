#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define PMPPMLIGJIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F6DE0)

	class PMPPMLIGJIG : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPPMLIGJIG_CTOR_OFFSET))(this);
		}

	};
