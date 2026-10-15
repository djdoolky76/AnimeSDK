#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_4DFBE3B496B1FA3D_CTOR_OFFSET UNITYSDK_OFFSET(0x1C421580)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_4DFBE3B496B1FA3D_TypeDefinitionIndex = 5074;

	class IsByRefLikeAttribute_4DFBE3B496B1FA3D : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_4DFBE3B496B1FA3D_CTOR_OFFSET))(this);
		}

	};
}
