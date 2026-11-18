#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_CONTAINSRIGHTPROJECTION_OFFSET UNITYSDK_OFFSET(0x7FEFE0)
#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_CONTAINSSIDEPROJECTION_OFFSET UNITYSDK_OFFSET(0x7FEFF0)
#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_INNERDISTANCE_OFFSET UNITYSDK_OFFSET(0x7FEDF0)
#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_OUTERDISTANCE_OFFSET UNITYSDK_OFFSET(0x7FEE00)
#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_RIGHTFACECENTER_OFFSET UNITYSDK_OFFSET(0x7FEF00)
#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_SIDEMAX_OFFSET UNITYSDK_OFFSET(0x7FEEB0)
#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_SIDEMIN_OFFSET UNITYSDK_OFFSET(0x7FEE50)
#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_RESOLVERIGHTFACECONTACTPOINT_OFFSET UNITYSDK_OFFSET(0x7FF000)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PaddleLocalRightCatchGeometry_TypeDefinitionIndex = 56744;

	struct alignas(4) PinballSubsystem_PaddleLocalRightCatchGeometry
	{
		::UnityEngine::Vector3 Center; // 0x10
		::UnityEngine::Vector3 Right; // 0x1C
		::System::Single RightHalfSize; // 0x28
		::UnityEngine::Vector3 Side; // 0x2C
		::System::Single SideHalfSize; // 0x38
		::System::Single MoverRadius; // 0x3C
		::System::Single CatchDistance; // 0x40
		::System::Single Skin; // 0x44

		::System::Single get_InnerDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_INNERDISTANCE_OFFSET))(this);
		}

		::System::Single get_OuterDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_OUTERDISTANCE_OFFSET))(this);
		}

		::System::Single get_SideMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_SIDEMIN_OFFSET))(this);
		}

		::System::Single get_SideMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_SIDEMAX_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RightFaceCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_GET_RIGHTFACECENTER_OFFSET))(this);
		}

		::System::Boolean ContainsRightProjection(::System::Single rightProjection)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_CONTAINSRIGHTPROJECTION_OFFSET))(this, rightProjection);
		}

		::System::Boolean ContainsSideProjection(::System::Single sideProjection)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_CONTAINSSIDEPROJECTION_OFFSET))(this, sideProjection);
		}

		::UnityEngine::Vector3 ResolveRightFaceContactPoint(::System::Single sideProjection)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLELOCALRIGHTCATCHGEOMETRY_RESOLVERIGHTFACECONTACTPOINT_OFFSET))(this, sideProjection);
		}
	};
}
