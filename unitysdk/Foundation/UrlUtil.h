#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_URLUTIL_GETLOCALPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1DB309F0)
#define FOUNDATION_URLUTIL_ISWEBURL_OFFSET UNITYSDK_OFFSET(0x1DB30900)
#define FOUNDATION_URLUTIL_PARSEHOSTFROMDOMAIN_OFFSET UNITYSDK_OFFSET(0x1DB30560)

namespace Foundation
{
	inline static constexpr unsigned int UrlUtil_TypeDefinitionIndex = 7940;

	class UrlUtil : public ::System::Object
	{
	public:
		static ::System::String* ParseHostFromDomain(::System::String* domain)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_URLUTIL_PARSEHOSTFROMDOMAIN_OFFSET))(domain);
		}

		static ::System::Boolean IsWebUrl(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_URLUTIL_ISWEBURL_OFFSET))(path);
		}

		static ::System::String* GetLocalProtocol()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_URLUTIL_GETLOCALPROTOCOL_OFFSET))();
		}
	};
}
