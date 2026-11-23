#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B77AD2A4A35CA9E9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B77AD2A4A35CA9E9__CTOR_OFFSET UNITYSDK_OFFSET(0x2EEF610)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_B77AD2A4A35CA9E9_TypeDefinitionIndex = 19527;

	class BrowserNative_B77AD2A4A35CA9E9 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B77AD2A4A35CA9E9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::String* BB38682D81BC7A95, ::System::String* B960AC235824C6C8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B77AD2A4A35CA9E9_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, BB38682D81BC7A95, B960AC235824C6C8);
		}
	};
}
