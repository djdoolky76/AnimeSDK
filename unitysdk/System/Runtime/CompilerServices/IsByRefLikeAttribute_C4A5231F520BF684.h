#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_C4A5231F520BF684_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC63B00)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_C4A5231F520BF684_TypeDefinitionIndex = 44046;

	class IsByRefLikeAttribute_C4A5231F520BF684 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_C4A5231F520BF684_CTOR_OFFSET))(this);
		}

	};
}
