#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x12476730)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_GETBACKDISTANCE_OFFSET UNITYSDK_OFFSET(0x12476EC0)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_GETFRONTDISTANCE_OFFSET UNITYSDK_OFFSET(0x12476D30)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_SET_OFFSET UNITYSDK_OFFSET(0x124762B0)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_UPDATEKINEMATICELEMENTS_OFFSET UNITYSDK_OFFSET(0x12475A70)
#define MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12477050)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFollowJointMoveElement_TypeDefinitionIndex = 42742;

	class MonoFollowJointMoveElement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::MonoFollowJointMoveElement*>* elements; // 0x18
		::UnityEngine::Transform* Point1; // 0x20
		::UnityEngine::Transform* Point2; // 0x28
		::UnityEngine::Transform* Point3; // 0x30
		::UnityEngine::Vector3 DHFEGPNNPBG; // 0x38
		::UnityEngine::Vector3 MFODBPDJBOO; // 0x44
		::System::Single CLKBJFDGOLJ; // 0x50
		::System::Single ODJLNMDABGB; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void UpdateKinematicElements(::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_UPDATEKINEMATICELEMENTS_OFFSET))(this, IFHEOPLLDGC);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_AWAKE_OFFSET))(this);
		}

		::System::Void Set(::UnityEngine::Vector3 KKEAMAFDBDG, ::UnityEngine::Vector3 HODAIDNDKHD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_SET_OFFSET))(this, KKEAMAFDBDG, HODAIDNDKHD);
		}

		::System::Single GetFrontDistance(::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC)
		{
			return ((::System::Single(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_GETFRONTDISTANCE_OFFSET))(this, IFHEOPLLDGC);
		}

		::System::Single GetBackDistance(::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC)
		{
			return ((::System::Single(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFOLLOWJOINTMOVEELEMENT_GETBACKDISTANCE_OFFSET))(this, IFHEOPLLDGC);
		}
	};
}
