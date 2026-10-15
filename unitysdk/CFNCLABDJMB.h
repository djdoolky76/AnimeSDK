#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CFNCLABDJMB_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC590E0)
#define CFNCLABDJMB_CTOR_OFFSET UNITYSDK_OFFSET(0xCC59140)

inline static constexpr unsigned int CFNCLABDJMB_TypeDefinitionIndex = 56994;

	class CFNCLABDJMB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* LDEIFAHFFIB; // 0x10
		::UnityEngine::Collider* KAELPBIMGKK; // 0x18
		::UnityEngine::Transform* HKDLAEGJOGB; // 0x20
		::System::UInt32 GEEJAJPPGDG; // 0x28
		::UnityEngine::Vector3 LDABCOCLAGL; // 0x2C
		::System::Boolean HDIKKDBCCKI; // 0x38
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 KOEJEGHEPAL; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNCLABDJMB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNCLABDJMB_CLEAR_OFFSET))(this);
		}

	};
