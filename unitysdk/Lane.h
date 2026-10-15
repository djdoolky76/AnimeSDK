#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LaneSpecialType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CarFlowIntersectionRule;
class CarFlowRoad;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LANE_CBHCBKNDPAM_OFFSET UNITYSDK_OFFSET(0xB836D60)
#define LANE_CTOR_OFFSET UNITYSDK_OFFSET(0xB837290)
#define LANE_DCCOFIEJIAA_OFFSET UNITYSDK_OFFSET(0xB837010)
#define LANE_FDFLDCEFDOE_OFFSET UNITYSDK_OFFSET(0xB836B90)

inline static constexpr unsigned int Lane_TypeDefinitionIndex = 47080;

	class Lane : public ::System::Object
	{
	public:
		::System::Single LaneWidth; // 0x10
		::System::Single PositionOffset; // 0x14
		::System::Boolean IsSameWay; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single Weight; // 0x1C
		::LaneSpecialType LaneType; // 0x20
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::CarFlowIntersectionRule*>* Rules; // 0x28
		::CarFlowRoad* ParentRoad; // 0x30
		::System::Single SpawnTimer; // 0x38
		::System::Single NextSpawnInterval; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 FDFLDCEFDOE(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LANE_FDFLDCEFDOE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> CBHCBKNDPAM(::System::Single a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LANE_CBHCBKNDPAM_OFFSET))(this, a1);
		}

		::System::Int32 DCCOFIEJIAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LANE_DCCOFIEJIAA_OFFSET))(this);
		}

	};
