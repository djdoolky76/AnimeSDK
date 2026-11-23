#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_ANIMAGECOMPONENT_ABBCB2B63DAC93B2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_ANIMAGECOMPONENT_ABBCB2B63DAC93B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageComponent_ABBCB2B63DAC93B2_TypeDefinitionIndex = 21242;

	class AnimageComponent_ABBCB2B63DAC93B2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_ABBCB2B63DAC93B2__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::UInt32 E8561781742E75BB)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_ABBCB2B63DAC93B2_INVOKE_OFFSET))(this, E8561781742E75BB);
		}
	};
}
