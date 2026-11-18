#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DirectionStringConfigGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x19B190D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x19B191A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayerMove_TypeDefinitionIndex = 47874;

	class ConfigHollowPlayerMove : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GlobalFindPathIntervalDic; // 0x10
		::MoleMole::Config::DirectionStringConfigGroup MoveFailEffectKeyGroup; // 0x18
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroupNoMove; // 0x38
		::System::String* MoveFailStrechKey; // 0x58
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroup; // 0x60
		::System::Int32 MoveFailAudioId; // 0x80
		::System::Single leavingAnimInterval; // 0x84
		::System::Single pushBoxClickProtectedTimeFirst; // 0x88
		::System::Single clickProtectedTimeFirst; // 0x8C
		::System::Single pushBoxClickProtectedTime; // 0x90
		::System::Int32 MoveFailNoMoveAudioId; // 0x94
		::System::Boolean StepPathLenCheckToggle; // 0x98
		::System::Boolean AllowUnstableGlobalConitinueMove; // 0x99
		::System::Boolean MovePrePerformance; // 0x9A
		::System::Boolean PlayerMoveUseCenterCamera; // 0x9B
		::System::Single clickProtectedTime; // 0x9C
		::UnityEngine::Vector4 CancelLocalFollowZone; // 0xA0
		::System::Boolean FinishNeedSync; // 0xB0
		::System::Boolean AutoCancelLocalFollowMobile; // 0xB1
		::System::Boolean AutoCancelLocalFollowConsole; // 0xB2
		::System::Boolean MoveV2; // 0xB3
		::System::Boolean AllowPathTagGlobalConitinueMove; // 0xB4
		::System::Boolean AutoCancelLocalFollowMobileConsole; // 0xB5
		::System::Boolean AutoCancelLocalFollowPC; // 0xB6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoCancelLocalFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET))(this);
		}

		::System::Void set_AutoCancelLocalFollow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET))(this, value);
		}
	};
}
