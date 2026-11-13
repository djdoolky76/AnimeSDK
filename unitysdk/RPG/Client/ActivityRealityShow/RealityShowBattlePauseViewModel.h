#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class MGFFCMONLJG;
namespace RPG::Client::ActivityRealityShow { class RealityShowBuffNodeViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C2DD0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_BUFFNODES_OFFSET UNITYSDK_OFFSET(0x1C8C3890)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_CARRIEDBUFFS_OFFSET UNITYSDK_OFFSET(0x1C8C38A0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0x1C8C37D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_CURRENTBUFFLV_OFFSET UNITYSDK_OFFSET(0x1C8C38B0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_ISFIRSTSTAGE_OFFSET UNITYSDK_OFFSET(0x1C8C37C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_PROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x1C8C38D0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_SHIELDBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C8C38C0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_STRATEGYDESC_OFFSET UNITYSDK_OFFSET(0x1C8C3830)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C8C3980)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowBattlePauseViewModel_TypeDefinitionIndex = 84890;

	class RealityShowBattlePauseViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::MGFFCMONLJG* _Config; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>* _CarriedBuffs_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>* _BuffNodes_k__BackingField; // 0x30
		::System::Boolean _IsFirstStage_k__BackingField; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 _ShieldBreakCount_k__BackingField; // 0x3C
		::System::UInt32 _CurrentBuffLv_k__BackingField; // 0x40
		::System::Void _ctor(::MGFFCMONLJG* a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MGFFCMONLJG*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsFirstStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_ISFIRSTSTAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_CHALLENGENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_StrategyDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_STRATEGYDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>* get_BuffNodes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_BUFFNODES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>* get_CarriedBuffs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_CARRIEDBUFFS_OFFSET))(this);
		}

		::System::UInt32 get_CurrentBuffLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_CURRENTBUFFLV_OFFSET))(this);
		}

		::System::UInt32 get_ShieldBreakCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_SHIELDBREAKCOUNT_OFFSET))(this);
		}

		::System::Single get_ProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL_GET_PROGRESSRATIO_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0_0()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWBATTLEPAUSEVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}

	};
}
