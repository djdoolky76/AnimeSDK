#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CFNCLABDJMB_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC53C10)
#define CFNCLABDJMB_CTOR_OFFSET UNITYSDK_OFFSET(0xCC53C80)

inline static constexpr unsigned int CFNCLABDJMB_TypeDefinitionIndex = 56994;

	class CFNCLABDJMB : public ::System::Object
	{
	public:
		::UnityEngine::Collider* KAELPBIMGKK; // 0x10
		::UnityEngine::Transform* HKDLAEGJOGB; // 0x18
		::RPG::GameCore::GameEntity* LDEIFAHFFIB; // 0x20
		::System::Boolean HDIKKDBCCKI; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 GEEJAJPPGDG; // 0x2C
		::UnityEngine::Vector3 KOEJEGHEPAL; // 0x30
		::UnityEngine::Vector3 LDABCOCLAGL; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNCLABDJMB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNCLABDJMB_CLEAR_OFFSET))(this);
		}

	};
