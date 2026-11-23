#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E23D59568E3330AA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E23D59568E3330AA__CTOR_OFFSET UNITYSDK_OFFSET(0x38DDC80)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_E23D59568E3330AA_TypeDefinitionIndex = 19508;

	class BrowserNative_E23D59568E3330AA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E23D59568E3330AA__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Int32 Invoke(::System::String* B960AC235824C6C8, ::System::String* F89C69B7E6160352)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E23D59568E3330AA_INVOKE_OFFSET))(this, B960AC235824C6C8, F89C69B7E6160352);
		}
	};
}
