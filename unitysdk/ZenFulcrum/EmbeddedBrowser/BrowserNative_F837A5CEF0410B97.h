#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F837A5CEF0410B97_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F837A5CEF0410B97__CTOR_OFFSET UNITYSDK_OFFSET(0x32B7970)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F837A5CEF0410B97_TypeDefinitionIndex = 19471;

	class BrowserNative_F837A5CEF0410B97 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F837A5CEF0410B97__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 E4D24DC98ED72E5C, ::System::Int32 F38BBDFFBA920900, ::System::IntPtr FA5C3A0CE00AE220)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F837A5CEF0410B97_INVOKE_OFFSET))(this, E4D24DC98ED72E5C, F38BBDFFBA920900, FA5C3A0CE00AE220);
		}
	};
}
