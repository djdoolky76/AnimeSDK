#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

#define ALEAKDBNMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x15565640)
#define ALEAKDBNMKC_GET_AREAPOSITION_OFFSET UNITYSDK_OFFSET(0x15565620)
#define ALEAKDBNMKC_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x155655C0)
#define ALEAKDBNMKC_GET_POSE_OFFSET UNITYSDK_OFFSET(0x15565600)
#define ALEAKDBNMKC_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x155655E0)
#define ALEAKDBNMKC_SET_AREAPOSITION_OFFSET UNITYSDK_OFFSET(0x15565630)
#define ALEAKDBNMKC_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x155655D0)
#define ALEAKDBNMKC_SET_POSE_OFFSET UNITYSDK_OFFSET(0x15565610)
#define ALEAKDBNMKC_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x155655F0)

inline static constexpr unsigned int ALEAKDBNMKC_TypeDefinitionIndex = 62991;

	class ALEAKDBNMKC : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeValidAreaType _AreaType_k__BackingField; // 0x10
		::System::UInt32 _Slot_k__BackingField; // 0x14
		::System::UInt32 _AreaPosition_k__BackingField; // 0x18
		::RPG::Client::TrainCakeCatchExhibitController_CatGroundType _Pose_k__BackingField; // 0x1C
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
