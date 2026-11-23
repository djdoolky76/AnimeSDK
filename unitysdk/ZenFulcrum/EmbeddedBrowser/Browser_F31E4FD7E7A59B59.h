#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_A055FF93B9FFC7A6; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F31E4FD7E7A59B59_FF7E012A7CE17E6D_OFFSET UNITYSDK_OFFSET(0x43FDA30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F31E4FD7E7A59B59__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_F31E4FD7E7A59B59_TypeDefinitionIndex = 19370;

	class Browser_F31E4FD7E7A59B59 : public ::System::Object
	{
	public:
		::System::Action* E04D2BE64FCE9814; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x18
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_A055FF93B9FFC7A6* E2A5F664113FF4C7; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F31E4FD7E7A59B59__CTOR_OFFSET))(this);
		}

		::System::Void FF7E012A7CE17E6D(::System::Int32 F5AEFA05C9F71B82)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F31E4FD7E7A59B59_FF7E012A7CE17E6D_OFFSET))(this, F5AEFA05C9F71B82);
		}
	};
}
