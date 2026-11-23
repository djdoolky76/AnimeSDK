#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeLoadException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;

#define SYSTEM_TYPEACCESSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B8A7E0)
#define SYSTEM_TYPEACCESSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B4D0D0)

namespace System
{
	inline static constexpr unsigned int TypeAccessException_TypeDefinitionIndex = 11052;

	class TypeAccessException : public ::System::TypeLoadException
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION__CTOR_1_OFFSET))(this);
		}
	};
}
