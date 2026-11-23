#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_EBEFCC617FD40AC1.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_B48363129326E2FA.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_F837A5CEF0410B97; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B8F46B0E2D7938CA_INVOKE_OFFSET UNITYSDK_OFFSET(0x4407980)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B8F46B0E2D7938CA__CTOR_OFFSET UNITYSDK_OFFSET(0x44079D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_B8F46B0E2D7938CA_TypeDefinitionIndex = 19546;

	class BrowserNative_B8F46B0E2D7938CA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B8F46B0E2D7938CA__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_EBEFCC617FD40AC1 E92416CA5B3A3D78, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_B48363129326E2FA B093D14BEB149AD9, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F837A5CEF0410B97* ABCBCC5B21FA7C82)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_EBEFCC617FD40AC1, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_B48363129326E2FA, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F837A5CEF0410B97*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B8F46B0E2D7938CA_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, E92416CA5B3A3D78, B093D14BEB149AD9, ABCBCC5B21FA7C82);
		}
	};
}
