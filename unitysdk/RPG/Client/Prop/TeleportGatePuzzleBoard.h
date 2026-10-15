#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateCameraMode.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateLinkCurveInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateRelateInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class EKFMIDBJDIA;
class JKFILIIMABA;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Prop { class PuzzleCameraController; }
namespace RPG::Client::Prop { class TeleportGate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ADBGAIBGILB_OFFSET UNITYSDK_OFFSET(0xDDC6530)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_AKGHJCBGIMO_OFFSET UNITYSDK_OFFSET(0xDDC4E20)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_CCHJLAKJPHL_OFFSET UNITYSDK_OFFSET(0xDDC4690)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDC6DF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC6BF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DCOPMNGPGOG_OFFSET UNITYSDK_OFFSET(0xDDC3240)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DEPKCLDMOLO_OFFSET UNITYSDK_OFFSET(0xDDC51E0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xDDC49A0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDC4120)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DPLAMPLOMKA_OFFSET UNITYSDK_OFFSET(0xDDC52C0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ENABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xDDC5230)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_EXITTELEPORTCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xDDBD5B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_FLBLDGJBBPP_OFFSET UNITYSDK_OFFSET(0xDDC4A90)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GEICILHLHNP_OFFSET UNITYSDK_OFFSET(0xDDC32B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTENDPOINT_OFFSET UNITYSDK_OFFSET(0xDDC18C0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTSBYSRCANDTARGET_OFFSET UNITYSDK_OFFSET(0xDDC4790)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTS_OFFSET UNITYSDK_OFFSET(0xDDBEDF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GOFDHDBHGKD_OFFSET UNITYSDK_OFFSET(0xDDC5490)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0xDDC5F60)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ILGHANPJJKG_OFFSET UNITYSDK_OFFSET(0xDDC4FD0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_IMEGKJEPMED_OFFSET UNITYSDK_OFFSET(0xDDC3D50)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDC1BE0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_JCHLKAHJIGH_OFFSET UNITYSDK_OFFSET(0xDDC1D00)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_KBGABJHDOEI_OFFSET UNITYSDK_OFFSET(0xDDC5990)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_KEBBPLFKAMA_OFFSET UNITYSDK_OFFSET(0xDDC5430)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_KLJPFNOOMKN_OFFSET UNITYSDK_OFFSET(0xDDC4040)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_LOAAIBPBAOC_OFFSET UNITYSDK_OFFSET(0xDDC3000)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_MFGNHNKNMNL_OFFSET UNITYSDK_OFFSET(0xDDC3B50)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_NGFACNIMMOO_OFFSET UNITYSDK_OFFSET(0xDDC1DE0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_NPCGFBJPFDF_OFFSET UNITYSDK_OFFSET(0xDDC2F80)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OFKDGHANJOG_OFFSET UNITYSDK_OFFSET(0xDDC6300)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OGLOAOPJANC_OFFSET UNITYSDK_OFFSET(0xDDC3A10)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OHAMFNNKMMC_OFFSET UNITYSDK_OFFSET(0xDDC6270)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OJKMNNHDFAH_OFFSET UNITYSDK_OFFSET(0xDDC5190)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xDDBF5A0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xDDBF6A0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONGATESTATECHANGE_OFFSET UNITYSDK_OFFSET(0xDDBE250)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERENDMOVE_OFFSET UNITYSDK_OFFSET(0xDDBF420)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERSTARTMOVE_OFFSET UNITYSDK_OFFSET(0xDDC1930)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONROTATEEND_OFFSET UNITYSDK_OFFSET(0xDDBFD20)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONSETACTIVE_OFFSET UNITYSDK_OFFSET(0xDDC33B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OOMFEOAKMPK_OFFSET UNITYSDK_OFFSET(0xDDC3A00)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_PJPIKIDHMMJ_OFFSET UNITYSDK_OFFSET(0xDDC5DA0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_PMDHDAAOEEB_OFFSET UNITYSDK_OFFSET(0xDDC5810)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_POOFGCCKMJN_OFFSET UNITYSDK_OFFSET(0xDDC61A0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDC37D0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TRYGATEROTATE_OFFSET UNITYSDK_OFFSET(0xDDBE640)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGatePuzzleBoard_TypeDefinitionIndex = 78903;

	class TeleportGatePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::TeleportGateInfo>* TeleportGates; // 0x48
		::Il2CppArray<::RPG::Client::Prop::TeleportGateRelateInfo>* TeleportGateRelateInfos; // 0x50
		::Il2CppArray<::RPG::Client::Prop::TeleportGateLinkCurveInfo>* TeleportGateLinkCurves; // 0x58
		::System::Single MaxRotateSpeed; // 0x60
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* RotateSpeedCurve; // 0x68
		::System::UInt32 OpenPropInteractID; // 0x70
		::System::UInt32 ClosePropInteractID; // 0x74
		::System::String* TeleportEffectPath; // 0x78
		::System::String* EnterTeleportEffectPath; // 0x80
		::System::String* ExitTeleportEffectPath; // 0x88
		::System::String* GateTeleportText; // 0x90
		::System::String* GateRotateText; // 0x98
		::System::Single DelayVisibleTimeAfterTeleport; // 0xA0
		::System::Single RaycastYOffset; // 0xA4
		::System::Single TeleportSpeed; // 0xA8
		::System::Single TeleportGateCameraOffsetDistance; // 0xAC
		::System::Single TeleportGateCameraOffsetHeight; // 0xB0
		::System::Single TeleportGateCameraBlendInTime; // 0xB4
		::System::Single TeleportCameraMaxFov; // 0xB8
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* TeleportCameraFovCurve; // 0xC0
		::System::String* TelerportTriggerCustomString; // 0xC8
		::System::String* TeleportFinishTriggerCustomString; // 0xD0
		::System::Single EffectDelayTime; // 0xD8
		::RPG::Client::Prop::TeleportGateType GateType; // 0xDC
		::RPG::Client::Prop::TeleportGateCameraMode CameraMode; // 0xE0
		::System::Byte _padding2[0x4];
		::System::String* ShrinkGateShowLinkEffectString; // 0xE8
		::System::String* ShrinkGateHideLinkEffectString; // 0xF0
		::UnityEngine::GameObject* TeleportProxyObject; // 0xF8
		::Il2CppArray<::System::Int32>* KIBJPLDPCML; // 0x100
		::Il2CppArray<::RPG::GameCore::TransformComponent*>* OELNEEJFEHK; // 0x108
		::Il2CppArray<::RPG::Client::Prop::TeleportGate*>* FGKIPELOJIO; // 0x110
		::Il2CppArray<::RPG::GameCore::PropComponent*>* KOLHABGBOGL; // 0x118
		::RPG::Client::TwoKeyDictionary_3<::RPG::GameCore::PropState, ::RPG::GameCore::PropState, ::System::UInt32>* FHBJKEOBAGL; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>* GIGDODPADCL; // 0x128
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::JKFILIIMABA*>* LEHJAOBPKCM; // 0x130
		::System::Int32 JIIDKBCBNMG; // 0x138
		::System::Byte _padding3[0x4];
		::RPG::Client::Prop::PuzzleCameraController* NFFEBKLPJMO; // 0x140
		::System::Boolean GMPCHLBBOAJ; // 0x148
		::System::Byte _padding4[0x3];
		::System::Int32 HAHNOLAOHDB; // 0x14C
		static ::System::Int32* StaticGet_GPAHGLPFKGE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "TeleportGatePuzzleBoard")->GetStaticField(0x143F0);
		}

		static ::System::Int32* StaticGet_MHMCAMEDNPJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "TeleportGatePuzzleBoard")->GetStaticField(0x143F4);
		}

		static ::System::Int32* StaticGet_OOLBHKOCGLC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "TeleportGatePuzzleBoard")->GetStaticField(0x143F8);
		}

		// static const ::System::Object KMNKLHNEHOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JCHLKAHJIGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_JCHLKAHJIGH_OFFSET))(this);
		}

		::System::Void NPCGFBJPFDF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_NPCGFBJPFDF_OFFSET))(this, a1);
		}

		::System::Void NGFACNIMMOO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_NGFACNIMMOO_OFFSET))(this, a1, a2);
		}

		::System::Void OnSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONSETACTIVE_OFFSET))(this, a1);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void GetTeleportPoints(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::BansheeGz::BGSpline::Components::BGCcMath* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Prop::TeleportGate* GetTeleportEndPoint(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::TeleportGate*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTENDPOINT_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* GetTeleportPointsBySrcAndTarget(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTSBYSRCANDTARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ExitTeleportCameraMode(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_EXITTELEPORTCAMERAMODE_OFFSET))(this, a1);
		}

		::System::Void OnPlayerStartMove(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERSTARTMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayerEndMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERENDMOVE_OFFSET))(this);
		}

		::System::Void OnGateStateChange(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONGATESTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRotateEnd(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONROTATEEND_OFFSET))(this, a1);
		}

		::System::Void DisableAllTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISABLEALLTRIGGER_OFFSET))(this);
		}

		::System::Void EnableAllTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ENABLEALLTRIGGER_OFFSET))(this);
		}

		::System::Void OnEffectTriggerEnter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnEffectTriggerExit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void TryGateRotate(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TRYGATEROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void ILGHANPJJKG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ILGHANPJJKG_OFFSET))(this, a1);
		}

		::System::Void LOAAIBPBAOC(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::Prop::TeleportGateType a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::TeleportGateType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_LOAAIBPBAOC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PMDHDAAOEEB(::JKFILIIMABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKFILIIMABA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_PMDHDAAOEEB_OFFSET))(this, a1);
		}

		::System::Void DEPKCLDMOLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DEPKCLDMOLO_OFFSET))(this);
		}

		::System::Void OJKMNNHDFAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OJKMNNHDFAH_OFFSET))(this);
		}

		::System::Void GOFDHDBHGKD(::System::Int32 a1, ::RPG::GameCore::PropComponent* a2, ::RPG::GameCore::PropState a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GOFDHDBHGKD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KBGABJHDOEI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_KBGABJHDOEI_OFFSET))(this, a1, a2);
		}

		::System::Boolean MFGNHNKNMNL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_MFGNHNKNMNL_OFFSET))(this, a1, a2);
		}

		::JKFILIIMABA* PJPIKIDHMMJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::JKFILIIMABA*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_PJPIKIDHMMJ_OFFSET))(this, a1, a2);
		}

		::System::Void KLJPFNOOMKN(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_KLJPFNOOMKN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IMEGKJEPMED(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_IMEGKJEPMED_OFFSET))(this, a1, a2);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_IFCNMIBPBOI_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropState POOFGCCKMJN(::System::Int32 a1)
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_POOFGCCKMJN_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropState OHAMFNNKMMC(::System::Int32 a1)
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OHAMFNNKMMC_OFFSET))(this, a1);
		}

		::System::Int32 OGLOAOPJANC(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OGLOAOPJANC_OFFSET))(this, a1);
		}

		::System::Int32 KEBBPLFKAMA(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_KEBBPLFKAMA_OFFSET))(this, a1);
		}

		::System::Void DPLAMPLOMKA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DPLAMPLOMKA_OFFSET))(this, a1);
		}

		::System::Void AKGHJCBGIMO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_AKGHJCBGIMO_OFFSET))(this, a1);
		}

		::System::Void DCOPMNGPGOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DCOPMNGPGOG_OFFSET))(this);
		}

		::System::Single FLBLDGJBBPP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_FLBLDGJBBPP_OFFSET))(this, a1, a2);
		}

		::System::Void GEICILHLHNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GEICILHLHNP_OFFSET))(this);
		}

		::System::Void CCHJLAKJPHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_CCHJLAKJPHL_OFFSET))(this);
		}

		::System::Void OFKDGHANJOG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OFKDGHANJOG_OFFSET))(this, a1);
		}

		::System::Void ADBGAIBGILB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ADBGAIBGILB_OFFSET))(this);
		}

		::System::Boolean OOMFEOAKMPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_OOMFEOAKMPK_OFFSET))(this);
		}

	};
}
