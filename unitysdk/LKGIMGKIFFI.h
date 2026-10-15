#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BILMKGHAIOC.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/IDLMJDKPBGC_MDKCIOMIDKB.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/LKGIMGKIFFI_OMODLICFCFD.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BABNOKHOBCF;
class IDLMJDKPBGC;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace Cinemachine { class CinemachineFramingTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FiveDimMoveConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define LKGIMGKIFFI_ABDLODJPOFB_OFFSET UNITYSDK_OFFSET(0xB736180)
#define LKGIMGKIFFI_ABDPBOCAKPF_1_OFFSET UNITYSDK_OFFSET(0xB73E350)
#define LKGIMGKIFFI_ABDPBOCAKPF_OFFSET UNITYSDK_OFFSET(0xB73D9A0)
#define LKGIMGKIFFI_ACLGLHPGOJB_OFFSET UNITYSDK_OFFSET(0xB7362E0)
#define LKGIMGKIFFI_AFFKMEFJOBE_OFFSET UNITYSDK_OFFSET(0xB73BBB0)
#define LKGIMGKIFFI_AJNOIFNGAPL_OFFSET UNITYSDK_OFFSET(0xB7306C0)
#define LKGIMGKIFFI_ANCCCMIGBNJ_OFFSET UNITYSDK_OFFSET(0xB73F6F0)
#define LKGIMGKIFFI_BGAHGFIDKGL_OFFSET UNITYSDK_OFFSET(0xB72FFD0)
#define LKGIMGKIFFI_BGPOJDDJBFJ_OFFSET UNITYSDK_OFFSET(0xB73E140)
#define LKGIMGKIFFI_CEKNCHLEEDO_OFFSET UNITYSDK_OFFSET(0xB72FD20)
#define LKGIMGKIFFI_CELCPPHHJIO_OFFSET UNITYSDK_OFFSET(0xB734DC0)
#define LKGIMGKIFFI_CNAIGNDOBGE_OFFSET UNITYSDK_OFFSET(0xB73F9C0)
#define LKGIMGKIFFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB72CA40)
#define LKGIMGKIFFI_DACKMPMDEMJ_OFFSET UNITYSDK_OFFSET(0xB73F950)
#define LKGIMGKIFFI_DDBGDCJIKLJ_OFFSET UNITYSDK_OFFSET(0xB733770)
#define LKGIMGKIFFI_DEODHIMGCJI_OFFSET UNITYSDK_OFFSET(0xB733C40)
#define LKGIMGKIFFI_DOACKMPDPAG_OFFSET UNITYSDK_OFFSET(0xB736390)
#define LKGIMGKIFFI_DPKLPMANKJF_OFFSET UNITYSDK_OFFSET(0xB73F7B0)
#define LKGIMGKIFFI_EHDADHEFPCI_OFFSET UNITYSDK_OFFSET(0xB73EEE0)
#define LKGIMGKIFFI_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB737F00)
#define LKGIMGKIFFI_FEKFMFDFEJD_OFFSET UNITYSDK_OFFSET(0xB731E20)
#define LKGIMGKIFFI_FGGCANGOOEG_OFFSET UNITYSDK_OFFSET(0xB73B600)
#define LKGIMGKIFFI_FLHLHJBMICF_OFFSET UNITYSDK_OFFSET(0xB73FA40)
#define LKGIMGKIFFI_FNIOIPJMPML_OFFSET UNITYSDK_OFFSET(0xB732520)
#define LKGIMGKIFFI_GECJJFBFJEJ_OFFSET UNITYSDK_OFFSET(0xB73F6A0)
#define LKGIMGKIFFI_GNJKLKNOJLN_OFFSET UNITYSDK_OFFSET(0xB73F690)
#define LKGIMGKIFFI_GPDGMNJDHMP_OFFSET UNITYSDK_OFFSET(0xB73EB10)
#define LKGIMGKIFFI_GPICLGLBJCN_OFFSET UNITYSDK_OFFSET(0xB73F760)
#define LKGIMGKIFFI_HANMDNLGPCH_OFFSET UNITYSDK_OFFSET(0xB73E800)
#define LKGIMGKIFFI_HJPHHCECJCC_OFFSET UNITYSDK_OFFSET(0xB72FDE0)
#define LKGIMGKIFFI_HMFMKJLCKAL_OFFSET UNITYSDK_OFFSET(0xB731EB0)
#define LKGIMGKIFFI_HMPPHGDLHPM_OFFSET UNITYSDK_OFFSET(0xB7325E0)
#define LKGIMGKIFFI_HPCPOKCFKIL_OFFSET UNITYSDK_OFFSET(0xB735B70)
#define LKGIMGKIFFI_HPJFDJKPJCO_OFFSET UNITYSDK_OFFSET(0xB73ED30)
#define LKGIMGKIFFI_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0xB73E8A0)
#define LKGIMGKIFFI_ICDIFELGDHI_OFFSET UNITYSDK_OFFSET(0xB72EE30)
#define LKGIMGKIFFI_IDBHEIBEGBA_OFFSET UNITYSDK_OFFSET(0xB737E30)
#define LKGIMGKIFFI_IFGMJFIFLHA_OFFSET UNITYSDK_OFFSET(0xB72E980)
#define LKGIMGKIFFI_IGALPIKOMGF_OFFSET UNITYSDK_OFFSET(0xB72E9E0)
#define LKGIMGKIFFI_IJEOGHKFHIO_OFFSET UNITYSDK_OFFSET(0xB72DFD0)
#define LKGIMGKIFFI_INAKNEBKEFC_OFFSET UNITYSDK_OFFSET(0xB7344C0)
#define LKGIMGKIFFI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB72CCD0)
#define LKGIMGKIFFI_IOLMJCAONGK_OFFSET UNITYSDK_OFFSET(0xB73C020)
#define LKGIMGKIFFI_JDIFKBJDEMJ_OFFSET UNITYSDK_OFFSET(0xB73DFC0)
#define LKGIMGKIFFI_JDIJOBMHIPK_OFFSET UNITYSDK_OFFSET(0xB7305B0)
#define LKGIMGKIFFI_JIKDLBADPDP_OFFSET UNITYSDK_OFFSET(0xB73EBF0)
#define LKGIMGKIFFI_JJEAAANKPDF_OFFSET UNITYSDK_OFFSET(0xB73D230)
#define LKGIMGKIFFI_JLIPHIBBNFF_OFFSET UNITYSDK_OFFSET(0xB72DC30)
#define LKGIMGKIFFI_JMCJAOHJDNI_OFFSET UNITYSDK_OFFSET(0xB73C9C0)
#define LKGIMGKIFFI_JOACGNDEHOE_OFFSET UNITYSDK_OFFSET(0xB73BA00)
#define LKGIMGKIFFI_JPBOBIBAHBG_OFFSET UNITYSDK_OFFSET(0xB73CDF0)
#define LKGIMGKIFFI_KDAHLMIDOOL_OFFSET UNITYSDK_OFFSET(0xB7303E0)
#define LKGIMGKIFFI_KHADHLCEFBD_OFFSET UNITYSDK_OFFSET(0xB73DA90)
#define LKGIMGKIFFI_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xB730890)
#define LKGIMGKIFFI_LHDAJBEMIBM_OFFSET UNITYSDK_OFFSET(0xB72E920)
#define LKGIMGKIFFI_LHFAFJLIDPC_OFFSET UNITYSDK_OFFSET(0xB73F630)
#define LKGIMGKIFFI_MGMCPOFFHJH_OFFSET UNITYSDK_OFFSET(0xB73E040)
#define LKGIMGKIFFI_MIJMOEJCBEG_OFFSET UNITYSDK_OFFSET(0xB73F820)
#define LKGIMGKIFFI_NCAINBJMGOG_OFFSET UNITYSDK_OFFSET(0xB73C8F0)
#define LKGIMGKIFFI_NEIACIBCGCD_OFFSET UNITYSDK_OFFSET(0xB72D810)
#define LKGIMGKIFFI_NGGFDOKFEGC_OFFSET UNITYSDK_OFFSET(0xB730720)
#define LKGIMGKIFFI_NHAFADGLNOF_OFFSET UNITYSDK_OFFSET(0xB73B760)
#define LKGIMGKIFFI_NNHKEIONKDN_OFFSET UNITYSDK_OFFSET(0xB72E7D0)
#define LKGIMGKIFFI_OFNLLHPHLHE_OFFSET UNITYSDK_OFFSET(0xB73F4D0)
#define LKGIMGKIFFI_OGIPNGKLDPL_OFFSET UNITYSDK_OFFSET(0xB72FEC0)
#define LKGIMGKIFFI_OHOMHHAPHNA_OFFSET UNITYSDK_OFFSET(0xB73FC50)
#define LKGIMGKIFFI_OLOOEICBJHI_OFFSET UNITYSDK_OFFSET(0xB73D2D0)
#define LKGIMGKIFFI_OMMFECAPJCF_OFFSET UNITYSDK_OFFSET(0xB73B9A0)
#define LKGIMGKIFFI_PEMGCGADMCD_OFFSET UNITYSDK_OFFSET(0xB7336C0)
#define LKGIMGKIFFI_PFACDAMNFAH_OFFSET UNITYSDK_OFFSET(0xB73F900)
#define LKGIMGKIFFI_PKOCOFNNGFP_OFFSET UNITYSDK_OFFSET(0xB730810)
#define LKGIMGKIFFI_PNBMDELCFAP_OFFSET UNITYSDK_OFFSET(0xB72CC50)
#define LKGIMGKIFFI_POCBMNKPLLN_OFFSET UNITYSDK_OFFSET(0xB73E200)
#define LKGIMGKIFFI_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB72E070)
#define LKGIMGKIFFI__CLEARACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xB734800)
#define LKGIMGKIFFI__COMPUTEFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0xB736DB0)
#define LKGIMGKIFFI__COMPUTETARGETSPACE_OFFSET UNITYSDK_OFFSET(0xB736570)
#define LKGIMGKIFFI__EXECUTE_B__38_2_OFFSET UNITYSDK_OFFSET(0xB740000)
#define LKGIMGKIFFI__GETROOTENTITYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB737860)
#define LKGIMGKIFFI__GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0xB737D40)
#define LKGIMGKIFFI__GETWATERLEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0xB737DF0)
#define LKGIMGKIFFI__HASVIEWBOUND_OFFSET UNITYSDK_OFFSET(0xB737CF0)
#define LKGIMGKIFFI__HASWATERREFLECTION_OFFSET UNITYSDK_OFFSET(0xB737DB0)
#define LKGIMGKIFFI__INITACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xB734EC0)
#define LKGIMGKIFFI__PUSHDATATOFIXEDCAMERA_OFFSET UNITYSDK_OFFSET(0xB737130)
#define LKGIMGKIFFI__SETACTIVECAMERAVIEW_OFFSET UNITYSDK_OFFSET(0xB734930)
#define LKGIMGKIFFI__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET UNITYSDK_OFFSET(0xB736530)
#define LKGIMGKIFFI__UPDATECAMERASTACK_OFFSET UNITYSDK_OFFSET(0xB731840)
#define LKGIMGKIFFI__UPDATELOOKAHEADX_OFFSET UNITYSDK_OFFSET(0xB736A00)
#define LKGIMGKIFFI__UPDATELOOKAHEADY_OFFSET UNITYSDK_OFFSET(0xB736BD0)
#define LKGIMGKIFFI__UPDATERELEASECAMERAS_OFFSET UNITYSDK_OFFSET(0xB732840)
#define LKGIMGKIFFI__UPDATETASKCAMERAS_OFFSET UNITYSDK_OFFSET(0xB730C50)
#define LKGIMGKIFFI__UPDATETOPCAMERA_OFFSET UNITYSDK_OFFSET(0xB7318C0)
#define LKGIMGKIFFI___APPLYSTACKCAMERAPRIORITIES_B__22_0_OFFSET UNITYSDK_OFFSET(0xB73FCC0)
#define LKGIMGKIFFI___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__61_0_OFFSET UNITYSDK_OFFSET(0xB740050)

inline static constexpr unsigned int LKGIMGKIFFI_TypeDefinitionIndex = 76757;

	class LKGIMGKIFFI
	{
	public:
		::IDLMJDKPBGC* IJPIHJKEPKE; // 0x98
		::Cinemachine::CinemachineBlendDefinition KDMGMLINKGJ; // 0xA0
		::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* CDFHFDNCAMH; // 0xB0
		::System::Action* IAKGCDKFLKH; // 0xB8
		::System::Collections::Generic::HashSet_1<::System::Int32>* AOKOCBIIBIN; // 0xC0
		::System::Action* DBPLLFAAEIB; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* PLCFDBLKMNI; // 0xD0
		::BABNOKHOBCF* FKINCGODJEP; // 0xD8
		::UnityEngine::Transform* MEAMOJGDIPK; // 0xE0
		::Cinemachine::CinemachineVirtualCamera* FEFJMJFFNEG; // 0xE8
		::MNCOPNHONHO* PDENFEFCAGN; // 0xF0
		::RPG::Client::PipelineCameraEngine* FEBCOJGFEPK; // 0xF8
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0x100
		::System::Action* DFAMDGMGKOL; // 0x108
		::System::Single BNDFPBPLFJP; // 0x110
		::System::Int32 FKIOKCFNBKM; // 0x114
		::UnityEngine::Quaternion OLMOPFDHGPA; // 0x118
		::System::Single APOECJNJHOB; // 0x128
		::System::Int32 EKPLPAMHFJD; // 0x12C
		::UnityEngine::Vector3 INJEPDGDEFO; // 0x130
		::System::Single CKOMBNAEOAM; // 0x13C
		::System::Int32 LFINEBLCIGO; // 0x140
		::System::Boolean AOANKJBKLPK; // 0x144
		::System::Boolean NHANLOKBHJH; // 0x145
		::System::Byte _padding0[0x2];
		::System::Single CFCJFPGGLOO; // 0x148
		::System::Single BKMFIBPLKDB; // 0x14C
		::System::Single OFPKGKAFBGI; // 0x150
		::UnityEngine::Vector3 OPJFANBFDEJ; // 0x154
		::System::Boolean NCEOJJGLIOI; // 0x160
		::System::Boolean LAPGMNIBGEF; // 0x161
		::System::Boolean MHDBPKKDACD; // 0x162
		::System::Boolean NKLNEEFFDOI; // 0x163
		::System::Single OPIDFEOLCHF; // 0x164
		::System::Single PKKOMNJLGEO; // 0x168
		::System::Boolean CFCJPFBAJHK; // 0x16C
		::System::Boolean ELJCLNJNLAH; // 0x16D
		::System::Boolean CPOEIIPKBGF; // 0x16E
		::System::Boolean GLMGOGJGEOJ; // 0x16F
		::System::Single NJLCBLNIJCP; // 0x170
		::System::Boolean BNBMIBGDDNE; // 0x174
		::System::Boolean AEOAFPDBAJL; // 0x175
		::System::Boolean KLJMFLIMLFG; // 0x176
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector3 PLLHAANIOPC; // 0x178
		::UnityEngine::Vector3 HNKAKJKLDJG; // 0x184
		::System::Single PEMIKOIAABF; // 0x190
		::UnityEngine::Vector3 NJMCHCDFAPC; // 0x194
		::System::Int32 PLNBOPGBMKK; // 0x1A0
		::System::Single LNIKIDPKMAL; // 0x1A4
		::RPG::GameCore::CameraMode OKPDNAPCJPE; // 0x1A8
		::System::Single JFLPMGHGKHG; // 0x1AC
		::System::Int32 ECCKNFHNOCG; // 0x1B0
		::System::Single JMHBHKFCAJA; // 0x1B4
		::System::Int32 GKAGOFFPDEN; // 0x1B8
		::System::Single CAEPPJCFCOA; // 0x1BC
		::System::Single FBFLIEIBIAJ; // 0x1C0
		::System::Single OODIJPKCNLB; // 0x1C4
		::System::Int32 HANPGICEKBB; // 0x1C8
		::System::Single BPAGBJIFKCJ; // 0x1CC
		::System::Single FLCJKNGOJMC; // 0x1D0
		// static const ::System::Object CDFLIPLGLKN; // 0x0
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PNBMDELCFAP(::IDLMJDKPBGC_MDKCIOMIDKB a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDLMJDKPBGC_MDKCIOMIDKB))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_PNBMDELCFAP_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_TEARDOWN_OFFSET))(this);
		}

		::System::Void NNHKEIONKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NNHKEIONKDN_OFFSET))(this);
		}

		::System::Void ICDIFELGDHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_ICDIFELGDHI_OFFSET))(this);
		}

		::System::Void OGIPNGKLDPL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_OGIPNGKLDPL_OFFSET))(this, a1);
		}

		::System::Boolean JDIJOBMHIPK(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_JDIJOBMHIPK_OFFSET))(this, a1);
		}

		::System::Boolean AJNOIFNGAPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_AJNOIFNGAPL_OFFSET))(this);
		}

		::System::Boolean NGGFDOKFEGC(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NGGFDOKFEGC_OFFSET))(this, a1, a2);
		}

		::System::Void PKOCOFNNGFP(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_PKOCOFNNGFP_OFFSET))(this, a1);
		}

		::System::Boolean HJPHHCECJCC(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::Single))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_HJPHHCECJCC_OFFSET))(this, a1, a2);
		}

		::System::Void NEIACIBCGCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NEIACIBCGCD_OFFSET))(this);
		}

		::System::Void JLIPHIBBNFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_JLIPHIBBNFF_OFFSET))(this);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void _UpdateCameraStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__UPDATECAMERASTACK_OFFSET))(this);
		}

		::System::Void _UpdateReleaseCameras()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__UPDATERELEASECAMERAS_OFFSET))(this);
		}

		::System::Void _UpdateTopCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__UPDATETOPCAMERA_OFFSET))(this);
		}

		::System::Void _ClearActiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__CLEARACTIVECAMERA_OFFSET))(this);
		}

		::System::Void _SetActiveCameraView(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__SETACTIVECAMERAVIEW_OFFSET))(this, a1);
		}

		::System::Void _UpdateTaskCameras()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__UPDATETASKCAMERAS_OFFSET))(this);
		}

		::System::Void HPCPOKCFKIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_HPCPOKCFKIL_OFFSET))(this);
		}

		::System::Void DDBGDCJIKLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_DDBGDCJIKLJ_OFFSET))(this);
		}

		::System::Void _InitActiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__INITACTIVECAMERA_OFFSET))(this);
		}

		static ::System::Void ABDLODJPOFB(::INMMPMDELKE* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2, ::RPG::GameCore::FiveDimCameraLensConfig* a3)
		{
			return ((::System::Void(*)(::INMMPMDELKE*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimCameraLensConfig*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_ABDLODJPOFB_OFFSET))(a1, a2, a3);
		}

		::System::Boolean _ShouldApplyRenderingErrorCorrectionAngle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__SHOULDAPPLYRENDERINGERRORCORRECTIONANGLE_OFFSET))(this);
		}

		::KLNKLOMDIIC _ComputeTargetSpace(::BILMKGHAIOC a1, ::HGBCMFANCOE a2)
		{
			return ((::KLNKLOMDIIC(*)(::PVOID, ::BILMKGHAIOC, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__COMPUTETARGETSPACE_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateLookAheadX(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::HGBCMFANCOE a2, ::BILMKGHAIOC a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::HGBCMFANCOE, ::BILMKGHAIOC))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__UPDATELOOKAHEADX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateLookAheadY(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::HGBCMFANCOE a2, ::BILMKGHAIOC a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::HGBCMFANCOE, ::BILMKGHAIOC))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__UPDATELOOKAHEADY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ComputeFollowRotation(::INMMPMDELKE* a1, ::HGBCMFANCOE a2, ::BILMKGHAIOC a3, ::RPG::GameCore::FiveDimCameraFollowConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::HGBCMFANCOE, ::BILMKGHAIOC, ::RPG::GameCore::FiveDimCameraFollowConfig*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__COMPUTEFOLLOWROTATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _PushDataToFixedCamera(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__PUSHDATATOFIXEDCAMERA_OFFSET))(this, a1);
		}

		::KLNKLOMDIIC _GetRootEntityWorldTransform()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__GETROOTENTITYWORLDTRANSFORM_OFFSET))(this);
		}

		::System::Boolean _HasViewBound(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__HASVIEWBOUND_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds _GetViewBound(::INMMPMDELKE* a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__GETVIEWBOUND_OFFSET))(this, a1);
		}

		::System::Boolean _HasWaterReflection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__HASWATERREFLECTION_OFFSET))(this);
		}

		::System::Single _GetWaterLevelHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__GETWATERLEVELHEIGHT_OFFSET))(this);
		}

		::System::Boolean FEKFMFDFEJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_FEKFMFDFEJD_OFFSET))(this);
		}

		::System::Boolean IDBHEIBEGBA(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_IDBHEIBEGBA_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_EXECUTE_OFFSET))(this);
		}

		::System::Void HANMDNLGPCH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_HANMDNLGPCH_OFFSET))(this, a1);
		}

		::System::Void BGAHGFIDKGL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_BGAHGFIDKGL_OFFSET))(this, a1);
		}

		::System::Void JOACGNDEHOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_JOACGNDEHOE_OFFSET))(this, a1);
		}

		::System::Void HPNHBGEOGPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_HPNHBGEOGPO_OFFSET))(this, a1);
		}

		::System::Void AFFKMEFJOBE(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_AFFKMEFJOBE_OFFSET))(this, a1);
		}

		::System::Void OMMFECAPJCF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_OMMFECAPJCF_OFFSET))(this, a1);
		}

		::System::Single KDAHLMIDOOL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_KDAHLMIDOOL_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion CEKNCHLEEDO(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_CEKNCHLEEDO_OFFSET))(this, a1);
		}

		::System::Void KHADHLCEFBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_KHADHLCEFBD_OFFSET))(this);
		}

		::System::Void POCBMNKPLLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_POCBMNKPLLN_OFFSET))(this, a1);
		}

		::System::Int32 JIKDLBADPDP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_JIKDLBADPDP_OFFSET))(this, a1);
		}

		::System::Int32 GPDGMNJDHMP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_GPDGMNJDHMP_OFFSET))(this, a1);
		}

		::System::Void JDIFKBJDEMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_JDIFKBJDEMJ_OFFSET))(this);
		}

		::System::Single BGPOJDDJBFJ(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_BGPOJDDJBFJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACLGLHPGOJB(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_ACLGLHPGOJB_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineFramingTransposer* DOACKMPDPAG(::INMMPMDELKE* a1, ::Cinemachine::CinemachineVirtualCamera* a2)
		{
			return ((::Cinemachine::CinemachineFramingTransposer*(*)(::PVOID, ::INMMPMDELKE*, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_DOACKMPDPAG_OFFSET))(this, a1, a2);
		}

		::System::Void FNIOIPJMPML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_FNIOIPJMPML_OFFSET))(this);
		}

		::System::Void IOLMJCAONGK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_IOLMJCAONGK_OFFSET))(this, a1);
		}

		::System::Void NCAINBJMGOG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NCAINBJMGOG_OFFSET))(this, a1);
		}

		::System::Void JMCJAOHJDNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_JMCJAOHJDNI_OFFSET))(this);
		}

		::System::Void JPBOBIBAHBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_JPBOBIBAHBG_OFFSET))(this);
		}

		::System::Void HMFMKJLCKAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_HMFMKJLCKAL_OFFSET))(this);
		}

		::System::Void HMPPHGDLHPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_HMPPHGDLHPM_OFFSET))(this);
		}

		::UnityEngine::Vector3 JJEAAANKPDF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_JJEAAANKPDF_OFFSET))(this);
		}

		::System::Void OLOOEICBJHI(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_OLOOEICBJHI_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 HPJFDJKPJCO(::Cinemachine::CinemachineFramingTransposer* a1, ::Cinemachine::LensSettings a2)
		{
			return ((::UnityEngine::Vector3(*)(::Cinemachine::CinemachineFramingTransposer*, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_HPJFDJKPJCO_OFFSET))(a1, a2);
		}

		::System::Void IGALPIKOMGF(::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_IGALPIKOMGF_OFFSET))(this, a1);
		}

		::System::Void ABDPBOCAKPF(::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_ABDPBOCAKPF_OFFSET))(this, a1);
		}

		::System::Void ABDPBOCAKPF_1(::System::Action_3<::INMMPMDELKE*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::INMMPMDELKE*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_ABDPBOCAKPF_1_OFFSET))(this, a1);
		}

		::System::Void MGMCPOFFHJH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_MGMCPOFFHJH_OFFSET))(this, a1);
		}

		::System::Void INAKNEBKEFC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_INAKNEBKEFC_OFFSET))(this, a1);
		}

		::LKGIMGKIFFI_OMODLICFCFD EHDADHEFPCI(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1)
		{
			return ((::LKGIMGKIFFI_OMODLICFCFD(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_EHDADHEFPCI_OFFSET))(this, a1);
		}

		::System::Void DEODHIMGCJI(::System::Int32 a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_DEODHIMGCJI_OFFSET))(this, a1, a2);
		}

		::System::Void IJEOGHKFHIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_IJEOGHKFHIO_OFFSET))(this);
		}

		::System::Void CELCPPHHJIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_CELCPPHHJIO_OFFSET))(this);
		}

		::System::Void OFNLLHPHLHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_OFNLLHPHLHE_OFFSET))(this);
		}

		::System::Void LHFAFJLIDPC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_LHFAFJLIDPC_OFFSET))(this, a1);
		}

		::System::Void PEMGCGADMCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_PEMGCGADMCD_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* GNJKLKNOJLN()
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_GNJKLKNOJLN_OFFSET))(this);
		}

		::System::Boolean GECJJFBFJEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_GECJJFBFJEJ_OFFSET))(this);
		}

		::System::Boolean ANCCCMIGBNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_ANCCCMIGBNJ_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* GPICLGLBJCN()
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_GPICLGLBJCN_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMoveConfig* DPKLPMANKJF()
		{
			return ((::RPG::GameCore::FiveDimMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_DPKLPMANKJF_OFFSET))(this);
		}

		::System::Void MIJMOEJCBEG(::System::Single a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_MIJMOEJCBEG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LHDAJBEMIBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_LHDAJBEMIBM_OFFSET))(this);
		}

		::System::Void PFACDAMNFAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_PFACDAMNFAH_OFFSET))(this);
		}

		::System::Void FGGCANGOOEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_FGGCANGOOEG_OFFSET))(this);
		}

		::System::Void DACKMPMDEMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_DACKMPMDEMJ_OFFSET))(this);
		}

		::System::Single CNAIGNDOBGE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_CNAIGNDOBGE_OFFSET))(this);
		}

		::System::Void FLHLHJBMICF(::System::Single a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_FLHLHJBMICF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IFGMJFIFLHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_IFGMJFIFLHA_OFFSET))(this);
		}

		::System::Void NHAFADGLNOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NHAFADGLNOF_OFFSET))(this);
		}

		::System::Void OHOMHHAPHNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_OHOMHHAPHNA_OFFSET))(this);
		}

		::System::Int32 __ApplyStackCameraPriorities_b__22_0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___APPLYSTACKCAMERAPRIORITIES_B__22_0_OFFSET))(this, a1, a2);
		}

		::System::Void _Execute_b__38_2(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI__EXECUTE_B__38_2_OFFSET))(this, a1, a2);
		}

		::System::Void __NormalizeStackFollowCameraTransposers_b__61_0(::Cinemachine::CinemachineVirtualCamera* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___NORMALIZESTACKFOLLOWCAMERATRANSPOSERS_B__61_0_OFFSET))(this, a1, a2);
		}

	};
