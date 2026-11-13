#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class MJCMGOEMKCC;
namespace RPG::Client::ActivityRealityShow { class RealityShowBuffNodeViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAE500)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_CANRESET_OFFSET UNITYSDK_OFFSET(0x1DCA9490)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_CURRENTBUFFLV_OFFSET UNITYSDK_OFFSET(0x1DCAECB0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1DCAEDC0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_NODES_OFFSET UNITYSDK_OFFSET(0x1DCAECA0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1DCAED00)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_STRATEGYDESC_OFFSET UNITYSDK_OFFSET(0x1DCAEC30)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1DCAEE10)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowFirstStageViewModel_TypeDefinitionIndex = 84904;

	class RealityShowFirstStageViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::MJCMGOEMKCC* _Challenge; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>* _Nodes_k__BackingField; // 0x28
		::System::Void _ctor(::MJCMGOEMKCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJCMGOEMKCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StrategyDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_STRATEGYDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>* get_Nodes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityRealityShow::RealityShowBuffNodeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_NODES_OFFSET))(this);
		}

		::System::UInt32 get_CurrentBuffLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_CURRENTBUFFLV_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_PROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_CanReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL_GET_CANRESET_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0_0()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFIRSTSTAGEVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}

	};
}
