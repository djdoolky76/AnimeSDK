#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class ParkourCrossroadPositionCalculator; }

#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CALCULATEPROJECTIONONELLIPSE_OFFSET UNITYSDK_OFFSET(0xE4C8E20)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0xE4C89F0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE4C8AE0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_FINDMIRRORPOINTACROSSCAMERAPLANE_OFFSET UNITYSDK_OFFSET(0xE4C91F0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_GETCROSSEDPOINT_OFFSET UNITYSDK_OFFSET(0xE4C8BE0)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISINLEFTSCREEN_OFFSET UNITYSDK_OFFSET(0xE4C9070)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISINUPPERSCREEN_OFFSET UNITYSDK_OFFSET(0xE4C9010)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISPOINTINELLIPSE_OFFSET UNITYSDK_OFFSET(0xE4C8B50)
#define RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISWORLDPOSCLAMPEDINCAMERAZ_OFFSET UNITYSDK_OFFSET(0xE4C90D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourCrossroadPositionCalculator_TypeDefinitionIndex = 63239;

	class ParkourCrossroadPositionCalculator : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 _ScreenSize; // 0x10
		::System::Single EllipseSizeB; // 0x18
		::System::Single EllipseSizeA; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ParkourCrossroadPositionCalculator* Create(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::Client::ParkourCrossroadPositionCalculator*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean IsPointInEllipse(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISPOINTINELLIPSE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetCrossedPoint(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_GETCROSSEDPOINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInUpperScreen(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISINUPPERSCREEN_OFFSET))(this, a1);
		}

		::System::Boolean IsInLeftScreen(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISINLEFTSCREEN_OFFSET))(this, a1);
		}

		::System::Boolean IsWorldPosClampedInCameraZ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_ISWORLDPOSCLAMPEDINCAMERAZ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 CalculateProjectionOnEllipse(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_CALCULATEPROJECTIONONELLIPSE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FindMirrorPointAcrossCameraPlane(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURCROSSROADPOSITIONCALCULATOR_FINDMIRRORPOINTACROSSCAMERAPLANE_OFFSET))(this, a1);
		}

	};
}
