#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_AUDIOCLIP_BC8827C8DB390637_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_AUDIOCLIP_BC8827C8DB390637__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_BC8827C8DB390637_TypeDefinitionIndex = 21415;

	class AudioClip_BC8827C8DB390637 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_BC8827C8DB390637__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::Il2CppArray<::System::Single>* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_BC8827C8DB390637_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
		}
	};
}
