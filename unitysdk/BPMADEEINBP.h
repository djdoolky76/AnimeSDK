#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define BPMADEEINBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DBAB0)

	class BPMADEEINBP : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMADEEINBP_CTOR_OFFSET))(this);
		}

	};
