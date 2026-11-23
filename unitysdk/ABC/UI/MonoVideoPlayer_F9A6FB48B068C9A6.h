#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ABC_UI_MONOVIDEOPLAYER_F9A6FB48B068C9A6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define ABC_UI_MONOVIDEOPLAYER_F9A6FB48B068C9A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoVideoPlayer_F9A6FB48B068C9A6_TypeDefinitionIndex = 7615;

	class MonoVideoPlayer_F9A6FB48B068C9A6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ABC_UI_MONOVIDEOPLAYER_F9A6FB48B068C9A6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOVIDEOPLAYER_F9A6FB48B068C9A6_INVOKE_OFFSET))(this);
		}
	};
}
