#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelSceneItemType.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
class NDNNILEFPHG;
namespace RPG::GameCore { class FiveDimApplyPlayerInteractAction; }
namespace RPG::GameCore { class FiveDimAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimClearPlayerVelocityAction; }
namespace RPG::GameCore { class FiveDimClientFinishMissionAction; }
namespace RPG::GameCore { class FiveDimFireAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimFireEffectAction; }
namespace RPG::GameCore { class FiveDimKillAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimMutePlayerInputAction; }
namespace RPG::GameCore { class FiveDimPlayUsePropAnimAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimResetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByRawLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamEventAction; }
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetColliderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetEntityVisibleAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInteractEnableAction; }
namespace RPG::GameCore { class FiveDimSetRenderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetRenderVisibleNeverDitherAction; }
namespace RPG::GameCore { class FiveDimStopBubbleTalkAction; }
namespace RPG::GameCore { class LittleGameBaseEventAction; }

#define GDDNDJNMONC_AHJPPNAIINN_OFFSET UNITYSDK_OFFSET(0x15997180)
#define GDDNDJNMONC_ANNJCKNCEDI_OFFSET UNITYSDK_OFFSET(0x15997250)
#define GDDNDJNMONC_CTOR_OFFSET UNITYSDK_OFFSET(0x15996500)
#define GDDNDJNMONC__DISPOSE_OFFSET UNITYSDK_OFFSET(0x15996740)
#define GDDNDJNMONC__DOACTION_10_OFFSET UNITYSDK_OFFSET(0x15998D70)
#define GDDNDJNMONC__DOACTION_11_OFFSET UNITYSDK_OFFSET(0x15998E10)
#define GDDNDJNMONC__DOACTION_12_OFFSET UNITYSDK_OFFSET(0x15998FC0)
#define GDDNDJNMONC__DOACTION_13_OFFSET UNITYSDK_OFFSET(0x15999070)
#define GDDNDJNMONC__DOACTION_14_OFFSET UNITYSDK_OFFSET(0x15999260)
#define GDDNDJNMONC__DOACTION_15_OFFSET UNITYSDK_OFFSET(0x15999400)
#define GDDNDJNMONC__DOACTION_16_OFFSET UNITYSDK_OFFSET(0x159994C0)
#define GDDNDJNMONC__DOACTION_17_OFFSET UNITYSDK_OFFSET(0x15999540)
#define GDDNDJNMONC__DOACTION_18_OFFSET UNITYSDK_OFFSET(0x15999880)
#define GDDNDJNMONC__DOACTION_19_OFFSET UNITYSDK_OFFSET(0x15999AA0)
#define GDDNDJNMONC__DOACTION_1_OFFSET UNITYSDK_OFFSET(0x159973C0)
#define GDDNDJNMONC__DOACTION_20_OFFSET UNITYSDK_OFFSET(0x15999C60)
#define GDDNDJNMONC__DOACTION_2_OFFSET UNITYSDK_OFFSET(0x15997BE0)
#define GDDNDJNMONC__DOACTION_3_OFFSET UNITYSDK_OFFSET(0x15997ED0)
#define GDDNDJNMONC__DOACTION_4_OFFSET UNITYSDK_OFFSET(0x15998210)
#define GDDNDJNMONC__DOACTION_5_OFFSET UNITYSDK_OFFSET(0x159984A0)
#define GDDNDJNMONC__DOACTION_6_OFFSET UNITYSDK_OFFSET(0x159986B0)
#define GDDNDJNMONC__DOACTION_7_OFFSET UNITYSDK_OFFSET(0x15998840)
#define GDDNDJNMONC__DOACTION_8_OFFSET UNITYSDK_OFFSET(0x159989D0)
#define GDDNDJNMONC__DOACTION_9_OFFSET UNITYSDK_OFFSET(0x15998AA0)
#define GDDNDJNMONC__DOACTION_OFFSET UNITYSDK_OFFSET(0x15997330)
#define GDDNDJNMONC__INIT_OFFSET UNITYSDK_OFFSET(0x159965E0)
#define GDDNDJNMONC__SOLVESUBCLASSACTION_OFFSET UNITYSDK_OFFSET(0x15996790)
#define GDDNDJNMONC___SOLVESUBCLASSACTION_B__3_0_OFFSET UNITYSDK_OFFSET(0x15999D80)

inline static constexpr unsigned int GDDNDJNMONC_TypeDefinitionIndex = 76703;

	class GDDNDJNMONC
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x68
		::BABNOKHOBCF* FKINCGODJEP; // 0x70
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + GDDNDJNMONC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDNDJNMONC__INIT_OFFSET))(this);
		}

		::System::Void _Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DISPOSE_OFFSET))(this);
		}

		::System::Boolean _SolveSubClassAction(::INMMPMDELKE* a1, ::RPG::GameCore::LittleGameBaseEventAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::LittleGameBaseEventAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__SOLVESUBCLASSACTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimSetAnimParamEventAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimSetAnimParamEventAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_1(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_1_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_2(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimFireEffectAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_3(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_3_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_4(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_4_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_5(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_5_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_6(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_6_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_7(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_7_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_8(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_8_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_9(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_10(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_10_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_11(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_11_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_12(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_12_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_13(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_13_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_14(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_14_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_15(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_15_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_16(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_16_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_17(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_17_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_18(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_18_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_19(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_19_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_20(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + GDDNDJNMONC__DOACTION_20_OFFSET))(this, a1, a2);
		}

		::System::Void AHJPPNAIINN(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDDNDJNMONC_AHJPPNAIINN_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean ANNJCKNCEDI(::RPG::GameCore::FourRotateVoxelSceneItemType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FourRotateVoxelSceneItemType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType))((::PBYTE)hIl2Cpp + GDDNDJNMONC_ANNJCKNCEDI_OFFSET))(a1, a2);
		}

		::System::Void __SolveSubClassAction_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDNDJNMONC___SOLVESUBCLASSACTION_B__3_0_OFFSET))(this);
		}

	};
