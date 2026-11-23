#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define PAMPELGAMES_SHARED_UTILITY_PGTRANSFORMUTILITY_A94ED6B012E0AEA3_1_OFFSET UNITYSDK_OFFSET(0x3DBD8B0)
#define PAMPELGAMES_SHARED_UTILITY_PGTRANSFORMUTILITY_A94ED6B012E0AEA3_OFFSET UNITYSDK_OFFSET(0x3DBD620)
#define PAMPELGAMES_SHARED_UTILITY_PGTRANSFORMUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace PampelGames::Shared::Utility
{
	inline static constexpr unsigned int PGTransformUtility_TypeDefinitionIndex = 21161;

	class PGTransformUtility : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Void A94ED6B012E0AEA3(::UnityEngine::Transform* E7A41DB667CBC570, ::UnityEngine::Vector3 B224C0AF076834BC, ::UnityEngine::Quaternion A0556B8B541B6D55)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_PGTRANSFORMUTILITY_A94ED6B012E0AEA3_OFFSET))(E7A41DB667CBC570, B224C0AF076834BC, A0556B8B541B6D55);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_PGTRANSFORMUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void A94ED6B012E0AEA3_1(::UnityEngine::Transform* E7A41DB667CBC570, ::UnityEngine::Vector3 B224C0AF076834BC, ::UnityEngine::Vector3 B091C5F589891E31)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_PGTRANSFORMUTILITY_A94ED6B012E0AEA3_1_OFFSET))(E7A41DB667CBC570, B224C0AF076834BC, B091C5F589891E31);
		}
	};
}
