#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B4AFED7959877947_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B4AFED7959877947__CTOR_OFFSET UNITYSDK_OFFSET(0x32B6A80)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_B4AFED7959877947_TypeDefinitionIndex = 19521;

	class BrowserNative_B4AFED7959877947 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B4AFED7959877947__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Boolean E18BE0BAB1EAE4AB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B4AFED7959877947_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, E18BE0BAB1EAE4AB);
		}
	};
}
