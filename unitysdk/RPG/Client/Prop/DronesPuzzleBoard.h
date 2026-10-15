#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAchieveAreaConfig.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
class LBGNELKODEM;
class OCAMFPAJPDH;
class OGEFODDPPOF;
namespace RPG::Client { class MonoDroneAirwallControl; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyGlobalVisionParams; }
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class OverrideCustomDroneFuncBtn; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ALFJOCKJJNM_OFFSET UNITYSDK_OFFSET(0xDC9EB80)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_BDBHCAIIHOA_OFFSET UNITYSDK_OFFSET(0xDC9F1A0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_BNMAPPFJMIB_OFFSET UNITYSDK_OFFSET(0xDC9F3D0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC9F540)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DAGAGAONAMH_OFFSET UNITYSDK_OFFSET(0xDC9CB90)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DCLJCJCENOP_OFFSET UNITYSDK_OFFSET(0xDC9CFC0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC9BFE0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GCKEIPEIPCA_OFFSET UNITYSDK_OFFSET(0xDC9AC90)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GEHAHKOOLNJ_OFFSET UNITYSDK_OFFSET(0xDC9F450)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xDC9F430)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISFORBIDPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xDC9EB70)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISOVERRIDEDRONEFUNCBTN_OFFSET UNITYSDK_OFFSET(0xDC9EF80)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xDC9F440)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GGLOFLPDALA_OFFSET UNITYSDK_OFFSET(0xDC9CB10)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC9A680)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDC9A640)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_JDCIBPBFJPI_OFFSET UNITYSDK_OFFSET(0xDC9B0B0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_JGEOBLFJMKE_OFFSET UNITYSDK_OFFSET(0xDC9ED00)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_JJLIBHAPICC_OFFSET UNITYSDK_OFFSET(0xDC9ED80)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_LBFPCAFLCOH_OFFSET UNITYSDK_OFFSET(0xDC9EBE0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_LBNBHHFKAEF_OFFSET UNITYSDK_OFFSET(0xDC9EFE0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_LMNLHMBBMMD_OFFSET UNITYSDK_OFFSET(0xDC9EC40)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_MNODHADJPPF_OFFSET UNITYSDK_OFFSET(0xDC9C940)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0xDC9D810)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_NOPABKJMHEF_OFFSET UNITYSDK_OFFSET(0xDC9F0E0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_OBKLJKIDDKB_OFFSET UNITYSDK_OFFSET(0xDC9D010)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ONMOVEMENTEND_OFFSET UNITYSDK_OFFSET(0xDC9D6C0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_PBMIDAAGIGN_OFFSET UNITYSDK_OFFSET(0xDC9F060)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_PBNPJICNAKL_OFFSET UNITYSDK_OFFSET(0xDC9C6B0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETDRONESPOSITION_OFFSET UNITYSDK_OFFSET(0xDC9C750)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC9C700)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_SET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xDC9D640)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTCONTROL_OFFSET UNITYSDK_OFFSET(0xDC9B550)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC9B060)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STOPCONTROL_OFFSET UNITYSDK_OFFSET(0xDC9C290)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC9D1B0)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__BUILDACHIEVEMENTAREAS_B__14_0_OFFSET UNITYSDK_OFFSET(0xDC9F760)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xDC9F640)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_1_OFFSET UNITYSDK_OFFSET(0xDC9F6D0)

namespace RPG::Client::Prop
{
	class DronesPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Boolean UseSpeciallyRaycast; // 0x48
		::System::Boolean ShowBackBtn; // 0x49
		::System::Byte _padding0[0x2];
		::System::UInt32 SpecialNPCID; // 0x4C
		::System::Boolean LeavePlayerStubInplace; // 0x50
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* DronesInitAnchor; // 0x58
		::RPG::Client::Prop::DronesPuzzleAreaConfig SafeAreaConfig; // 0x60
		::RPG::Client::Prop::DronesPuzzleAreaConfig MoveAreaConfig; // 0x80
		::System::UInt32 OutMoveAreaQuestID; // 0xA0
		::System::Byte _padding2[0x4];
		::Il2CppArray<::RPG::Client::Prop::DronesPuzzleAchieveAreaConfig>* AchieveAreaConfigs; // 0xA8
		::RPG::GameCore::ModifyGlobalVisionParams* GlobalVisionParams; // 0xB0
		::RPG::GameCore::ModifyGlobalVisionParams* DefaultGlobalVisionParams; // 0xB8
		::System::Single FKFKFEEKEOJ; // 0xC0
		::System::Single HKDAGBONAAE; // 0xC4
		::System::Single BKEECMJHLDH; // 0xC8
		::System::Single GLJPKIPOLMA; // 0xCC
		::System::Single AHGOEDFCODF; // 0xD0
		::System::Single DCIFKDHLOFK; // 0xD4
		::RPG::Client::MonoDroneAirwallControl* AirwallControl; // 0xD8
		::UnityEngine::GameObject* AirwallRoot; // 0xE0
		::UnityEngine::GameObject* AirwallRootPCOnly; // 0xE8
		::RPG::GameCore::GameEntity* PIPIBEFCCHA; // 0xF0
		::System::Single PJJLEJDPNHI; // 0xF8
		::System::Boolean HDJOGGDMCIO; // 0xFC
		::System::Boolean FFFGBNENMDH; // 0xFD
		::System::Byte _padding3[0x2];
		::OCAMFPAJPDH* LACJAACNDCC; // 0x100
		::OCAMFPAJPDH* KNHDDFPJIJH; // 0x108
		::System::Collections::Generic::List_1<::OGEFODDPPOF*>* IFHPOLAPFCD; // 0x110
		::System::Single JOAAJHBNBPP; // 0x118
		::System::Int32 KMPIAHHLBCD; // 0x11C
		::System::Int32 PIGBBDEPCCG; // 0x120
		::System::Single PKKHOGEDENI; // 0x124
		::System::Boolean PNJHDMHAEEE; // 0x128
		::System::Byte _padding4[0x7];
		::LBGNELKODEM* KOCAHLPCIDB; // 0x130
		::System::Single MIAPJCGFOGM; // 0x138
		::System::Single MEHHMKFBLIE; // 0x13C
		::UnityEngine::LineRenderer* PCHLBHOKHGB; // 0x140
		::Il2CppArray<::System::Boolean>* CDHFGIOJHKI; // 0x148
		::RPG::GameCore::NotifyShowFuncBtnParam* OLDAHDINLCN; // 0x150
		::System::UInt32 OHGCKDKMNFK; // 0x158
		::System::Byte _padding5[0x4];
		::RPG::GameCore::OverrideCustomDroneFuncBtn* OLAMJJFPPBP; // 0x160
		// static const ::System::String* AUDIO_EVENT_FLYING_UP; // 0x0
		// static const ::System::String* AUDIO_EVENT_FLYING_DOWN; // 0x0
		// static const ::System::Object AUDIO_EVENT_TRIGGER_DELTA_TIME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void StartControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STARTCONTROL_OFFSET))(this);
		}

		::System::Void StopControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_STOPCONTROL_OFFSET))(this);
		}

		::System::Void ResetDronesPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_RESETDRONESPOSITION_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void OnMovementEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ONMOVEMENTEND_OFFSET))(this);
		}

		::System::Void MNODHADJPPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_MNODHADJPPF_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void LMNLHMBBMMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_LMNLHMBBMMD_OFFSET))(this);
		}

		::System::Void GCKEIPEIPCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GCKEIPEIPCA_OFFSET))(this);
		}

		::System::Void JDCIBPBFJPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_JDCIBPBFJPI_OFFSET))(this);
		}

		::System::Void JGEOBLFJMKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_JGEOBLFJMKE_OFFSET))(this);
		}

		::System::Void GGLOFLPDALA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GGLOFLPDALA_OFFSET))(this);
		}

		::System::Void DCLJCJCENOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DCLJCJCENOP_OFFSET))(this);
		}

		::System::Void ALFJOCKJJNM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_ALFJOCKJJNM_OFFSET))(this, a1);
		}

		::System::Void LBFPCAFLCOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_LBFPCAFLCOH_OFFSET))(this, a1);
		}

		::System::Void JJLIBHAPICC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_JJLIBHAPICC_OFFSET))(this, a1);
		}

		::System::Void LBNBHHFKAEF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_LBNBHHFKAEF_OFFSET))(this, a1);
		}

		::System::Void PBMIDAAGIGN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_PBMIDAAGIGN_OFFSET))(this, a1);
		}

		::System::Void NOPABKJMHEF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_NOPABKJMHEF_OFFSET))(this, a1);
		}

		::System::Void BDBHCAIIHOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_BDBHCAIIHOA_OFFSET))(this, a1);
		}

		::System::Void DAGAGAONAMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_DAGAGAONAMH_OFFSET))(this, a1);
		}

		::System::Void OBKLJKIDDKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_OBKLJKIDDKB_OFFSET))(this);
		}

		::System::Void BNMAPPFJMIB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_BNMAPPFJMIB_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsForbidPlayerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISFORBIDPLAYERINPUT_OFFSET))(this);
		}

		::System::Boolean get_NotifyAdventureFuncBtnEnableEffectShowState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET))(this);
		}

		::System::Void set_NotifyAdventureFuncBtnEnableEffectShowState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_SET_NOTIFYADVENTUREFUNCBTNENABLEEFFECTSHOWSTATE_OFFSET))(this, a1);
		}

		::System::Void GEHAHKOOLNJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GEHAHKOOLNJ_OFFSET))(this, a1);
		}

		::System::Void PBNPJICNAKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_PBNPJICNAKL_OFFSET))(this);
		}

		::System::Boolean get_IsOverrideDroneFuncBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD_GET_ISOVERRIDEDRONEFUNCBTN_OFFSET))(this);
		}

		::System::Void _InitPuzzle_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_0_OFFSET))(this);
		}

		::System::Void _InitPuzzle_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD__INITPUZZLE_B__2_1_OFFSET))(this);
		}

		::System::Void _BuildAchievementAreas_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD__BUILDACHIEVEMENTAREAS_B__14_0_OFFSET))(this);
		}

	};
}
