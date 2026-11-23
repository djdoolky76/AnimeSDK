#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_ANIMAGECOMPONENT_AF06579D0800309E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define UNITYENGINE_ANIMAGECOMPONENT_AF06579D0800309E__CTOR_OFFSET UNITYSDK_OFFSET(0x31805B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageComponent_AF06579D0800309E_TypeDefinitionIndex = 21245;

	class AnimageComponent_AF06579D0800309E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_AF06579D0800309E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::UInt32 E8561781742E75BB, ::System::UInt32 BD58AB76672527EB, ::System::Boolean F6277A6E935F582B)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_AF06579D0800309E_INVOKE_OFFSET))(this, E8561781742E75BB, BD58AB76672527EB, F6277A6E935F582B);
		}
	};
}
