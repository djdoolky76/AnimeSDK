#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_E8B61D93842E3F17_A7033D734686AE40_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define UNITYENGINE_E8B61D93842E3F17_A7033D734686AE40__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace UnityEngine
{
	inline static constexpr unsigned int E8B61D93842E3F17_A7033D734686AE40_TypeDefinitionIndex = 21488;

	class E8B61D93842E3F17_A7033D734686AE40 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_E8B61D93842E3F17_A7033D734686AE40__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_E8B61D93842E3F17_A7033D734686AE40_INVOKE_OFFSET))(this);
		}
	};
}
