#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_F1F40F5A342086A4_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD99F70)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_F1F40F5A342086A4_TypeDefinitionIndex = 6176;

	class IsByRefLikeAttribute_F1F40F5A342086A4 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_F1F40F5A342086A4_CTOR_OFFSET))(this);
		}

	};
}
