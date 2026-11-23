#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ABE4FF2A5CE207B3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ABE4FF2A5CE207B3__CTOR_OFFSET UNITYSDK_OFFSET(0x44076C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ABE4FF2A5CE207B3_TypeDefinitionIndex = 19526;

	class BrowserNative_ABE4FF2A5CE207B3 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ABE4FF2A5CE207B3__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::String* B960AC235824C6C8, ::System::Boolean E21BC0C8A287D980)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ABE4FF2A5CE207B3_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, B960AC235824C6C8, E21BC0C8A287D980);
		}
	};
}
