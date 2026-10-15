#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/PHDPAKFFLOK_TestPlanesResults.h"
#include "unitysdk/RPG/GameCore/CameraScreenScopeMode.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BPMLCFOHMDB;
class FCIOOGOLADO;
class JIAJFGCHLJE;
class PMCCDNCDGJJ;
namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class ICameraFightState; }
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define PHDPAKFFLOK_AHJFBGCLDIP_OFFSET UNITYSDK_OFFSET(0xC242DF0)
#define PHDPAKFFLOK_AILBOOHLADI_OFFSET UNITYSDK_OFFSET(0xC23C100)
#define PHDPAKFFLOK_BDCKMAAACEP_OFFSET UNITYSDK_OFFSET(0xC23EA50)
#define PHDPAKFFLOK_BMHHEFIFBGM_OFFSET UNITYSDK_OFFSET(0xC244E20)
#define PHDPAKFFLOK_BMIPHCCOHFE_OFFSET UNITYSDK_OFFSET(0xC23CDB0)
#define PHDPAKFFLOK_BPBFEHBOOJJ_OFFSET UNITYSDK_OFFSET(0xC23F870)
#define PHDPAKFFLOK_CCTOR_OFFSET UNITYSDK_OFFSET(0xC246B60)
#define PHDPAKFFLOK_CDNHFIACECP_OFFSET UNITYSDK_OFFSET(0xC246840)
#define PHDPAKFFLOK_CLDFECAFHMD_OFFSET UNITYSDK_OFFSET(0xC244310)
#define PHDPAKFFLOK_CLIPIDMMKHA_OFFSET UNITYSDK_OFFSET(0xC23FE90)
#define PHDPAKFFLOK_DCCPNILHIHI_OFFSET UNITYSDK_OFFSET(0xC23E500)
#define PHDPAKFFLOK_DHDLGLGDJBI_OFFSET UNITYSDK_OFFSET(0xC244670)
#define PHDPAKFFLOK_DJIFABCJNGE_OFFSET UNITYSDK_OFFSET(0xC23F820)
#define PHDPAKFFLOK_DOKJFOOMBAC_OFFSET UNITYSDK_OFFSET(0xC23BC40)
#define PHDPAKFFLOK_EBOMHMMAFKP_OFFSET UNITYSDK_OFFSET(0xC23D4B0)
#define PHDPAKFFLOK_EDDHDKFMEDK_OFFSET UNITYSDK_OFFSET(0xC2451B0)
#define PHDPAKFFLOK_EDLIHPLDPLB_OFFSET UNITYSDK_OFFSET(0xC23D830)
#define PHDPAKFFLOK_EEJJDDNINDP_OFFSET UNITYSDK_OFFSET(0xC245720)
#define PHDPAKFFLOK_EGMOFPFGCPE_OFFSET UNITYSDK_OFFSET(0xC23BE00)
#define PHDPAKFFLOK_FFGOGLOLAKD_OFFSET UNITYSDK_OFFSET(0xC23FA80)
#define PHDPAKFFLOK_HJNHHIHOIJB_OFFSET UNITYSDK_OFFSET(0xC23E660)
#define PHDPAKFFLOK_HKLEBOJFBJF_OFFSET UNITYSDK_OFFSET(0xC240010)
#define PHDPAKFFLOK_HLNLLODGCEO_1_OFFSET UNITYSDK_OFFSET(0xC240920)
#define PHDPAKFFLOK_HLNLLODGCEO_OFFSET UNITYSDK_OFFSET(0xC240870)
#define PHDPAKFFLOK_HMNCIGMBPFO_OFFSET UNITYSDK_OFFSET(0xC23CC50)
#define PHDPAKFFLOK_IAEMCNOMACK_OFFSET UNITYSDK_OFFSET(0xC245BB0)
#define PHDPAKFFLOK_IMCECPDAODJ_OFFSET UNITYSDK_OFFSET(0xC23EE60)
#define PHDPAKFFLOK_IPNDKACKONB_OFFSET UNITYSDK_OFFSET(0xC23C950)
#define PHDPAKFFLOK_JBNLFKJLIAD_OFFSET UNITYSDK_OFFSET(0xC245E30)
#define PHDPAKFFLOK_JEBMFKENMGC_OFFSET UNITYSDK_OFFSET(0xC23E8F0)
#define PHDPAKFFLOK_JJNDKOEMBJJ_OFFSET UNITYSDK_OFFSET(0xC243B00)
#define PHDPAKFFLOK_JKCODJPCNCC_OFFSET UNITYSDK_OFFSET(0xC243F50)
#define PHDPAKFFLOK_JLFEIMKOEFF_OFFSET UNITYSDK_OFFSET(0xC244830)
#define PHDPAKFFLOK_JLPEBIDKAMF_OFFSET UNITYSDK_OFFSET(0xC242230)
#define PHDPAKFFLOK_JMKCDLFBFNE_OFFSET UNITYSDK_OFFSET(0xC241D40)
#define PHDPAKFFLOK_KICGIENIJNJ_1_OFFSET UNITYSDK_OFFSET(0xC23D290)
#define PHDPAKFFLOK_KICGIENIJNJ_OFFSET UNITYSDK_OFFSET(0xC23D000)
#define PHDPAKFFLOK_KIKFIELBEOH_OFFSET UNITYSDK_OFFSET(0xC23DD10)
#define PHDPAKFFLOK_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xC23F270)
#define PHDPAKFFLOK_KNKGGFDPLPM_OFFSET UNITYSDK_OFFSET(0xC2416A0)
#define PHDPAKFFLOK_LDHMALFDNGM_OFFSET UNITYSDK_OFFSET(0xC23F060)
#define PHDPAKFFLOK_LFDMPLFHPCG_OFFSET UNITYSDK_OFFSET(0xC244FB0)
#define PHDPAKFFLOK_LGDHDGNHNIF_OFFSET UNITYSDK_OFFSET(0xC2464D0)
#define PHDPAKFFLOK_LIPNIGAFICE_OFFSET UNITYSDK_OFFSET(0xC243980)
#define PHDPAKFFLOK_LNIDNIDPFPM_OFFSET UNITYSDK_OFFSET(0xC23E7A0)
#define PHDPAKFFLOK_LNPOHLKNABK_OFFSET UNITYSDK_OFFSET(0xC2415C0)
#define PHDPAKFFLOK_LOJNAFNONMP_OFFSET UNITYSDK_OFFSET(0xC23F2D0)
#define PHDPAKFFLOK_MCCEKKANIEA_OFFSET UNITYSDK_OFFSET(0xC23FCB0)
#define PHDPAKFFLOK_MCNGJFOADFK_1_OFFSET UNITYSDK_OFFSET(0xC242400)
#define PHDPAKFFLOK_MCNGJFOADFK_OFFSET UNITYSDK_OFFSET(0xC242320)
#define PHDPAKFFLOK_MDDHIBALEOA_1_OFFSET UNITYSDK_OFFSET(0xC244540)
#define PHDPAKFFLOK_MDDHIBALEOA_OFFSET UNITYSDK_OFFSET(0xC2444D0)
#define PHDPAKFFLOK_MHNCIMNFDAF_OFFSET UNITYSDK_OFFSET(0xC2407D0)
#define PHDPAKFFLOK_MKAIEHNFJDK_OFFSET UNITYSDK_OFFSET(0xC240BA0)
#define PHDPAKFFLOK_NDGHAJNPHFP_OFFSET UNITYSDK_OFFSET(0xC23BAF0)
#define PHDPAKFFLOK_NDLDHOMPEIG_OFFSET UNITYSDK_OFFSET(0xC23D660)
#define PHDPAKFFLOK_NDNFNGJBONF_OFFSET UNITYSDK_OFFSET(0xC244700)
#define PHDPAKFFLOK_NGOFEMDCHBL_OFFSET UNITYSDK_OFFSET(0xC245830)
#define PHDPAKFFLOK_NHGHHLFBDCN_OFFSET UNITYSDK_OFFSET(0xC245480)
#define PHDPAKFFLOK_NIFIBGIKKLE_OFFSET UNITYSDK_OFFSET(0xC242D40)
#define PHDPAKFFLOK_NPKJMNEIOPF_OFFSET UNITYSDK_OFFSET(0xC2453F0)
#define PHDPAKFFLOK_OHIOILIMHDG_OFFSET UNITYSDK_OFFSET(0xC2447E0)
#define PHDPAKFFLOK_OKKOLMJFKOG_OFFSET UNITYSDK_OFFSET(0xC23C420)
#define PHDPAKFFLOK_OOEFJPOCKPH_OFFSET UNITYSDK_OFFSET(0xC23EAB0)
#define PHDPAKFFLOK_PBBHFIMOLJP_OFFSET UNITYSDK_OFFSET(0xC23CAD0)
#define PHDPAKFFLOK_PBMOGKKBBHB_OFFSET UNITYSDK_OFFSET(0xC23FC00)
#define PHDPAKFFLOK_PDBAEKMIGHN_OFFSET UNITYSDK_OFFSET(0xC23BD60)
#define PHDPAKFFLOK_PKGGDDMKMMO_OFFSET UNITYSDK_OFFSET(0xC245E80)
#define PHDPAKFFLOK_PMJLBGDHCHJ_OFFSET UNITYSDK_OFFSET(0xC245DF0)

inline static constexpr unsigned int PHDPAKFFLOK_TypeDefinitionIndex = 69695;

	class PHDPAKFFLOK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CGPJGMAAHBL()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "PHDPAKFFLOK")->GetStaticField(0x6F500);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_JBDNOODOMBL()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "PHDPAKFFLOK")->GetStaticField(0x6F508);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_OLNGIAKCIFM()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "PHDPAKFFLOK")->GetStaticField(0x6F510);
		}

		// static const ::System::Object IDOIMMONNKK; // 0x0
		// static const ::System::Object KCNEPCKOAJB; // 0x0
		// static const ::System::Object CMGIGFEBMKN; // 0x0
		// static const ::System::Object KEHBDAHLPLI; // 0x0
		// static const ::System::Object AECJKJCOFNB; // 0x0
		// static const ::System::Object PLLAHJLGDIH; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHDPAKFFLOK_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 NDGHAJNPHFP(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_NDGHAJNPHFP_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 DOKJFOOMBAC(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_DOKJFOOMBAC_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 PDBAEKMIGHN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_PDBAEKMIGHN_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 EGMOFPFGCPE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_EGMOFPFGCPE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 OKKOLMJFKOG(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_OKKOLMJFKOG_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* IPNDKACKONB(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_IPNDKACKONB_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 AILBOOHLADI(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_AILBOOHLADI_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::AnimationCurve* PBBHFIMOLJP(::System::String* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_PBBHFIMOLJP_OFFSET))(a1);
		}

		static ::FCIOOGOLADO* HMNCIGMBPFO()
		{
			return ((::FCIOOGOLADO*(*)())((::PBYTE)hIl2Cpp + PHDPAKFFLOK_HMNCIGMBPFO_OFFSET))();
		}

		static ::UnityEngine::Vector3 BMIPHCCOHFE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_BMIPHCCOHFE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 KICGIENIJNJ(::RPG::Client::CameraDataAndFlags* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_KICGIENIJNJ_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 KICGIENIJNJ_1(::RPG::MQuaternion a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::MQuaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_KICGIENIJNJ_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 EBOMHMMAFKP(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::TeamType a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_EBOMHMMAFKP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 NDLDHOMPEIG(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::TeamType a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_NDLDHOMPEIG_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 EDLIHPLDPLB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_EDLIHPLDPLB_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 KIKFIELBEOH(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_KIKFIELBEOH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 DCCPNILHIHI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_DCCPNILHIHI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::VCameraConfig* HJNHHIHOIJB(::RPG::GameCore::VCameraConfig* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::VCameraConfig*(*)(::RPG::GameCore::VCameraConfig*, ::System::String*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_HJNHHIHOIJB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::CRPVirtualCameraConfigList* LNIDNIDPFPM(::System::Func_2<::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameEntity*>* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::CRPVirtualCameraConfigList*(*)(::System::Func_2<::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameEntity*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_LNIDNIDPFPM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JEBMFKENMGC(::RPG::GameCore::CRPVirtualCameraConfigList* a1, ::System::Func_2<::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::CRPVirtualCameraConfigList*, ::System::Func_2<::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_JEBMFKENMGC_OFFSET))(a1, a2);
		}

		static ::System::Void BDCKMAAACEP(::RPG::GameCore::CRPVirtualCameraConfigList* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CRPVirtualCameraConfigList*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_BDCKMAAACEP_OFFSET))(a1);
		}

		static ::System::Boolean OOEFJPOCKPH(::Cinemachine::CinemachineBrain* a1, ::BPMLCFOHMDB* a2)
		{
			return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::BPMLCFOHMDB*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_OOEFJPOCKPH_OFFSET))(a1, a2);
		}

		static ::System::Void IMCECPDAODJ(::Cinemachine::CinemachineBrain* a1, ::RPG::GameCore::VCameraBlend* a2)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_IMCECPDAODJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean KKKIONIDKFA(::RPG::GameCore::FloatCurve* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_KKKIONIDKFA_OFFSET))(a1);
		}

		static ::UnityEngine::AnimationCurve* LDHMALFDNGM(::RPG::GameCore::VCameraBlend* a1, ::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* a2)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::VCameraBlend*, ::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_LDHMALFDNGM_OFFSET))(a1, a2);
		}

		static ::UnityEngine::AnimationCurve* LOJNAFNONMP(::RPG::GameCore::VCameraBlendType a1, ::System::String* a2)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::VCameraBlendType, ::System::String*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_LOJNAFNONMP_OFFSET))(a1, a2);
		}

		static ::System::Void BPBFEHBOOJJ(::Cinemachine::CinemachineBrain* a1, ::RPG::GameCore::VCameraBlend* a2)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_BPBFEHBOOJJ_OFFSET))(a1, a2);
		}

		static ::Cinemachine::CinemachineBlendDefinition_Style DJIFABCJNGE(::RPG::GameCore::VCameraBlendType a1)
		{
			return ((::Cinemachine::CinemachineBlendDefinition_Style(*)(::RPG::GameCore::VCameraBlendType))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_DJIFABCJNGE_OFFSET))(a1);
		}

		static ::UnityEngine::AnimationCurve* FFGOGLOLAKD(::System::String* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_FFGOGLOLAKD_OFFSET))(a1);
		}

		static ::RPG::GameCore::FloatCurve* PBMOGKKBBHB(::System::String* a1)
		{
			return ((::RPG::GameCore::FloatCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_PBMOGKKBBHB_OFFSET))(a1);
		}

		static ::System::Boolean MCCEKKANIEA(::Cinemachine::CinemachineBrain* a1, ::BPMLCFOHMDB* a2)
		{
			return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::BPMLCFOHMDB*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_MCCEKKANIEA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Matrix4x4 CLIPIDMMKHA(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::System::Single))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_CLIPIDMMKHA_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 HKLEBOJFBJF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_HKLEBOJFBJF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single MHNCIMNFDAF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_MHNCIMNFDAF_OFFSET))(a1);
		}

		static ::PHDPAKFFLOK_TestPlanesResults HLNLLODGCEO(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Bounds a2)
		{
			return ((::PHDPAKFFLOK_TestPlanesResults(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_HLNLLODGCEO_OFFSET))(a1, a2);
		}

		static ::PHDPAKFFLOK_TestPlanesResults HLNLLODGCEO_1(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::PHDPAKFFLOK_TestPlanesResults(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_HLNLLODGCEO_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MKAIEHNFJDK(::UnityEngine::Matrix4x4 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::System::Object*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_MKAIEHNFJDK_OFFSET))(a1, a2);
		}

		static ::System::Void LNPOHLKNABK(::UnityEngine::Plane a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::Plane, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_LNPOHLKNABK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean KNKGGFDPLPM(::System::Object* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_KNKGGFDPLPM_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean JMKCDLFBFNE(::System::Object* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_JMKCDLFBFNE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean JLPEBIDKAMF(::System::Object* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_JLPEBIDKAMF_OFFSET))(a1, a2);
		}

		static ::System::Void MCNGJFOADFK(::PMCCDNCDGJJ* a1)
		{
			return ((::System::Void(*)(::PMCCDNCDGJJ*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_MCNGJFOADFK_OFFSET))(a1);
		}

		static ::System::Void MCNGJFOADFK_1(::RPG::GameCore::VCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Nullable_1<::RPG::MVector3> a6, ::RPG::GameCore::GameEntity* a7)
		{
			return ((::System::Void(*)(::RPG::GameCore::VCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::RPG::MVector3>, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_MCNGJFOADFK_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void NIFIBGIKKLE(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
		{
			return ((::System::Void(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_NIFIBGIKKLE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntityList* AHJFBGCLDIP(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2, ::RPG::GameCore::TurnState a3, ::RPG::GameCore::TurnBasedGameMode* a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnBasedGameMode*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_AHJFBGCLDIP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean LIPNIGAFICE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnState a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_LIPNIGAFICE_OFFSET))(a1, a2);
		}

		static ::System::Boolean JJNDKOEMBJJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_JJNDKOEMBJJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean JKCODJPCNCC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_JKCODJPCNCC_OFFSET))(a1, a2);
		}

		static ::System::Boolean CLDFECAFHMD(::RPG::Client::CameraDataAndFlags* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_CLDFECAFHMD_OFFSET))(a1);
		}

		static ::System::Boolean MDDHIBALEOA(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_MDDHIBALEOA_OFFSET))(a1, a2);
		}

		static ::System::Boolean MDDHIBALEOA_1(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_MDDHIBALEOA_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DHDLGLGDJBI(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_DHDLGLGDJBI_OFFSET))(a1, a2);
		}

		static ::System::Void NDNFNGJBONF(::RPG::GameCore::VCameraFreelook3rdConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::VCameraFreelook3rdConfig*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_NDNFNGJBONF_OFFSET))(a1);
		}

		static ::System::Boolean OHIOILIMHDG(::RPG::GameCore::VCameraState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::VCameraState))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_OHIOILIMHDG_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 JLFEIMKOEFF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillCharacterComponent* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_JLFEIMKOEFF_OFFSET))(a1, a2, a3);
		}

		static ::JIAJFGCHLJE* BMHHEFIFBGM(::UnityEngine::Camera* a1)
		{
			return ((::JIAJFGCHLJE*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_BMHHEFIFBGM_OFFSET))(a1);
		}

		static ::System::Boolean LFDMPLFHPCG(::UnityEngine::Camera* a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_LFDMPLFHPCG_OFFSET))(a1, a2);
		}

		static ::System::Boolean EDDHDKFMEDK(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_EDDHDKFMEDK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean NPKJMNEIOPF(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_NPKJMNEIOPF_OFFSET))(a1);
		}

		static ::System::Boolean NHGHHLFBDCN(::UnityEngine::Camera* a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_NHGHHLFBDCN_OFFSET))(a1, a2);
		}

		static ::System::Boolean EEJJDDNINDP(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Bounds a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_EEJJDDNINDP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NGOFEMDCHBL(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_NGOFEMDCHBL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void IAEMCNOMACK(::UnityEngine::Camera* a1, ::Il2CppArray<::UnityEngine::Plane>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_IAEMCNOMACK_OFFSET))(a1, a2);
		}

		static ::System::Void PMJLBGDHCHJ(::RPG::Client::ICameraFightState* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ICameraFightState*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_PMJLBGDHCHJ_OFFSET))(a1);
		}

		static ::System::Void JBNLFKJLIAD(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_JBNLFKJLIAD_OFFSET))(a1, a2);
		}

		static ::System::Boolean PKGGDDMKMMO(::UnityEngine::Camera* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::CameraScreenScopeMode a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CameraScreenScopeMode, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_PKGGDDMKMMO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean LGDHDGNHNIF(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::CameraScreenScopeMode a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CameraScreenScopeMode, ::System::Boolean))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_LGDHDGNHNIF_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean CDNHFIACECP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + PHDPAKFFLOK_CDNHFIACECP_OFFSET))(a1, a2, a3, a4);
		}

	};
