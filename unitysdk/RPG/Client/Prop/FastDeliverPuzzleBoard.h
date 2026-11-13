#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/FastDeliverPuzzleStep.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BPMLCFOHMDB;
namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace RPG::Client::Prop { class FastDeliverPuzzleCameraController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_AFEICMBIFMG_OFFSET UNITYSDK_OFFSET(0x1A518F20)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BDBHCAIIHOA_OFFSET UNITYSDK_OFFSET(0x1A50FD10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BFDFMGGEJCH_OFFSET UNITYSDK_OFFSET(0x1A516820)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BJMGBGLIBLN_OFFSET UNITYSDK_OFFSET(0x1A514C30)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BMILLNAEHKK_OFFSET UNITYSDK_OFFSET(0x1A5133F0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BMLPEPPECNK_OFFSET UNITYSDK_OFFSET(0x1A510140)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A51AFF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_CKEMILPIJNL_OFFSET UNITYSDK_OFFSET(0x1A518A00)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A51AEB0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DEJFIIFCAJC_OFFSET UNITYSDK_OFFSET(0x1A51A2B0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DESTROYCAMARA_OFFSET UNITYSDK_OFFSET(0x1A515F10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A516540)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FFPNMLFLDGN_OFFSET UNITYSDK_OFFSET(0x1A518950)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FINISHROTATESTEP_OFFSET UNITYSDK_OFFSET(0x1A50D9D0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FOANJIAAENN_OFFSET UNITYSDK_OFFSET(0x1A518900)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FPDDDFKCMKF_OFFSET UNITYSDK_OFFSET(0x1A517490)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_GET_PUZZLESTEP_OFFSET UNITYSDK_OFFSET(0x1A51A960)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_HLCEKKOAKFC_OFFSET UNITYSDK_OFFSET(0x1A513260)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x1A50F900)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITDATA_OFFSET UNITYSDK_OFFSET(0x1A50DF10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A50DAC0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1A515700)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_IOABIHBKKNE_OFFSET UNITYSDK_OFFSET(0x1A50FBA0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISENABLEPUZZLEUI_OFFSET UNITYSDK_OFFSET(0x1A519260)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1A50FE10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISZERO_OFFSET UNITYSDK_OFFSET(0x1A517420)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_JCGJHOHKNJP_OFFSET UNITYSDK_OFFSET(0x1A513AF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_JKMIFOEOIMO_OFFSET UNITYSDK_OFFSET(0x1A513750)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_JNPJIEDLIJI_OFFSET UNITYSDK_OFFSET(0x1A51A6F0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_KCAAAMILABJ_OFFSET UNITYSDK_OFFSET(0x1A5194A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_KCNNAOMHBDH_OFFSET UNITYSDK_OFFSET(0x1A519BC0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_KMLEOAJNMLG_OFFSET UNITYSDK_OFFSET(0x1A516A20)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_LBDKIBEALBK_OFFSET UNITYSDK_OFFSET(0x1A5142E0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_LLLJPMCNMIJ_OFFSET UNITYSDK_OFFSET(0x1A518B80)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_LOEMNNGLNJJ_OFFSET UNITYSDK_OFFSET(0x1A519620)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_MOAJACPHOKG_OFFSET UNITYSDK_OFFSET(0x1A516F80)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_NAOBDIGBDMF_OFFSET UNITYSDK_OFFSET(0x1A510ED0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_NKKDKJJMKMD_OFFSET UNITYSDK_OFFSET(0x1A5192D0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_NOFPEKKOBOB_OFFSET UNITYSDK_OFFSET(0x1A519010)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_NOPABKJMHEF_OFFSET UNITYSDK_OFFSET(0x1A50FE60)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_OCNNOEJFPNM_OFFSET UNITYSDK_OFFSET(0x1A511700)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ODEKGGJJDKO_OFFSET UNITYSDK_OFFSET(0x1A50FF60)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1A51AD70)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ONPUZZLEPREFINISH_OFFSET UNITYSDK_OFFSET(0x1A519EB0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_OPJFAILGNIG_OFFSET UNITYSDK_OFFSET(0x1A5152F0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A516460)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEX_OFFSET UNITYSDK_OFFSET(0x1A510190)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEY_OFFSET UNITYSDK_OFFSET(0x1A511820)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEZ_OFFSET UNITYSDK_OFFSET(0x1A512540)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETAIMFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A51A970)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETAVATARTELEPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A51AB70)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETDOLLYZOOMSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A51AA70)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETROTATEPUZZLESTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A51AC70)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETROUTEID_OFFSET UNITYSDK_OFFSET(0x1A51A6A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_STARTAIM_OFFSET UNITYSDK_OFFSET(0x1A515100)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A50E580)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A517620)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETAIMFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A51A9F0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETAVATARTELEPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A51ABF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETDOLLYZOOMSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A51AAF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETROTATEPUZZLESTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A51ACF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UPDATEALLPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A50DA20)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISHIMMEDIATELY_B__114_0_OFFSET UNITYSDK_OFFSET(0x1A51B100)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISHIMMEDIATELY_B__114_1_OFFSET UNITYSDK_OFFSET(0x1A51B3E0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISH_B__115_0_OFFSET UNITYSDK_OFFSET(0x1A51B3F0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISH_B__115_1_OFFSET UNITYSDK_OFFSET(0x1A51B5F0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONHACKDEVICEPUZZLEFINISH_B__122_0_OFFSET UNITYSDK_OFFSET(0x1A51B600)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__TICKPUZZLE_B__105_1_OFFSET UNITYSDK_OFFSET(0x1A51B0F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleBoard_TypeDefinitionIndex = 81315;

	class FastDeliverPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::RPG::GameCore::GameEntity* JFCIBPBJFGC; // 0x48
		::UnityEngine::Vector3 CDJHEIGPBIA; // 0x50
		::UnityEngine::Vector3 JGKIHNHMJHN; // 0x5C
		::UnityEngine::Vector3 NLHOJAHIKLL; // 0x68
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x74
		::UnityEngine::Vector3 PEEEFFFLAMC; // 0x80
		::UnityEngine::Vector3 LFDKHCEFGHI; // 0x8C
		::UnityEngine::Vector3 EJPIJKMKEKC; // 0x98
		::System::Boolean KJOAPEAGGDI; // 0xA4
		::System::Byte _padding0[0x3];
		::System::Single LKHDFMGGGGE; // 0xA8
		::System::Single FMAEENEHIPC; // 0xAC
		::System::Single LDOPJPLDKED; // 0xB0
		::System::Byte _padding1[0x4];
		::BPMLCFOHMDB* KCNLDJFMGPL; // 0xB8
		::System::Single InitCameraDist; // 0xC0
		::System::Single CameraRotateLimitAngle; // 0xC4
		::System::Single CameraRotateUpAndDownLimitAngle; // 0xC8
		::System::Single CameraRandomAngle; // 0xCC
		::System::Single CameraRandomAngleCheck; // 0xD0
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* InitCameraFocus; // 0xD8
		::System::Single CameraInitialOffsetThreshold; // 0xE0
		::System::Boolean IsSkipCameraAimAfterFinishPuzzle; // 0xE4
		::System::Boolean UseSlopingDirection; // 0xE5
		::System::Byte _padding3[0x2];
		::System::Single SlopingThreshold; // 0xE8
		::System::Single SlopingDegree; // 0xEC
		::System::Single InitCameraFOV; // 0xF0
		::System::Single AimStepDollyZoomDuration; // 0xF4
		::UnityEngine::AnimationCurve* AimStepDollyZoomCurve; // 0xF8
		::System::Single PuzzleFinishStepDollyZoomDuration; // 0x100
		::System::Byte _padding4[0x4];
		::UnityEngine::AnimationCurve* PuzzleFinishStepDollyZoomCurve; // 0x108
		::System::Single SecondPartDollyZoomDistRate; // 0x110
		::System::Byte _padding5[0x4];
		::UnityEngine::AnimationCurve* AimBlendRotCenterCurve; // 0x118
		::System::Single AimBlendRotCenterDuration; // 0x120
		::System::Single AimRotateSpeed; // 0x124
		::System::Single PuzzleParticleDelayAppear; // 0x128
		::System::Byte _padding6[0x4];
		::UnityEngine::GameObject* RotatePuzzleRoot; // 0x130
		::UnityEngine::Vector3 PuzzleInitEuler; // 0x138
		::UnityEngine::Vector3 PuzzleTargetEuler; // 0x144
		::System::Single CheckDuration; // 0x150
		::System::Single CheckTargetGap; // 0x154
		::System::Single CheckTargetPercentGap; // 0x158
		::UnityEngine::Vector3 CheckTargetGapVec; // 0x15C
		::System::Single PuzzleRootToPropDist; // 0x168
		::System::Single PuzzleRootToCameraDist; // 0x16C
		::System::Single PuzzleRootScale; // 0x170
		::System::Single PuzzleRotateSpeedX; // 0x174
		::System::Single PuzzleRotateSpeedY; // 0x178
		::System::Single PuzzleStickRotateSpeedX; // 0x17C
		::System::Single PuzzleStickRotateSpeedY; // 0x180
		::System::Int32 PuzzleTargetMultiX; // 0x184
		::System::Int32 PuzzleTargetMultiY; // 0x188
		::System::Int32 PuzzleTargetMultiZ; // 0x18C
		::UnityEngine::Vector2 PuzzleRotateLimitX; // 0x190
		::UnityEngine::Vector2 PuzzleRotateLimitY; // 0x198
		::UnityEngine::Vector2 PuzzleRotateLimitZ; // 0x1A0
		::System::Int32 RotateLimitType; // 0x1A8
		::System::Single PuzzlePreFinishRotationDuration; // 0x1AC
		::UnityEngine::AnimationCurve* PuzzlePreFinishRotationCurve; // 0x1B0
		::System::Single DelayDeliverTime; // 0x1B8
		::System::Single DeliverBetweenDist; // 0x1BC
		::System::Single AfterTransitionDelayCameraBlendTime; // 0x1C0
		::System::Single AfterTransitionCameraBlendTime; // 0x1C4
		::System::Single ThirdCameraMoveDuration; // 0x1C8
		::System::Byte _padding7[0x4];
		::UnityEngine::AnimationCurve* ThirdCameraMoveCurve; // 0x1D0
		::System::Single ThirdCameraMoveDeltaDist; // 0x1D8
		::System::Boolean IsHackDevice; // 0x1DC
		::System::Boolean HasPuzzleFocusTarget; // 0x1DD
		::System::Boolean HasPuzzleAimFinish; // 0x1DE
		::System::Boolean KJKGBBIELNH; // 0x1DF
		::RPG::GameCore::PropInitPuzzle* BGLJBLDOEPD; // 0x1E0
		::System::Nullable_1<::UnityEngine::Vector3> HLKJEGFDLJL; // 0x1E8
		::System::Byte _padding8[0x8];
		::System::Boolean KBEBIAHLICN; // 0x1F8
		::System::Boolean EDEAJIKHHOE; // 0x1F9
		::System::Boolean MAEINCJOGBD; // 0x1FA
		::System::Boolean NALJDAIDEOC; // 0x1FB
		::System::Single CKEHHCLKIPM; // 0x1FC
		::System::Single BPIOGLNKJIH; // 0x200
		::System::Single LFGHDINEKNB; // 0x204
		::UnityEngine::GameObject* DFIIFCOCDND; // 0x208
		::System::Boolean AGMNLKJBCFD; // 0x210
		::System::Byte _padding9[0x3];
		::System::UInt32 OPHGEOGLJJM; // 0x214
		::System::Single CKLILEGGHGC; // 0x218
		::System::Single JKKHHNIKDPF; // 0x21C
		::UnityEngine::Quaternion BILJFNAPMLO; // 0x220
		::UnityEngine::Quaternion PFLNIDOEGBD; // 0x230
		::RPG::Client::Prop::FastDeliverPuzzleCameraController* OCOBMKLPDCN; // 0x240
		::System::Boolean CIFEPLFDHPM; // 0x248
		::System::Byte _padding10[0x3];
		::RPG::Client::Prop::FastDeliverPuzzleStep DGNMBEDGOLL; // 0x24C
		::UnityEngine::Quaternion EACLBCKINAN; // 0x250
		::System::Action* HDEJLOJHPKI; // 0x260
		::System::Action* EAFHFPGEABI; // 0x268
		::System::Action* IFJOGBLAMMP; // 0x270
		::System::Action* GJCBMPAKDDM; // 0x278
		::System::Boolean OAILNGBLCHF; // 0x280
		::System::Byte _padding11[0x3];
		::UnityEngine::Vector3 CANCEEJFCNC; // 0x284
		::UnityEngine::Vector3 NNHJHGFMGNB; // 0x290
		::System::Int32 NNCAJLGKKAK; // 0x29C
		::System::Int32 NKJKFPNJOGJ; // 0x2A0
		::System::Byte _padding12[0x4];
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MMLACHNFAON; // 0x2A8
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "FastDeliverPuzzleBoard")->GetStaticField(0x5D520);
		}

		static ::RPG::Client::Prop::FastDeliverPuzzleBoard** StaticGet_PlayingBoard()
		{
			return (::RPG::Client::Prop::FastDeliverPuzzleBoard**)UnitySDK::FromName("RPG.Client.Prop", "FastDeliverPuzzleBoard")->GetStaticField(0x5D528);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_FIIICPCKMGM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("RPG.Client.Prop", "FastDeliverPuzzleBoard")->GetStaticField(0x5D530);
		}

		static ::System::Int32* StaticGet_NGHKDJDOOFG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "FastDeliverPuzzleBoard")->GetStaticField(0x135F0);
		}

		// static const ::System::Object HFIFIHKDMHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void FinishRotateStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FINISHROTATESTEP_OFFSET))(this);
		}

		::System::Void UpdateAllParameter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UPDATEALLPARAMETER_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IOABIHBKKNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_IOABIHBKKNE_OFFSET))(this);
		}

		::System::Void BDBHCAIIHOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BDBHCAIIHOA_OFFSET))(this, a1);
		}

		::System::Void NOPABKJMHEF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_NOPABKJMHEF_OFFSET))(this, a1);
		}

		::System::Void InitData(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::System::Single> a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ODEKGGJJDKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ODEKGGJJDKO_OFFSET))(this, a1);
		}

		::System::Void BMLPEPPECNK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BMLPEPPECNK_OFFSET))(this, a1);
		}

		::System::Void RotateX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEX_OFFSET))(this, a1);
		}

		::System::Void NAOBDIGBDMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_NAOBDIGBDMF_OFFSET))(this);
		}

		static ::System::Single OCNNOEJFPNM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_OCNNOEJFPNM_OFFSET))(a1, a2, a3);
		}

		::System::Void RotateY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEY_OFFSET))(this, a1);
		}

		::System::Void RotateZ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEZ_OFFSET))(this, a1);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void BJMGBGLIBLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BJMGBGLIBLN_OFFSET))(this);
		}

		::System::Void StartAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_STARTAIM_OFFSET))(this);
		}

		::System::Void JCGJHOHKNJP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_JCGJHOHKNJP_OFFSET))(this, a1, a2);
		}

		::System::Void InitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITCAMERA_OFFSET))(this);
		}

		::System::Void InitVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void DestroyCamara()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DESTROYCAMARA_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean IsZero(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISZERO_OFFSET))(a1);
		}

		::UnityEngine::Quaternion FPDDDFKCMKF(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FPDDDFKCMKF_OFFSET))(this, a1, a2);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Single FFPNMLFLDGN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FFPNMLFLDGN_OFFSET))(this, a1, a2);
		}

		::System::Boolean AFEICMBIFMG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_AFEICMBIFMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKEMILPIJNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_CKEMILPIJNL_OFFSET))(this);
		}

		::System::Void NOFPEKKOBOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_NOFPEKKOBOB_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsEnablePuzzleUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISENABLEPUZZLEUI_OFFSET))(this);
		}

		::System::Single NKKDKJJMKMD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_NKKDKJJMKMD_OFFSET))(this);
		}

		::System::Void KCAAAMILABJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_KCAAAMILABJ_OFFSET))(this);
		}

		::System::Void OPJFAILGNIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_OPJFAILGNIG_OFFSET))(this);
		}

		::System::Void LOEMNNGLNJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_LOEMNNGLNJJ_OFFSET))(this);
		}

		::System::Void JKMIFOEOIMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_JKMIFOEOIMO_OFFSET))(this);
		}

		::System::Void KCNNAOMHBDH(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_KCNNAOMHBDH_OFFSET))(this, a1, a2);
		}

		::System::Void OnPuzzlePreFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ONPUZZLEPREFINISH_OFFSET))(this);
		}

		::System::Void SetRouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETROUTEID_OFFSET))(this, a1);
		}

		::System::Void FOANJIAAENN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FOANJIAAENN_OFFSET))(this);
		}

		::System::Void LLLJPMCNMIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_LLLJPMCNMIJ_OFFSET))(this);
		}

		::System::Void JNPJIEDLIJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_JNPJIEDLIJI_OFFSET))(this, a1);
		}

		::System::Void BFDFMGGEJCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BFDFMGGEJCH_OFFSET))(this);
		}

		::RPG::Client::Prop::FastDeliverPuzzleStep get_PuzzleStep()
		{
			return ((::RPG::Client::Prop::FastDeliverPuzzleStep(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_GET_PUZZLESTEP_OFFSET))(this);
		}

		::System::Void SetAimFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETAIMFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnsetAimFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETAIMFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetDollyZoomStartCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETDOLLYZOOMSTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnsetDollyZoomStartCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETDOLLYZOOMSTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetAvatarTeleportCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETAVATARTELEPORTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnsetAvatarTeleportCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETAVATARTELEPORTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetRotatePuzzleStartCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETROTATEPUZZLESTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnsetRotatePuzzleStartCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETROTATEPUZZLESTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void HLCEKKOAKFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_HLCEKKOAKFC_OFFSET))(this);
		}

		::System::Void MOAJACPHOKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_MOAJACPHOKG_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void BMILLNAEHKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_BMILLNAEHKK_OFFSET))(this);
		}

		::System::Void KMLEOAJNMLG(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_KMLEOAJNMLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DEJFIIFCAJC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DEJFIIFCAJC_OFFSET))(this, a1);
		}

		::System::Void LBDKIBEALBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_LBDKIBEALBK_OFFSET))(this);
		}

		::System::Void _TickPuzzle_b__105_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__TICKPUZZLE_B__105_1_OFFSET))(this);
		}

		::System::Void _OnAimFinishImmediately_b__114_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISHIMMEDIATELY_B__114_0_OFFSET))(this);
		}

		::System::Void _OnAimFinishImmediately_b__114_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISHIMMEDIATELY_B__114_1_OFFSET))(this);
		}

		::System::Void _OnAimFinish_b__115_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISH_B__115_0_OFFSET))(this);
		}

		::System::Void _OnAimFinish_b__115_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISH_B__115_1_OFFSET))(this);
		}

		::System::Void _OnHackDevicePuzzleFinish_b__122_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONHACKDEVICEPUZZLEFINISH_B__122_0_OFFSET))(this);
		}

	};
}
