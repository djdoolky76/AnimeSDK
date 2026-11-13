#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGEREXIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC2780)
#define AKTRIGGEREXIT_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1EBC26B0)

inline static constexpr unsigned int AkTriggerExit_TypeDefinitionIndex = 46041;

	class AkTriggerExit : public ::AkTriggerBase
	{
	public:
		::UnityEngine::GameObject* triggerObject; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGEREXIT_CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKTRIGGEREXIT_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

	};
