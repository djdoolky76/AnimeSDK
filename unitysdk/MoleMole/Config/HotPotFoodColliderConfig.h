#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HotPotFoodColliderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CapsuleDirection2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_CMDPHEIIONJ_OFFSET UNITYSDK_OFFSET(0x1278F7B0)
#define MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_FEICAJAAMKD_OFFSET UNITYSDK_OFFSET(0x1278F730)
#define MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_HAALDKADCLD_OFFSET UNITYSDK_OFFSET(0x127904D0)
#define MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1278F720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HotPotFoodColliderConfig_TypeDefinitionIndex = 53188;

	class HotPotFoodColliderConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::HotPotFoodColliderType colliderType; // 0x10
		::System::Single rotation; // 0x14
		::UnityEngine::Vector2 boxSize; // 0x18
		::UnityEngine::Vector2 boxOffset; // 0x20
		::System::Single circleRadius; // 0x28
		::UnityEngine::Vector2 circleOffset; // 0x2C
		::UnityEngine::Vector2 capsuleSize; // 0x34
		::UnityEngine::Vector2 capsuleOffset; // 0x3C
		::UnityEngine::CapsuleDirection2D capsuleDirection; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 FEICAJAAMKD()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_FEICAJAAMKD_OFFSET))(this);
		}

		::UnityEngine::Collider2D* CMDPHEIIONJ(::UnityEngine::GameObject* AGGGMHCKDNH, ::UnityEngine::UI::Image* CGJEBPGPIHO)
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_CMDPHEIIONJ_OFFSET))(this, AGGGMHCKDNH, CGJEBPGPIHO);
		}

		::UnityEngine::Collider2D* HAALDKADCLD(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_HAALDKADCLD_OFFSET))(this, NJOAJLDJCCJ);
		}
	};
}
