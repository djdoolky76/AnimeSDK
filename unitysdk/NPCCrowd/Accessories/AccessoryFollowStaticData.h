#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/AccessoryFollowFlags.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x498E10)
#define NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_FOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0x498E60)
#define NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_FOLLOWSCALE_OFFSET UNITYSDK_OFFSET(0x498EB0)
#define NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_OVERRIDESLOTOFFSET_OFFSET UNITYSDK_OFFSET(0x498F50)
#define NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_USEROOTOFFSET_OFFSET UNITYSDK_OFFSET(0x498F00)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int AccessoryFollowStaticData_TypeDefinitionIndex = 40778;

	struct alignas(4) AccessoryFollowStaticData
	{
		::UnityEngine::Vector3 SlotOffsetPosition; // 0x10
		::UnityEngine::Quaternion SlotOffsetRotation; // 0x1C
		::UnityEngine::Vector3 SlotOffsetScale; // 0x2C
		::UnityEngine::Vector3 RootOffsetPosition; // 0x38
		::UnityEngine::Quaternion RootOffsetRotation; // 0x44
		::NPCCrowd::Accessories::AccessoryFollowFlags Flags; // 0x54

		::System::Boolean get_FollowPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_FOLLOWPOSITION_OFFSET))(this);
		}

		::System::Boolean get_FollowRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_FOLLOWROTATION_OFFSET))(this);
		}

		::System::Boolean get_FollowScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_FOLLOWSCALE_OFFSET))(this);
		}

		::System::Boolean get_UseRootOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_USEROOTOFFSET_OFFSET))(this);
		}

		::System::Boolean get_OverrideSlotOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_ACCESSORYFOLLOWSTATICDATA_GET_OVERRIDESLOTOFFSET_OFFSET))(this);
		}
	};
}
