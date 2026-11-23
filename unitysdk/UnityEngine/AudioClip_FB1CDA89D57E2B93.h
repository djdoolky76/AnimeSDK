#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_AUDIOCLIP_FB1CDA89D57E2B93_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_AUDIOCLIP_FB1CDA89D57E2B93__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_FB1CDA89D57E2B93_TypeDefinitionIndex = 21416;

	class AudioClip_FB1CDA89D57E2B93 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_FB1CDA89D57E2B93__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_FB1CDA89D57E2B93_INVOKE_OFFSET))(this, EB211B01816ACA79);
		}
	};
}
