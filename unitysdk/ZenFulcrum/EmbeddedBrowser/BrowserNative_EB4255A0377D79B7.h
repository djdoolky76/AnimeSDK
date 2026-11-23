#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_F1F674D39460C3B5.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB4255A0377D79B7_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB4255A0377D79B7__CTOR_OFFSET UNITYSDK_OFFSET(0x440CEF0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_EB4255A0377D79B7_TypeDefinitionIndex = 19474;

	class BrowserNative_EB4255A0377D79B7 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB4255A0377D79B7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F22A80DDEC881E7C, ::System::String* EAFCF51C17536668, ::System::Int32 BB8C609F76620E45, ::System::Int32 A0A0D02932F12CFD, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F1F674D39460C3B5 B333195BCAC7870A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F1F674D39460C3B5))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB4255A0377D79B7_INVOKE_OFFSET))(this, F22A80DDEC881E7C, EAFCF51C17536668, BB8C609F76620E45, A0A0D02932F12CFD, B333195BCAC7870A);
		}
	};
}
