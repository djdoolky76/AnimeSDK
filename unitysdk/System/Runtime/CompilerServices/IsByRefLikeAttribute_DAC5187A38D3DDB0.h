#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_DAC5187A38D3DDB0_CTOR_OFFSET UNITYSDK_OFFSET(0x1F29BC80)

namespace System::Runtime::CompilerServices
{
	class IsByRefLikeAttribute_DAC5187A38D3DDB0 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_DAC5187A38D3DDB0_CTOR_OFFSET))(this);
		}

	};
}
