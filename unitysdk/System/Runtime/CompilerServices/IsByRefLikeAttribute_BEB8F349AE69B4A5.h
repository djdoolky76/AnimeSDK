#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_BEB8F349AE69B4A5_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB8850)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_BEB8F349AE69B4A5_TypeDefinitionIndex = 7149;

	class IsByRefLikeAttribute_BEB8F349AE69B4A5 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_BEB8F349AE69B4A5_CTOR_OFFSET))(this);
		}

	};
}
