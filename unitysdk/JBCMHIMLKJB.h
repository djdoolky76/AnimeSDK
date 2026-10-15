#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define JBCMHIMLKJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8D100)

	class JBCMHIMLKJB : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCMHIMLKJB_CTOR_OFFSET))(this);
		}

	};
