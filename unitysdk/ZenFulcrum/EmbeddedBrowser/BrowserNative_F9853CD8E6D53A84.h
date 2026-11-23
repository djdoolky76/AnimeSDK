#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F9853CD8E6D53A84_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F9853CD8E6D53A84__CTOR_OFFSET UNITYSDK_OFFSET(0x32B7970)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F9853CD8E6D53A84_TypeDefinitionIndex = 19502;

	class BrowserNative_F9853CD8E6D53A84 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F9853CD8E6D53A84__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F0F8EF5529D9B6EF, ::System::Int32 A020CC5210EABB6C, ::System::String* B959118B87D515CB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F9853CD8E6D53A84_INVOKE_OFFSET))(this, F0F8EF5529D9B6EF, A020CC5210EABB6C, B959118B87D515CB);
		}
	};
}
