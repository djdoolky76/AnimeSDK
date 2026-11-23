#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FC99F26705C22F53_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FC99F26705C22F53__CTOR_OFFSET UNITYSDK_OFFSET(0x4407A80)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FC99F26705C22F53_TypeDefinitionIndex = 19469;

	class BrowserNative_FC99F26705C22F53 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FC99F26705C22F53__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F22A80DDEC881E7C, ::System::String* B083BE7841B347C4, ::System::String* AFE8F10692F5139F, ::System::Int32 E114CA251F811C75)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FC99F26705C22F53_INVOKE_OFFSET))(this, F22A80DDEC881E7C, B083BE7841B347C4, AFE8F10692F5139F, E114CA251F811C75);
		}
	};
}
