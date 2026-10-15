#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define EOJDAECKCKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61C10)

	class EOJDAECKCKH : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJDAECKCKH_CTOR_OFFSET))(this);
		}

	};
