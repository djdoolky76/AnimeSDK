#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_WEB_UTIL_HELPERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F32C0)

namespace System::Web::Util
{
	class Helpers : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo** StaticGet_InvariantCulture()
		{
			return (::System::Globalization::CultureInfo**)UnitySDK::FromName("System.Web.Util", "Helpers")->GetStaticField(0x339F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_WEB_UTIL_HELPERS_CCTOR_OFFSET))();
		}

	};
}
