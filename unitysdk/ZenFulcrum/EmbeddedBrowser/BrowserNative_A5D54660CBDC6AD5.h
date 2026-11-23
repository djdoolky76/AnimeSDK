#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A5D54660CBDC6AD5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A5D54660CBDC6AD5__CTOR_OFFSET UNITYSDK_OFFSET(0x4407770)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_A5D54660CBDC6AD5_TypeDefinitionIndex = 19536;

	class BrowserNative_A5D54660CBDC6AD5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A5D54660CBDC6AD5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Boolean EC6B72B5D968BDBE, ::System::Int32 F7135AD9F1343203, ::System::Int32 ECB2F4282AE7F3D2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A5D54660CBDC6AD5_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, EC6B72B5D968BDBE, F7135AD9F1343203, ECB2F4282AE7F3D2);
		}
	};
}
