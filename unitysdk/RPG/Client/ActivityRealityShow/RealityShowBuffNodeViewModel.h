#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class KAIHLAFFGMC;
class MGFFCMONLJG;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C35A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x1C8C39A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C8C39D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C8C39B0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_ISREACHED_OFFSET UNITYSDK_OFFSET(0x1C8C3A00)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C8C39C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_POSITIONRATIO_OFFSET UNITYSDK_OFFSET(0x1C8C39F0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1C8C3990)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_UPGRADETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C8C39E0)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowBuffNodeViewModel_TypeDefinitionIndex = 84905;

	class RealityShowBuffNodeViewModel : public ::System::Object
	{
	public:
		::System::Func_1<::System::UInt32>* _CurrentBuffLv; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::String* _Desc_k__BackingField; // 0x20
		::System::UInt32 _BuffID_k__BackingField; // 0x28
		::System::Single _PositionRatio_k__BackingField; // 0x2C
		::System::UInt32 _Tier_k__BackingField; // 0x30
		::System::UInt32 _UpgradeThreshold_k__BackingField; // 0x34
		::RPG::Client::TextID _Name_k__BackingField; // 0x38
		::System::Void _ctor(::KAIHLAFFGMC* a1, ::System::Func_1<::System::UInt32>* a2, ::MGFFCMONLJG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KAIHLAFFGMC*, ::System::Func_1<::System::UInt32>*, ::MGFFCMONLJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_Tier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_TIER_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_BUFFID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_UpgradeThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_UPGRADETHRESHOLD_OFFSET))(this);
		}

		::System::Single get_PositionRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_POSITIONRATIO_OFFSET))(this);
		}

		::System::Boolean get_IsReached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBUFFNODEVIEWMODEL_GET_ISREACHED_OFFSET))(this);
		}

	};
}
