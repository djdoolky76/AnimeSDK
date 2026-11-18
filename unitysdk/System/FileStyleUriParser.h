#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/UriParser.h"

#define SYSTEM_FILESTYLEURIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33C6D0)

namespace System
{
	inline static constexpr unsigned int FileStyleUriParser_TypeDefinitionIndex = 2680;

	class FileStyleUriParser : public ::System::UriParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FILESTYLEURIPARSER__CTOR_OFFSET))(this);
		}
	};
}
