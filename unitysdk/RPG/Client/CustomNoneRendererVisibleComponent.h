#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Behaviour; }

#define RPG_CLIENT_CUSTOMNONERENDERERVISIBLECOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F2960)
#define RPG_CLIENT_CUSTOMNONERENDERERVISIBLECOMPONENT_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B7F2890)
#define RPG_CLIENT_CUSTOMNONERENDERERVISIBLECOMPONENT_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B7F27C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomNoneRendererVisibleComponent_TypeDefinitionIndex = 75423;

	class CustomNoneRendererVisibleComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean SyncSelfGoActiveState; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Behaviour*>* SyncComponentActiveState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMNONERENDERERVISIBLECOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void OnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMNONERENDERERVISIBLECOMPONENT_ONVISIBLE_OFFSET))(this);
		}

		::System::Void OnInVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMNONERENDERERVISIBLECOMPONENT_ONINVISIBLE_OFFSET))(this);
		}

	};
}
