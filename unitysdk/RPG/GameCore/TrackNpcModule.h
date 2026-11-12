#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
#include "unitysdk/System/Object.h"
class BNJIBLOMNEL;
class EMKEMMOKPAN;
class IIFOBBHCPDK;
class MHEPLMICGAO;
class OENKFHFLGKI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrackNpcZoneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRACKNPCMODULE_ADDPERCEIVETRIGGER_OFFSET UNITYSDK_OFFSET(0xF2B1290)
#define RPG_GAMECORE_TRACKNPCMODULE_CHECKENTITYONSCREEN_OFFSET UNITYSDK_OFFSET(0xF2AF370)
#define RPG_GAMECORE_TRACKNPCMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xF2B15B0)
#define RPG_GAMECORE_TRACKNPCMODULE_DETECT_OFFSET UNITYSDK_OFFSET(0xF2AE730)
#define RPG_GAMECORE_TRACKNPCMODULE_DISABLE_OFFSET UNITYSDK_OFFSET(0xF2B0B60)
#define RPG_GAMECORE_TRACKNPCMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2AE6E0)
#define RPG_GAMECORE_TRACKNPCMODULE_ENABLE_OFFSET UNITYSDK_OFFSET(0xF2B0B20)
#define RPG_GAMECORE_TRACKNPCMODULE_GETDETECTVISIONZONETAG_OFFSET UNITYSDK_OFFSET(0xF2B1300)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ALERTVALUEMOD_OFFSET UNITYSDK_OFFSET(0xF2B13B0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_CURRENTALERTVALUE_OFFSET UNITYSDK_OFFSET(0xF2B1450)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xF2B13D0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISLOSINGTARGET_OFFSET UNITYSDK_OFFSET(0xF2B1350)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISPERCEIVED_OFFSET UNITYSDK_OFFSET(0xF2B1560)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_LOSTTARGETTIME_OFFSET UNITYSDK_OFFSET(0xF2B1430)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_MAXALERTVALUE_OFFSET UNITYSDK_OFFSET(0xF2B1510)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_NPCINCAMERA_OFFSET UNITYSDK_OFFSET(0xF2B13F0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PERCEIVEVALUEMOD_OFFSET UNITYSDK_OFFSET(0xF2B13A0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERHIDE_OFFSET UNITYSDK_OFFSET(0xF2B13E0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOTION_OFFSET UNITYSDK_OFFSET(0xF2B1420)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOVING_OFFSET UNITYSDK_OFFSET(0xF2B1410)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_SEEPLAYER_OFFSET UNITYSDK_OFFSET(0xF2B1400)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_TRACKVALUEMOD_OFFSET UNITYSDK_OFFSET(0xF2B13C0)
#define RPG_GAMECORE_TRACKNPCMODULE_INITPARAMS_OFFSET UNITYSDK_OFFSET(0xF2AE180)
#define RPG_GAMECORE_TRACKNPCMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0xF2B03B0)
#define RPG_GAMECORE_TRACKNPCMODULE_ONRESET_OFFSET UNITYSDK_OFFSET(0xF2B0810)
#define RPG_GAMECORE_TRACKNPCMODULE_ONSTART_OFFSET UNITYSDK_OFFSET(0xF2B0530)
#define RPG_GAMECORE_TRACKNPCMODULE_REPORTALERTDATA_OFFSET UNITYSDK_OFFSET(0xF2B0F60)
#define RPG_GAMECORE_TRACKNPCMODULE_SETPLAYERHIDE_OFFSET UNITYSDK_OFFSET(0xF2B0BA0)
#define RPG_GAMECORE_TRACKNPCMODULE_SET_LOSTTARGETTIME_OFFSET UNITYSDK_OFFSET(0xF2B1440)
#define RPG_GAMECORE_TRACKNPCMODULE_TICK_OFFSET UNITYSDK_OFFSET(0xF2AE920)
#define RPG_GAMECORE_TRACKNPCMODULE__ONPERCEIVEVALUEREACHMAX_OFFSET UNITYSDK_OFFSET(0xF2B1240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcModule_TypeDefinitionIndex = 54713;

	class TrackNpcModule : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Target; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::OENKFHFLGKI*>* _Visions; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AlertData; // 0x20
		::Il2CppArray<::System::String*>* _CheckVisionPoints; // 0x28
		::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* _ZoneConfigs; // 0x30
		::IIFOBBHCPDK* _PerceiveValueMod; // 0x38
		::BNJIBLOMNEL* _AlertValueMod; // 0x40
		::MHEPLMICGAO* _LastDetectionSingleResult; // 0x48
		::EMKEMMOKPAN* _TrackValueMod; // 0x50
		::OENKFHFLGKI* _LastDetectVision; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _HideData; // 0x60
		::System::Boolean _PlayerMoving; // 0x68
		::System::Boolean _PlayerHide; // 0x69
		::System::Boolean _Enable; // 0x6A
		::System::Boolean _NpcInCamera; // 0x6B
		::RPG::GameCore::CharacterMotionFlag _LastMoveMotion; // 0x6C
		::System::UInt32 ControllerGroupId; // 0x70
		::System::Single _AlertProtectDuration; // 0x74
		::System::Single _LostTargetTime_k__BackingField; // 0x78
		::System::Int32 _StartTime; // 0x7C
		::System::Boolean _SeePlayer; // 0x80
		::System::Byte _padding0[0x3];
		::System::Single _AlertProtectTimer; // 0x84
		::System::Single _PerceiveTrigger; // 0x88
		::RPG::GameCore::CharacterMotionFlag _PlayerMotion; // 0x8C
		::System::Single _CheckVisionRadius; // 0x90
		// static const ::System::String* GameKeyHide; // 0x0
		// static const ::System::String* GameKeyAlert; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_CTOR_OFFSET))(this);
		}

		::System::Void InitParams(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::System::String*>* a5, ::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* a6, ::Il2CppArray<::System::String*>* a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>*, ::Il2CppArray<::System::String*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_INITPARAMS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Detect(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DETECT_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONINIT_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONSTART_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONRESET_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DISABLE_OFFSET))(this);
		}

		::System::Void SetPlayerHide(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_SETPLAYERHIDE_OFFSET))(this, a1, a2);
		}

		::System::Void ReportAlertData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_REPORTALERTDATA_OFFSET))(this, a1);
		}

		::System::Void _OnPerceiveValueReachMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE__ONPERCEIVEVALUEREACHMAX_OFFSET))(this);
		}

		::System::Void AddPerceiveTrigger(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ADDPERCEIVETRIGGER_OFFSET))(this, a1);
		}

		static ::System::Boolean CheckEntityOnScreen(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_CHECKENTITYONSCREEN_OFFSET))(a1, a2, a3);
		}

		::RPG::GameCore::VisionZoneTag GetDetectVisionZoneTag()
		{
			return ((::RPG::GameCore::VisionZoneTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GETDETECTVISIONZONETAG_OFFSET))(this);
		}

		::System::Boolean get_IsLosingTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISLOSINGTARGET_OFFSET))(this);
		}

		::IIFOBBHCPDK* get_PerceiveValueMod()
		{
			return ((::IIFOBBHCPDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PERCEIVEVALUEMOD_OFFSET))(this);
		}

		::BNJIBLOMNEL* get_AlertValueMod()
		{
			return ((::BNJIBLOMNEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ALERTVALUEMOD_OFFSET))(this);
		}

		::EMKEMMOKPAN* get_TrackValueMod()
		{
			return ((::EMKEMMOKPAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_TRACKVALUEMOD_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISENABLE_OFFSET))(this);
		}

		::System::Boolean get_PlayerHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERHIDE_OFFSET))(this);
		}

		::System::Boolean get_NpcInCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_NPCINCAMERA_OFFSET))(this);
		}

		::System::Boolean get_SeePlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_SEEPLAYER_OFFSET))(this);
		}

		::System::Boolean get_PlayerMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOVING_OFFSET))(this);
		}

		::RPG::GameCore::CharacterMotionFlag get_PlayerMotion()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOTION_OFFSET))(this);
		}

		::System::Single get_LostTargetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_LOSTTARGETTIME_OFFSET))(this);
		}

		::System::Void set_LostTargetTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_SET_LOSTTARGETTIME_OFFSET))(this, a1);
		}

		::System::Single get_CurrentAlertValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_CURRENTALERTVALUE_OFFSET))(this);
		}

		::System::Single get_MaxAlertValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_MAXALERTVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPerceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISPERCEIVED_OFFSET))(this);
		}

	};
}
