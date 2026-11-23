#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F64D7A2DC1D89570_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F64D7A2DC1D89570__CTOR_OFFSET UNITYSDK_OFFSET(0x2936C90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F64D7A2DC1D89570_TypeDefinitionIndex = 19503;

	class BrowserNative_F64D7A2DC1D89570 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F64D7A2DC1D89570__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F0F8EF5529D9B6EF, ::System::IntPtr F220A2D27F7C6B6C, ::System::Int32 FECF3E2806C52411)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F64D7A2DC1D89570_INVOKE_OFFSET))(this, F0F8EF5529D9B6EF, F220A2D27F7C6B6C, FECF3E2806C52411);
		}
	};
}
