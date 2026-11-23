#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A24A18DBB977CEBB_INVOKE_OFFSET UNITYSDK_OFFSET(0x374AE00)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A24A18DBB977CEBB__CTOR_OFFSET UNITYSDK_OFFSET(0x44078D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_A24A18DBB977CEBB_TypeDefinitionIndex = 19533;

	class BrowserNative_A24A18DBB977CEBB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A24A18DBB977CEBB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A24A18DBB977CEBB_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, BB8C609F76620E45, A0A0D02932F12CFD);
		}
	};
}
