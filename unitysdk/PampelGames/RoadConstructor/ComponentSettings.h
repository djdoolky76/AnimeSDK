#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/A3B7A0A0A193FFC3.h"
#include "unitysdk/B223EC95048EAAE0/ECC37879E61B803B.h"
#include "unitysdk/B223EC95048EAAE0/F3864FBE665FEDC6.h"
#include "unitysdk/B223EC95048EAAE0/F5B6374A612EBA99.h"
#include "unitysdk/B223EC95048EAAE0/F9CCA286F8DB0796.h"
#include "unitysdk/B223EC95048EAAE0/FA28FCF9C7DD40ED.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Terrain; }

#define PAMPELGAMES_ROADCONSTRUCTOR_COMPONENTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x3DA2710)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int ComponentSettings_TypeDefinitionIndex = 18873;

	class ComponentSettings : public ::System::Object
	{
	public:
		::System::Int32 resolution; // 0x10
		::System::Int32 detailResolution; // 0x14
		::System::Boolean smartReduce; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 undoStorageSize; // 0x1C
		::B223EC95048EAAE0::F3864FBE665FEDC6 addCollider; // 0x20
		::System::Int32 addColliderLayer; // 0x24
		::System::String* roadTag; // 0x28
		::System::Collections::Generic::List_1<::System::Single>* lodList; // 0x30
		::System::Single baseRoadHeight; // 0x38
		::UnityEngine::Vector3 grid; // 0x3C
		::UnityEngine::Vector3 gridOffset; // 0x48
		::System::Single snapDistance; // 0x54
		::System::Single snapHeight; // 0x58
		::System::Single snapAngleIntersection; // 0x5C
		::System::Single snapAngleRoad; // 0x60
		::System::Single minAngleIntersection; // 0x64
		::UnityEngine::FAED0374422E783A* distanceRatioAngleCurve; // 0x68
		::B223EC95048EAAE0::FA28FCF9C7DD40ED roadLengthUV; // 0x70
		::System::Single tangentLength; // 0x74
		::System::Single sideLaneTangentLength; // 0x78
		::System::Single intersectionDistance; // 0x7C
		::B223EC95048EAAE0::F9CCA286F8DB0796 connections; // 0x80
		::B223EC95048EAAE0::A3B7A0A0A193FFC3 roadEnd; // 0x84
		::UnityEngine::Vector2 roadLength; // 0x88
		::System::Single minOverlapDistance; // 0x90
		::System::Single maxCurvature; // 0x94
		::UnityEngine::B8AC70DD96553B07 groundLayers; // 0x98
		::UnityEngine::Vector2 heightRange; // 0x9C
		::System::Single elevationStartHeight; // 0xA4
		::System::Single minOverlapHeight; // 0xA8
		::System::Boolean elevatedIntersections; // 0xAC
		::System::Byte _padding1[0x3];
		::System::Single maxSlope; // 0xB0
		::System::Boolean smoothSlope; // 0xB4
		::System::Boolean terrainSettings; // 0xB5
		::System::Byte _padding2[0x2];
		::UnityEngine::Terrain* terrain; // 0xB8
		::System::Boolean removeDetails; // 0xC0
		::System::Boolean removeTrees; // 0xC1
		::System::Boolean levelHeight; // 0xC2
		::System::Byte _padding3[0x1];
		::System::Int32 slopeTextureIndex; // 0xC4
		::System::Single slopeTextureStrength; // 0xC8
		::System::Int32 slopeSmooth; // 0xCC
		::System::Boolean addTrafficComponent; // 0xD0
		::System::Boolean updateWaypoints; // 0xD1
		::System::Byte _padding4[0x2];
		::UnityEngine::Vector2 waypointDistance; // 0xD4
		::B223EC95048EAAE0::F5B6374A612EBA99 waypointGizmos; // 0xDC
		::B223EC95048EAAE0::ECC37879E61B803B waypointGizmosColor; // 0xE0
		::System::Single waypointGizmoSize; // 0xE4
		::System::Boolean waypointConnectionsOnly; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_COMPONENTSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
