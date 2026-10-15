#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_1470C58090C8180D_CTOR_OFFSET UNITYSDK_OFFSET(0x1F691280)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_1470C58090C8180D_TypeDefinitionIndex = 6067;

	class IsByRefLikeAttribute_1470C58090C8180D : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_1470C58090C8180D_CTOR_OFFSET))(this);
		}

	};
}
