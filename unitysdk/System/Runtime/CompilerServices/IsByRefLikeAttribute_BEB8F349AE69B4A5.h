#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_BEB8F349AE69B4A5_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD9030)

namespace System::Runtime::CompilerServices
{
	class IsByRefLikeAttribute_BEB8F349AE69B4A5 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_BEB8F349AE69B4A5_CTOR_OFFSET))(this);
		}

	};
}
