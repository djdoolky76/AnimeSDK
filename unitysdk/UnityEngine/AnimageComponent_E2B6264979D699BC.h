#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/E820C206C2A91678/A3535BCB967AF6CD.h"

namespace System { class Object; }

#define UNITYENGINE_ANIMAGECOMPONENT_E2B6264979D699BC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_ANIMAGECOMPONENT_E2B6264979D699BC__CTOR_OFFSET UNITYSDK_OFFSET(0x2A95CF0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageComponent_E2B6264979D699BC_TypeDefinitionIndex = 21241;

	class AnimageComponent_E2B6264979D699BC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_E2B6264979D699BC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::E820C206C2A91678::A3535BCB967AF6CD& BAAAA15599D47B32)
		{
			return ((::System::Void(*)(::PVOID, ::E820C206C2A91678::A3535BCB967AF6CD&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_E2B6264979D699BC_INVOKE_OFFSET))(this, BAAAA15599D47B32);
		}
	};
}
