#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_ANIMAGECOMPONENT_E74674CEFA08BE53_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define UNITYENGINE_ANIMAGECOMPONENT_E74674CEFA08BE53__CTOR_OFFSET UNITYSDK_OFFSET(0x3A10630)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageComponent_E74674CEFA08BE53_TypeDefinitionIndex = 21244;

	class AnimageComponent_E74674CEFA08BE53 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_E74674CEFA08BE53__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::UInt32 E8561781742E75BB, ::System::Int32 F99DA7794B404976, ::System::Int32 FE180A3927759E3A)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_E74674CEFA08BE53_INVOKE_OFFSET))(this, E8561781742E75BB, F99DA7794B404976, FE180A3927759E3A);
		}
	};
}
