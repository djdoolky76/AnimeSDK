#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMPFHOMMBH;

#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0xCD81560)
#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCD82E70)
#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xCD84910)
#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCD84930)
#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xCD84950)
#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xCD84920)
#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCD84940)
#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xCD84960)
#define RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xCD84970)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotItemProgress_TypeDefinitionIndex = 62922;

	class ActivityHotItemProgress : public ::System::Object
	{
	public:
		::System::UInt32 _Target_k__BackingField; // 0x10
		::System::UInt32 _Progress_k__BackingField; // 0x14
		::System::UInt32 _ItemID_k__BackingField; // 0x18
		::System::Void _ctor(::BOMPFHOMMBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMPFHOMMBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Target()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void UpdateProgress(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTITEMPROGRESS_UPDATEPROGRESS_OFFSET))(this, a1, a2);
		}

	};
}
