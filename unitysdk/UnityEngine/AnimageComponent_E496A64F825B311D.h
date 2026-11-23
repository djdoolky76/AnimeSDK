#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E820C206C2A91678/AE523370AEE2A1C5.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_ANIMAGECOMPONENT_E496A64F825B311D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define UNITYENGINE_ANIMAGECOMPONENT_E496A64F825B311D__CTOR_OFFSET UNITYSDK_OFFSET(0x40FADC0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageComponent_E496A64F825B311D_TypeDefinitionIndex = 21243;

	class AnimageComponent_E496A64F825B311D : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_E496A64F825B311D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::UInt32 E8561781742E75BB, ::E820C206C2A91678::AE523370AEE2A1C5 A288CB28FC2A6DA3, ::System::Object* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::E820C206C2A91678::AE523370AEE2A1C5, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_E496A64F825B311D_INVOKE_OFFSET))(this, E8561781742E75BB, A288CB28FC2A6DA3, F220A2D27F7C6B6C);
		}
	};
}
