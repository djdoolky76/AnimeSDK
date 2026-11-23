#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }

#define ABC_MISCS_SCENECAMERAMONOBEHAVIOR_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x17D5340)
#define ABC_MISCS_SCENECAMERAMONOBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Miscs
{
	inline static constexpr unsigned int SceneCameraMonoBehavior_TypeDefinitionIndex = 987;

	class SceneCameraMonoBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* MainCamera; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_MISCS_SCENECAMERAMONOBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_MISCS_SCENECAMERAMONOBEHAVIOR_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
