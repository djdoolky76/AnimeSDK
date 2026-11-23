#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_A705336D5C9DF1CA.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E23A0D0C65F5F02A_FF2734F26DD61FDE_OFFSET UNITYSDK_OFFSET(0x440EAE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E23A0D0C65F5F02A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_E23A0D0C65F5F02A_TypeDefinitionIndex = 19557;

	class BrowserNative_E23A0D0C65F5F02A : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_A705336D5C9DF1CA B657584D50B81BBF; // 0x10
		::System::Boolean F91B3753116DAEF1; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E23A0D0C65F5F02A__CTOR_OFFSET))(this);
		}

		::System::Void FF2734F26DD61FDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E23A0D0C65F5F02A_FF2734F26DD61FDE_OFFSET))(this);
		}
	};
}
