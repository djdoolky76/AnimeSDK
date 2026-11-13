#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C1F00)
#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1F1C1C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENTAPPEND_OFFSET UNITYSDK_OFFSET(0x1F1C1E50)
#define ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1F1C1DC0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int UserAgent_TypeDefinitionIndex = 40495;

	class UserAgent : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_agentOverride()
		{
			return (::System::String**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "UserAgent")->GetStaticField(0x483A0);
		}

		static ::System::String** StaticGet_s_strAgentAppendSuffix()
		{
			return (::System::String**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "UserAgent")->GetStaticField(0x483A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_CTOR_OFFSET))(this);
		}

		static ::System::String* GetUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_GETUSERAGENT_OFFSET))();
		}

		static ::System::Void SetUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void SetUserAgentAppend(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_USERAGENT_SETUSERAGENTAPPEND_OFFSET))(a1);
		}

	};
}
