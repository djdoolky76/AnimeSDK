#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_A055FF93B9FFC7A6; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FCEC547710453259_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FCEC547710453259__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FCEC547710453259_TypeDefinitionIndex = 19515;

	class BrowserNative_FCEC547710453259 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FCEC547710453259__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A055FF93B9FFC7A6* ABCBCC5B21FA7C82)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A055FF93B9FFC7A6*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FCEC547710453259_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, ABCBCC5B21FA7C82);
		}
	};
}
