#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"

namespace E7F9C9491EE9F059 { class E497C885EE8CCBB1; }
namespace System { class Object; }
namespace System { class String; }

#define A8A8EA5F1DC267CF_A46861FDE7931227_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A8A8EA5F1DC267CF_A46861FDE7931227__CTOR_OFFSET UNITYSDK_OFFSET(0x3F4E8C0)

namespace A8A8EA5F1DC267CF
{
	inline static constexpr unsigned int A46861FDE7931227_TypeDefinitionIndex = 14178;

	class A46861FDE7931227 : public ::System::MulticastDelegate
	{
	public:
		::System::String* Invoke(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& A90E48A7BCFA135B, ::System::String* ABCD5D394A792652, ::E7F9C9491EE9F059::E497C885EE8CCBB1* BC0037EF049EA099)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::String*, ::E7F9C9491EE9F059::E497C885EE8CCBB1*))((::PBYTE)hIl2Cpp + A8A8EA5F1DC267CF_A46861FDE7931227_INVOKE_OFFSET))(this, A90E48A7BCFA135B, ABCD5D394A792652, BC0037EF049EA099);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A8A8EA5F1DC267CF_A46861FDE7931227__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
