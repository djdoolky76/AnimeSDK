#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define CINEMACHINE_CINEMACHINESTORYBOARD_AA722F894A1D50FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_AA722F894A1D50FF_TypeDefinitionIndex = 18393;

	class CinemachineStoryboard_AA722F894A1D50FF : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* A0AACC2665B5B5BE; // 0x10
		::UnityEngine::Canvas* B23C36498000A887; // 0x18
		::Cinemachine::CinemachineBrain* F57BDA81E725983F; // 0x20
		::UnityEngine::RectTransform* B390C4A3966EFFF1; // 0x28
		::UnityEngine::UI::RawImage* BA9C662A52D8CC34; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESTORYBOARD_AA722F894A1D50FF__CTOR_OFFSET))(this);
		}
	};
}
