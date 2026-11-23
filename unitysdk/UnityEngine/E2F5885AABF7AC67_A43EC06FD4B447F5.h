#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/AB878F4F1A86E55C.h"

namespace System { class Object; }

#define UNITYENGINE_E2F5885AABF7AC67_A43EC06FD4B447F5_INVOKE_OFFSET UNITYSDK_OFFSET(0x32B63F0)
#define UNITYENGINE_E2F5885AABF7AC67_A43EC06FD4B447F5__CTOR_OFFSET UNITYSDK_OFFSET(0x32B7030)

namespace UnityEngine
{
	inline static constexpr unsigned int E2F5885AABF7AC67_A43EC06FD4B447F5_TypeDefinitionIndex = 20798;

	class E2F5885AABF7AC67_A43EC06FD4B447F5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_E2F5885AABF7AC67_A43EC06FD4B447F5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::AB878F4F1A86E55C F7B2B9D66F63A087, ::System::Object* B85CF0085EE32C73)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AB878F4F1A86E55C, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_E2F5885AABF7AC67_A43EC06FD4B447F5_INVOKE_OFFSET))(this, F7B2B9D66F63A087, B85CF0085EE32C73);
		}
	};
}
