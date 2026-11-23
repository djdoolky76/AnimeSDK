#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_F1995C522EF36A7D; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E790B7F26A806261_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E790B7F26A806261__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_E790B7F26A806261_TypeDefinitionIndex = 19540;

	class BrowserNative_E790B7F26A806261 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E790B7F26A806261__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F1995C522EF36A7D* ABCBCC5B21FA7C82)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F1995C522EF36A7D*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E790B7F26A806261_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, ABCBCC5B21FA7C82);
		}
	};
}
