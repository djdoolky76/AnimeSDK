#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityRealityShow/RealityShowMedalTier.h"
#include "unitysdk/System/Object.h"
class MJCMGOEMKCC;
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB4B40)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1DCB4C00)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_ISACHIEVED_OFFSET UNITYSDK_OFFSET(0x1DCB4C20)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DCB4C10)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_REQUIREDBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCB4BF0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1DCB4BE0)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowMedalItemViewModel_TypeDefinitionIndex = 84909;

	class RealityShowMedalItemViewModel : public ::System::Object
	{
	public:
		::MJCMGOEMKCC* _Challenge; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::Boolean _IsVisible_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 _Tier_k__BackingField; // 0x24
		::System::UInt32 _RequiredBreakCount_k__BackingField; // 0x28
		::System::Void _ctor(::MJCMGOEMKCC* a1, ::RPG::Client::ActivityRealityShow::RealityShowMedalTier a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MJCMGOEMKCC*, ::RPG::Client::ActivityRealityShow::RealityShowMedalTier, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_Tier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_TIER_OFFSET))(this);
		}

		::System::UInt32 get_RequiredBreakCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_REQUIREDBREAKCOUNT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsAchieved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWMEDALITEMVIEWMODEL_GET_ISACHIEVED_OFFSET))(this);
		}

	};
}
