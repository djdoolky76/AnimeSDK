#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/F3B65130B7601808.h"

namespace System { class Object; }

#define UNITYENGINE_A32D5860915C1CCE_BD792A65D62E4828_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_A32D5860915C1CCE_BD792A65D62E4828__CTOR_OFFSET UNITYSDK_OFFSET(0x2D126B0)

namespace UnityEngine
{
	inline static constexpr unsigned int A32D5860915C1CCE_BD792A65D62E4828_TypeDefinitionIndex = 17055;

	class A32D5860915C1CCE_BD792A65D62E4828 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_A32D5860915C1CCE_BD792A65D62E4828__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::F3B65130B7601808 FE8D1F6C3A21B8EB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::F3B65130B7601808))((::PBYTE)hIl2Cpp + UNITYENGINE_A32D5860915C1CCE_BD792A65D62E4828_INVOKE_OFFSET))(this, FE8D1F6C3A21B8EB);
		}
	};
}
