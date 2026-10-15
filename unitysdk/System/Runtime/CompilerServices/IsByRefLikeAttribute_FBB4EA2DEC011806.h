#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_FBB4EA2DEC011806_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E710)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_FBB4EA2DEC011806_TypeDefinitionIndex = 35871;

	class IsByRefLikeAttribute_FBB4EA2DEC011806 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_FBB4EA2DEC011806_CTOR_OFFSET))(this);
		}

	};
}
