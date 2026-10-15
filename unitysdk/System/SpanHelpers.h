#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }

#define SYSTEM_SPANHELPERS_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET UNITYSDK_OFFSET(0x1C0F9B30)

namespace System
{
	inline static constexpr unsigned int SpanHelpers_TypeDefinitionIndex = 122;

	class SpanHelpers : public ::System::Object
	{
	public:
		static ::System::Boolean IsReferenceOrContainsReferencesCore(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SPANHELPERS_ISREFERENCEORCONTAINSREFERENCESCORE_OFFSET))(a1);
		}

	};
}
