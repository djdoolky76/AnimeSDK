#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define E7F9C9491EE9F059_FBC5533D635319B5_INVOKE_OFFSET UNITYSDK_OFFSET(0x3FD5140)
#define E7F9C9491EE9F059_FBC5533D635319B5__CTOR_OFFSET UNITYSDK_OFFSET(0x3FD5180)

namespace E7F9C9491EE9F059
{
	inline static constexpr unsigned int FBC5533D635319B5_TypeDefinitionIndex = 14380;

	class FBC5533D635319B5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E7F9C9491EE9F059_FBC5533D635319B5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Nullable_1<::System::Int64> Invoke(::UnityEngine::InputSystem::InputDevice* B9AD68262157E9E0, ::PVOID A05B43D4AA20B471)
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + E7F9C9491EE9F059_FBC5533D635319B5_INVOKE_OFFSET))(this, B9AD68262157E9E0, A05B43D4AA20B471);
		}
	};
}
