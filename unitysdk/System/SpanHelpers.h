#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SYSTEM_SPANHELPERS_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET UNITYSDK_OFFSET(0x1DB63D60)

namespace System
{
	inline static constexpr unsigned int SpanHelpers_TypeDefinitionIndex = 112;

	class SpanHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsReferenceOrContainsReferencesCore(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET))(type);
		}
	};
}
