#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FCADC2979CDF4FD1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FCADC2979CDF4FD1__CTOR_OFFSET UNITYSDK_OFFSET(0x32B6630)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FCADC2979CDF4FD1_TypeDefinitionIndex = 19529;

	class BrowserNative_FCADC2979CDF4FD1 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FCADC2979CDF4FD1__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Double A1B7714AD78516A8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FCADC2979CDF4FD1_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, A1B7714AD78516A8);
		}
	};
}
