#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define ECIKCALENKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA332D0)

	class ECIKCALENKF : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIKCALENKF_CTOR_OFFSET))(this);
		}

	};
