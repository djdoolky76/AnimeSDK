#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B4F9BE0CDD2ADCCF_INVOKE_OFFSET UNITYSDK_OFFSET(0x29E6270)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B4F9BE0CDD2ADCCF__CTOR_OFFSET UNITYSDK_OFFSET(0x4407610)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_B4F9BE0CDD2ADCCF_TypeDefinitionIndex = 19543;

	class BrowserNative_B4F9BE0CDD2ADCCF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B4F9BE0CDD2ADCCF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::IntPtr F6C2EBBDFCAEF915, ::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D, ::System::Int32& A72653354F9A1AF8, ::System::Int32& F2FB6ABC512B06E7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B4F9BE0CDD2ADCCF_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, F6C2EBBDFCAEF915, F5EF7E29767E03BF, F0961C93719F7B0D, A72653354F9A1AF8, F2FB6ABC512B06E7);
		}
	};
}
