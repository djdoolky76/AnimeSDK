#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Version; }

#define SYSTEM_NET_HTTPVERSION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F02E640)

namespace System::Net
{
	inline static constexpr unsigned int HttpVersion_TypeDefinitionIndex = 2739;

	class HttpVersion : public ::System::Object
	{
	public:
		static ::System::Version** StaticGet_Version11()
		{
			return (::System::Version**)UnitySDK::FromName("System.Net", "HttpVersion")->GetStaticField(0xB030);
		}

		static ::System::Version** StaticGet_Version10()
		{
			return (::System::Version**)UnitySDK::FromName("System.Net", "HttpVersion")->GetStaticField(0xB038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVERSION_CCTOR_OFFSET))();
		}

	};
}
