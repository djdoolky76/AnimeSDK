#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeAccessException.h"

#define SYSTEM_REFLECTION_MISSINGMETADATAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3CD5A20)

namespace System::Reflection
{
	inline static constexpr unsigned int MissingMetadataException_TypeDefinitionIndex = 10642;

	class MissingMetadataException : public ::System::TypeAccessException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSINGMETADATAEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
