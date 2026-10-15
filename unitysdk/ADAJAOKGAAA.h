#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define ADAJAOKGAAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C581620)

	class ADAJAOKGAAA : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAJAOKGAAA_CTOR_OFFSET))(this);
		}

	};
