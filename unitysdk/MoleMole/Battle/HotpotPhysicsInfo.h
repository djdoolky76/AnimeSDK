#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Random; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class EdgeCollider2D; }

#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ASSUREEDGECOLLIDER_OFFSET UNITYSDK_OFFSET(0x14D9E990)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_CHECKBOUNDSVALID_OFFSET UNITYSDK_OFFSET(0x14D9E950)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0xFFB3820)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_DRAWCOLLISIONEDGE_OFFSET UNITYSDK_OFFSET(0xFFB2EC0)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_DRAWGENERATEDPOINTS_OFFSET UNITYSDK_OFFSET(0xFFB3C20)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GENERATECOLLISIONAREA_OFFSET UNITYSDK_OFFSET(0x14D9EB10)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GENERATEPOINTSINRING_1_OFFSET UNITYSDK_OFFSET(0x14D9EF40)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GENERATEPOINTSINRING_OFFSET UNITYSDK_OFFSET(0x14D9EE80)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GETCIRCLEPOINT_OFFSET UNITYSDK_OFFSET(0xFFB3DE0)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GETFOODAABB_OFFSET UNITYSDK_OFFSET(0xFFB2D60)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GETWORLDRADIUS_OFFSET UNITYSDK_OFFSET(0xFFB3EC0)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ISFOODINCIRCLE_OFFSET UNITYSDK_OFFSET(0x14D9F250)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ISFOODOUTOFCIRCLE_OFFSET UNITYSDK_OFFSET(0xFFB2B80)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ISINBOUND_OFFSET UNITYSDK_OFFSET(0x14D9F1E0)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ISINCIRCLE_OFFSET UNITYSDK_OFFSET(0x14D9F450)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xFFB2E10)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB40A0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HotpotPhysicsInfo_TypeDefinitionIndex = 49857;

	class HotpotPhysicsInfo : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Int32 CollisionSegments; // 0x58
		::System::Byte _padding0[0x4];
		::UnityEngine::EdgeCollider2D* EdgeCollider; // 0x60
		::UnityEngine::CircleCollider2D* Boundary; // 0x68
		::UnityEngine::CircleCollider2D* InnerBoundary; // 0x70
		::System::Int32 randomSeed; // 0x78
		::System::Single foodDistance; // 0x7C
		::System::Single foodSize; // 0x80
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* generatedPoints; // 0x88
		::UnityEngine::CircleCollider2D* Spoon; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO__CTOR_OFFSET))(this);
		}

		::System::Void CheckBoundsValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_CHECKBOUNDSVALID_OFFSET))(this);
		}

		::System::Void AssureEdgeCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ASSUREEDGECOLLIDER_OFFSET))(this);
		}

		::System::Void GenerateCollisionArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GENERATECOLLISIONAREA_OFFSET))(this);
		}

		::System::Void GeneratePointsInRing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GENERATEPOINTSINRING_OFFSET))(this);
		}

		::System::Boolean GeneratePointsInRing_1(::System::Random* r, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>* posValidFunc, ::System::Int32 fetchCount, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& ret)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Random*, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GENERATEPOINTSINRING_1_OFFSET))(this, r, posValidFunc, fetchCount, ret);
		}

		::System::Boolean IsInBound(::UnityEngine::Vector2 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ISINBOUND_OFFSET))(this, pos);
		}

		::System::Boolean IsInCircle(::UnityEngine::CircleCollider2D* circle, ::UnityEngine::Vector2 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::CircleCollider2D*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ISINCIRCLE_OFFSET))(this, circle, pos);
		}

		::System::Boolean IsFoodInCircle(::UnityEngine::CircleCollider2D* circle, ::UnityEngine::Vector2 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::CircleCollider2D*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ISFOODINCIRCLE_OFFSET))(this, circle, pos);
		}

		::System::Boolean IsFoodOutOfCircle(::UnityEngine::CircleCollider2D* circle, ::UnityEngine::Vector2 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::CircleCollider2D*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ISFOODOUTOFCIRCLE_OFFSET))(this, circle, pos);
		}

		::UnityEngine::Bounds GetFoodAABB(::UnityEngine::Vector2 pos)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GETFOODAABB_OFFSET))(this, pos);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void DrawCollisionEdge(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_DRAWCOLLISIONEDGE_OFFSET))(this, color);
		}

		::UnityEngine::Vector2 GetCirclePoint(::UnityEngine::Vector2 center, ::System::Single radius, ::System::Single angle)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GETCIRCLEPOINT_OFFSET))(this, center, radius, angle);
		}

		::System::Void DrawCircle(::UnityEngine::CircleCollider2D* circleCollider, ::UnityEngine::Color gizmosColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CircleCollider2D*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_DRAWCIRCLE_OFFSET))(this, circleCollider, gizmosColor);
		}

		::System::Single GetWorldRadius(::UnityEngine::CircleCollider2D* circleCollider)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_GETWORLDRADIUS_OFFSET))(this, circleCollider);
		}

		::System::Void DrawGeneratedPoints(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO_DRAWGENERATEDPOINTS_OFFSET))(this, color);
		}
	};
}
