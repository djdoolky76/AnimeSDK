#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

#define ALEAKDBNMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x197BDF80)
#define ALEAKDBNMKC_GET_AREAPOSITION_OFFSET UNITYSDK_OFFSET(0x197BDF60)
#define ALEAKDBNMKC_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x197BDF00)
#define ALEAKDBNMKC_GET_POSE_OFFSET UNITYSDK_OFFSET(0x197BDF40)
#define ALEAKDBNMKC_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x197BDF20)
#define ALEAKDBNMKC_SET_AREAPOSITION_OFFSET UNITYSDK_OFFSET(0x197BDF70)
#define ALEAKDBNMKC_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x197BDF10)
#define ALEAKDBNMKC_SET_POSE_OFFSET UNITYSDK_OFFSET(0x197BDF50)
#define ALEAKDBNMKC_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x197BDF30)

inline static constexpr unsigned int ALEAKDBNMKC_TypeDefinitionIndex = 64429;

	class ALEAKDBNMKC : public ::System::Object
	{
	public:
		::System::UInt32 _Slot_k__BackingField; // 0x10
		::RPG::Client::TrainCakeCatchExhibitController_CatGroundType _Pose_k__BackingField; // 0x14
		::RPG::GameCore::CakeValidAreaType _AreaType_k__BackingField; // 0x18
		::System::UInt32 _AreaPosition_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CakeValidAreaType get_AreaType()
		{
			return ((::RPG::GameCore::CakeValidAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_GET_AREATYPE_OFFSET))(this);
		}

		::System::Void set_AreaType(::RPG::GameCore::CakeValidAreaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_SET_AREATYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Slot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_SET_SLOT_OFFSET))(this, a1);
		}

		::RPG::Client::TrainCakeCatchExhibitController_CatGroundType get_Pose()
		{
			return ((::RPG::Client::TrainCakeCatchExhibitController_CatGroundType(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_GET_POSE_OFFSET))(this);
		}

		::System::Void set_Pose(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_SET_POSE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaPosition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_GET_AREAPOSITION_OFFSET))(this);
		}

		::System::Void set_AreaPosition(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALEAKDBNMKC_SET_AREAPOSITION_OFFSET))(this, a1);
		}

	};
