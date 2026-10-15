#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
class BLIHJELFEHM_TransitionShotData;
namespace RPG::Client { class BattleToMazeShotConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLETRANSITIONMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC85D0C0)
#define RPG_CLIENT_BATTLETRANSITIONMODULECONFIG_JIGLNEDJDCC_OFFSET UNITYSDK_OFFSET(0xC85D070)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleTransitionModuleConfig_TypeDefinitionIndex = 69668;

	class BattleTransitionModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Boolean ForbidMazeToBattleTransition; // 0x18
		::System::Boolean ForbidBattleToMazeTransition; // 0x19
		::System::Byte _padding0[0x6];
		::BLIHJELFEHM_TransitionShotData* UltraLongShot; // 0x20
		::BLIHJELFEHM_TransitionShotData* LongShot; // 0x28
		::BLIHJELFEHM_TransitionShotData* CloseShot; // 0x30
		::BLIHJELFEHM_TransitionShotData* PlayerBeHitShot; // 0x38
		::BLIHJELFEHM_TransitionShotData* PlayerBeHitMiddleShot; // 0x40
		::BLIHJELFEHM_TransitionShotData* PlayerBeHitLongShot; // 0x48
		::System::Single FrameBlendDelay; // 0x50
		::System::Single FrameBlendWeightStart; // 0x54
		::System::Single FrameBlendDuration; // 0x58
		::System::Single MazeToBattleBlendTime; // 0x5C
		::System::String* MazeToBattleBlendCurveName; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::BattleToMazeShotConfig*>* BattleToMazeShotList; // 0x68
		::System::Single BlendToFreelookTime; // 0x70
		::System::Byte _padding1[0x4];
		::System::String* BlendToFreelookCurve; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETRANSITIONMODULECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType JIGLNEDJDCC()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETRANSITIONMODULECONFIG_JIGLNEDJDCC_OFFSET))(this);
		}

	};
}
