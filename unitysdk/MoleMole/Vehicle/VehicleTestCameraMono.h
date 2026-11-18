#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/NOHGGLFKBEH.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CGDMNBKANIL;
class CIPHODBPLDD;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12C1D2B0)
#define MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO_UPDATE_OFFSET UNITYSDK_OFFSET(0x12C1CDF0)
#define MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1D300)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleTestCameraMono_TypeDefinitionIndex = 92735;

	class VehicleTestCameraMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* virtualCamera; // 0x18
		::System::Boolean catchAvatar; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single fieldOfView; // 0x24
		::UnityEngine::Vector3 followOffset; // 0x28
		::UnityEngine::Vector3 cameraOffset; // 0x34
		::UnityEngine::Vector3 cameraOffsetDamping; // 0x40
		::UnityEngine::Vector3 cameraRotation; // 0x4C
		::UnityEngine::AnimationCurve* acceleratePullCurve; // 0x58
		::System::Single curveBlend; // 0x60
		::System::Byte _padding1[0x4];
		::MoleMole::Battle::Entity* IHONEOGNLGH; // 0x68
		::Il2CppArray<::UnityEngine::Renderer*>* HMHGMMCNHHH; // 0x70
		::CIPHODBPLDD* CEGKFLHNIMN; // 0x78
		::CGDMNBKANIL* MDGBOCKJILK; // 0x80
		::Cinemachine::CameraState FMPNICNEFMH; // 0x88
		::NOHGGLFKBEH NLFMAIHPKOO; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLETESTCAMERAMONO_ONDESTROY_OFFSET))(this);
		}
	};
}
