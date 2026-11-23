#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ECFC6AA0B7E7427E_INVOKE_OFFSET UNITYSDK_OFFSET(0x4407280)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ECFC6AA0B7E7427E__CTOR_OFFSET UNITYSDK_OFFSET(0x440ADF0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ECFC6AA0B7E7427E_TypeDefinitionIndex = 19476;

	class BrowserNative_ECFC6AA0B7E7427E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ECFC6AA0B7E7427E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F22A80DDEC881E7C, ::System::Boolean BF16AF60C23CAFE8, ::System::Boolean A60D36A71E5F8E6D, ::System::Boolean A9EB61C43D53132B, ::System::IntPtr B960AC235824C6C8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ECFC6AA0B7E7427E_INVOKE_OFFSET))(this, F22A80DDEC881E7C, BF16AF60C23CAFE8, A60D36A71E5F8E6D, A9EB61C43D53132B, B960AC235824C6C8);
		}
	};
}
