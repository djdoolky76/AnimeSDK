#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHAJLEAEILO.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EOAHFDPLGGJ;
class FDLGJMFLCHG;
class FHNLCIIHLIH;
class PECIOCLHHOL_ADOEJBOBPCP;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class ConfigUILightParam; }
namespace MoleMole { class MonoBasePerpStage; }
namespace MoleMole { class MonoCurveMoveObject; }
namespace MoleMole { class MonoDestructionObject; }
namespace MoleMole { class MonoEntity; }
namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoInterestPoint; }
namespace MoleMole { class MonoMainCityObject; }
namespace MoleMole { class MonoPartySceneObject; }
namespace MoleMole { class MonoSceneMoveObject; }
namespace MoleMole { class MonoSimpleRigidbodyObject; }
namespace MoleMole { class MonoSpawnMonsterConfig; }
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole { class MonoStageEnv; }
namespace MoleMole { class MonoVehicleObject; }
namespace MoleMole { class MonoWayPath; }
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace MoleMole::Config { class StageEntry; }
namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define PECIOCLHHOL_ABINIJMMGCE_OFFSET UNITYSDK_OFFSET(0x150BD960)
#define PECIOCLHHOL_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x150B8CD0)
#define PECIOCLHHOL_AKEBENOFIGI_OFFSET UNITYSDK_OFFSET(0x150BD110)
#define PECIOCLHHOL_ANIDFIIDGCB_OFFSET UNITYSDK_OFFSET(0x150B9670)
#define PECIOCLHHOL_ANOMFKDAAPE_OFFSET UNITYSDK_OFFSET(0x150BD480)
#define PECIOCLHHOL_BAJAMLJDALO_OFFSET UNITYSDK_OFFSET(0x150BDB00)
#define PECIOCLHHOL_BFAPCIJHNBG_OFFSET UNITYSDK_OFFSET(0x150B9450)
#define PECIOCLHHOL_BKAABGNLDMK_OFFSET UNITYSDK_OFFSET(0x150B9CF0)
#define PECIOCLHHOL_CFCCPJBIFCP_OFFSET UNITYSDK_OFFSET(0x150B9E80)
#define PECIOCLHHOL_CGAOJDENOLL_OFFSET UNITYSDK_OFFSET(0x150BDFC0)
#define PECIOCLHHOL_CGFFDCMKJMD_OFFSET UNITYSDK_OFFSET(0x150B9120)
#define PECIOCLHHOL_CGIKIHPHLLM_OFFSET UNITYSDK_OFFSET(0x150BBEA0)
#define PECIOCLHHOL_CHIJPDNHHNK_OFFSET UNITYSDK_OFFSET(0x150BA260)
#define PECIOCLHHOL_CJGOFFBOGNE_OFFSET UNITYSDK_OFFSET(0x150BAC00)
#define PECIOCLHHOL_DGLHNLNLNIL_OFFSET UNITYSDK_OFFSET(0x150BA970)
#define PECIOCLHHOL_DIAMAIONKNH_OFFSET UNITYSDK_OFFSET(0x150BA750)
#define PECIOCLHHOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150B8D50)
#define PECIOCLHHOL_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x150B8D10)
#define PECIOCLHHOL_EIMPBBOGMAN_OFFSET UNITYSDK_OFFSET(0x150BCBC0)
#define PECIOCLHHOL_EJKJEMODDOP_OFFSET UNITYSDK_OFFSET(0x150BD7C0)
#define PECIOCLHHOL_ENLFPOLMHMP_OFFSET UNITYSDK_OFFSET(0x150BC850)
#define PECIOCLHHOL_FFBIJLIHFFO_OFFSET UNITYSDK_OFFSET(0x150BC3C0)
#define PECIOCLHHOL_FMFFCPPNEDK_OFFSET UNITYSDK_OFFSET(0x150BABF0)
#define PECIOCLHHOL_FNMEHPHHKEB_OFFSET UNITYSDK_OFFSET(0x150BDE30)
#define PECIOCLHHOL_GDBBLLBPFGK_OFFSET UNITYSDK_OFFSET(0x150BC9E0)
#define PECIOCLHHOL_GGIFKBLOJOD_OFFSET UNITYSDK_OFFSET(0x150B9870)
#define PECIOCLHHOL_GJGIAHAPBPO_OFFSET UNITYSDK_OFFSET(0x150BAE00)
#define PECIOCLHHOL_GKLJINIHIPB_1_OFFSET UNITYSDK_OFFSET(0x150BD860)
#define PECIOCLHHOL_GKLJINIHIPB_OFFSET UNITYSDK_OFFSET(0x150BB7D0)
#define PECIOCLHHOL_GNHLGGKLOLC_OFFSET UNITYSDK_OFFSET(0x150BD2E0)
#define PECIOCLHHOL_HDPNLDOAAPB_OFFSET UNITYSDK_OFFSET(0x150BE6B0)
#define PECIOCLHHOL_HGEIICNNCII_OFFSET UNITYSDK_OFFSET(0x150B8DE0)
#define PECIOCLHHOL_HKLGODIBKEE_OFFSET UNITYSDK_OFFSET(0x150B9440)
#define PECIOCLHHOL_HNPKDCFKJPM_OFFSET UNITYSDK_OFFSET(0x150B92A0)
#define PECIOCLHHOL_HOLDBFEAGOJ_OFFSET UNITYSDK_OFFSET(0x150BD470)
#define PECIOCLHHOL_HOPIGIEMFIB_OFFSET UNITYSDK_OFFSET(0x150BB6F0)
#define PECIOCLHHOL_IAKDCGCKJKI_OFFSET UNITYSDK_OFFSET(0x150BA590)
#define PECIOCLHHOL_IBLMGDJDPMM_OFFSET UNITYSDK_OFFSET(0x150BC230)
#define PECIOCLHHOL_INDMCLNMION_OFFSET UNITYSDK_OFFSET(0x150B99F0)
#define PECIOCLHHOL_IOEOCGDPBDP_OFFSET UNITYSDK_OFFSET(0x150BAF30)
#define PECIOCLHHOL_JCKJEDFFAPI_OFFSET UNITYSDK_OFFSET(0x150BD950)
#define PECIOCLHHOL_JIIONJAKEGO_OFFSET UNITYSDK_OFFSET(0x150B8F80)
#define PECIOCLHHOL_JMKDFILKFEN_OFFSET UNITYSDK_OFFSET(0x150BA5A0)
#define PECIOCLHHOL_KCEJMKBMNEK_OFFSET UNITYSDK_OFFSET(0x150BAA60)
#define PECIOCLHHOL_KEKAGBPNHPB_OFFSET UNITYSDK_OFFSET(0x150BCB70)
#define PECIOCLHHOL_KGOKLLHFCMK_OFFSET UNITYSDK_OFFSET(0x150BAF20)
#define PECIOCLHHOL_LCMGFNFAFLJ_OFFSET UNITYSDK_OFFSET(0x150BCDA0)
#define PECIOCLHHOL_LCPNOGFHLFM_OFFSET UNITYSDK_OFFSET(0x150BA8F0)
#define PECIOCLHHOL_LDFMHKIAPEJ_OFFSET UNITYSDK_OFFSET(0x150B9660)
#define PECIOCLHHOL_LGFMJDCILIB_OFFSET UNITYSDK_OFFSET(0x150BAF80)
#define PECIOCLHHOL_LKCNECEJMLE_OFFSET UNITYSDK_OFFSET(0x150B8D90)
#define PECIOCLHHOL_MKFLGDBMEML_OFFSET UNITYSDK_OFFSET(0x150BBCA0)
#define PECIOCLHHOL_MKHJKIDGLBC_OFFSET UNITYSDK_OFFSET(0x150B9680)
#define PECIOCLHHOL_MMMAGALNODJ_OFFSET UNITYSDK_OFFSET(0x150BD7B0)
#define PECIOCLHHOL_NCMMKLPIKIP_OFFSET UNITYSDK_OFFSET(0x150BDCA0)
#define PECIOCLHHOL_NHKBBFPODBG_OFFSET UNITYSDK_OFFSET(0x150BD100)
#define PECIOCLHHOL_NJOCJIGGABH_OFFSET UNITYSDK_OFFSET(0x150BA400)
#define PECIOCLHHOL_NLDFKJAKFIC_OFFSET UNITYSDK_OFFSET(0x150BD620)
#define PECIOCLHHOL_OCBOOOBDACI_OFFSET UNITYSDK_OFFSET(0x150BCF60)
#define PECIOCLHHOL_OENHDBFEMGK_OFFSET UNITYSDK_OFFSET(0x150B9600)
#define PECIOCLHHOL_ONBFBKPOEKD_OFFSET UNITYSDK_OFFSET(0x150BD970)
#define PECIOCLHHOL_ONCREATE_OFFSET UNITYSDK_OFFSET(0x150B8C90)
#define PECIOCLHHOL_PDKAIIBFDPJ_OFFSET UNITYSDK_OFFSET(0x150BACA0)
#define PECIOCLHHOL_PGGCHLBJIKI_OFFSET UNITYSDK_OFFSET(0x150BC760)
#define PECIOCLHHOL_PMKBCCGBJIC_OFFSET UNITYSDK_OFFSET(0x150BC580)
#define PECIOCLHHOL__CTOR_OFFSET UNITYSDK_OFFSET(0x150B8BC0)

inline static constexpr unsigned int PECIOCLHHOL_TypeDefinitionIndex = 91717;

class PECIOCLHHOL
{
public:
	::System::Action_1<::MoleMole::Battle::Entity*>* MMLOOANNJJB; // 0x10
	::MoleMole::MonoBasePerpStage* DCDGDBFCPEJ; // 0x18
	::UnityEngine::Light* NDEOLCBFLJM; // 0x20
	::UnityEngine::Transform* OLHNIBECKOD; // 0x28
	::MoleMole::ConfigUILightParam* APAMNDIPLGO; // 0x30
	::UnityEngine::Light* KFEDPPIJFME; // 0x38
	::System::String* LLFBMGNHOPN; // 0x40
	::UnityEngine::Rendering::Volume* OCLBOOAMJPH; // 0x48
	::MoleMole::Config::SceneConfigRuntimeData* _OFIMJDOHJCC_k__BackingField; // 0x50
	::MoleMole::Battle::Entity* GNBDPOMDHGN; // 0x58
	::System::String* JJKKEIGDJOE; // 0x60
	::PECIOCLHHOL_ADOEJBOBPCP* _NCMKPFJOHIE_k__BackingField; // 0x68
	::MoleMole::MonoStageEnv* EHFGILKJFDF; // 0x70
	::System::Action* CGCDEGBIMIA; // 0x78
	::MoleMole::Config::StageEntry* _ENJDLFONPBF_k__BackingField; // 0x80
	::JHAJLEAEILO DGNLKEFDBCB; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_ONCREATE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_DISPOSE_OFFSET))(this);
	}

	::System::Boolean LKCNECEJMLE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_LKCNECEJMLE_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoInterestPoint*>* HGEIICNNCII()
	{
		return ((::Il2CppArray<::MoleMole::MonoInterestPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_HGEIICNNCII_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoEntity*>* JIIONJAKEGO()
	{
		return ((::Il2CppArray<::MoleMole::MonoEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_JIIONJAKEGO_OFFSET))(this);
	}

	::System::Void CGFFDCMKJMD(::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>* DJOMKJPCGDA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_CGFFDCMKJMD_OFFSET))(this, DJOMKJPCGDA);
	}

	::Il2CppArray<::MoleMole::MonoVehicleObject*>* HNPKDCFKJPM()
	{
		return ((::Il2CppArray<::MoleMole::MonoVehicleObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_HNPKDCFKJPM_OFFSET))(this);
	}

	::MoleMole::MonoStageEnv* HKLGODIBKEE()
	{
		return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_HKLGODIBKEE_OFFSET))(this);
	}

	::MoleMole::MonoEntityModelModifier* BFAPCIJHNBG(::System::String* DFCJFPNCLEO)
	{
		return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_BFAPCIJHNBG_OFFSET))(this, DFCJFPNCLEO);
	}

	::System::Void OENHDBFEMGK(::MoleMole::Config::SceneConfigRuntimeData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_OENHDBFEMGK_OFFSET))(this, LJBPECKCCEA);
	}

	::System::String* LDFMHKIAPEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_LDFMHKIAPEJ_OFFSET))(this);
	}

	::MoleMole::MonoBasePerpStage* ANIDFIIDGCB()
	{
		return ((::MoleMole::MonoBasePerpStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_ANIDFIIDGCB_OFFSET))(this);
	}

	::System::Boolean MKHJKIDGLBC(::System::String* DALIIADBANO, ::System::Int32 ODIBJCGLPBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PECIOCLHHOL_MKHJKIDGLBC_OFFSET))(this, DALIIADBANO, ODIBJCGLPBM);
	}

	::MoleMole::MonoSpawnPoint* INDMCLNMION(::System::String* DFCJFPNCLEO, ::System::Boolean HCNGHODFBDG)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PECIOCLHHOL_INDMCLNMION_OFFSET))(this, DFCJFPNCLEO, HCNGHODFBDG);
	}

	::Cinemachine::CinemachineVirtualCamera* BKAABGNLDMK(::System::String* KONLMDBCDCK)
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_BKAABGNLDMK_OFFSET))(this, KONLMDBCDCK);
	}

	::System::Void CFCCPJBIFCP(::System::Int32 POOJDDDCAHJ, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_CFCCPJBIFCP_OFFSET))(this, POOJDDDCAHJ, KECKGDFIALJ);
	}

	::Il2CppArray<::MoleMole::MonoCurveMoveObject*>* CHIJPDNHHNK()
	{
		return ((::Il2CppArray<::MoleMole::MonoCurveMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_CHIJPDNHHNK_OFFSET))(this);
	}

	::MoleMole::MonoWayPath* NJOCJIGGABH(::System::String* JODGPNNHBHK)
	{
		return ((::MoleMole::MonoWayPath*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_NJOCJIGGABH_OFFSET))(this, JODGPNNHBHK);
	}

	::EOAHFDPLGGJ* GGIFKBLOJOD()
	{
		return ((::EOAHFDPLGGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GGIFKBLOJOD_OFFSET))(this);
	}

	::System::Void IAKDCGCKJKI(::MoleMole::Config::StageEntry* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_IAKDCGCKJKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MonoSpawnMonsterConfig* JMKDFILKFEN(::System::String* DFCJFPNCLEO)
	{
		return ((::MoleMole::MonoSpawnMonsterConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_JMKDFILKFEN_OFFSET))(this, DFCJFPNCLEO);
	}

	::Il2CppArray<::MoleMole::MonoDestructionObject*>* DIAMAIONKNH()
	{
		return ((::Il2CppArray<::MoleMole::MonoDestructionObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_DIAMAIONKNH_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>* LCPNOGFHLFM()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_LCPNOGFHLFM_OFFSET))(this);
	}

	::System::Void DGLHNLNLNIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_DGLHNLNLNIL_OFFSET))(this);
	}

	::FDLGJMFLCHG* KCEJMKBMNEK(::System::String* HIAIKHDFCLN)
	{
		return ((::FDLGJMFLCHG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_KCEJMKBMNEK_OFFSET))(this, HIAIKHDFCLN);
	}

	::UnityEngine::Light* FMFFCPPNEDK()
	{
		return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_FMFFCPPNEDK_OFFSET))(this);
	}

	::System::Boolean CJGOFFBOGNE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_CJGOFFBOGNE_OFFSET))(this);
	}

	::System::Void PDKAIIBFDPJ(::System::Int32 GNHEHOMMHPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PECIOCLHHOL_PDKAIIBFDPJ_OFFSET))(this, GNHEHOMMHPB);
	}

	::PECIOCLHHOL_ADOEJBOBPCP* GJGIAHAPBPO()
	{
		return ((::PECIOCLHHOL_ADOEJBOBPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GJGIAHAPBPO_OFFSET))(this);
	}

	::System::Void KGOKLLHFCMK(::PECIOCLHHOL_ADOEJBOBPCP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PECIOCLHHOL_ADOEJBOBPCP*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_KGOKLLHFCMK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IOEOCGDPBDP(::MoleMole::Config::StageEntry* HNMINGJFFPA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_IOEOCGDPBDP_OFFSET))(this, HNMINGJFFPA);
	}

	::System::Void LGFMJDCILIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_LGFMJDCILIB_OFFSET))(this);
	}

	::System::Boolean HOPIGIEMFIB(::System::String* JGIKDDCPKCA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_HOPIGIEMFIB_OFFSET))(this, JGIKDDCPKCA);
	}

	::System::Void GKLJINIHIPB(::MoleMole::Config::StageEntry* AAIJGGIEOGK, ::System::Boolean EIHPLGJHOPE, ::System::Boolean PJPDLAMDJGF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GKLJINIHIPB_OFFSET))(this, AAIJGGIEOGK, EIHPLGJHOPE, PJPDLAMDJGF);
	}

	::System::Void IBLMGDJDPMM(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PECIOCLHHOL_IBLMGDJDPMM_OFFSET))(this, CPHDDAGKHLB);
	}

	::MoleMole::SceneMark::SceneMarkNode* FFBIJLIHFFO(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_FFBIJLIHFFO_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Boolean PMKBCCGBJIC(::System::String* IHNFCAALLEH, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 ELHMOANKHFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PECIOCLHHOL_PMKBCCGBJIC_OFFSET))(this, IHNFCAALLEH, OHOGDOMNHNK, ELHMOANKHFM);
	}

	::UnityEngine::Vector3 PGGCHLBJIKI(::UnityEngine::Vector3 AKAGDEFAGJA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PECIOCLHHOL_PGGCHLBJIKI_OFFSET))(this, AKAGDEFAGJA);
	}

	::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* ENLFPOLMHMP(::System::String* GLBEOLEENIJ)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_ENLFPOLMHMP_OFFSET))(this, GLBEOLEENIJ);
	}

	::System::Collections::Generic::List_1<::System::String*>* GDBBLLBPFGK(::System::String* DFCJFPNCLEO)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GDBBLLBPFGK_OFFSET))(this, DFCJFPNCLEO);
	}

	::System::Void MKFLGDBMEML(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_MKFLGDBMEML_OFFSET))(this, EGEGIMGMJHN);
	}

	::Il2CppArray<::MoleMole::MonoPartySceneObject*>* EIMPBBOGMAN()
	{
		return ((::Il2CppArray<::MoleMole::MonoPartySceneObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_EIMPBBOGMAN_OFFSET))(this);
	}

	::System::Void LCMGFNFAFLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_LCMGFNFAFLJ_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoMainCityObject*>* OCBOOOBDACI()
	{
		return ((::Il2CppArray<::MoleMole::MonoMainCityObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_OCBOOOBDACI_OFFSET))(this);
	}

	::MoleMole::Config::SceneConfigRuntimeData* NHKBBFPODBG()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_NHKBBFPODBG_OFFSET))(this);
	}

	::System::Void AKEBENOFIGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_AKEBENOFIGI_OFFSET))(this);
	}

	::MoleMole::Battle::ColliderEventDispatcher* GNHLGGKLOLC(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GNHLGGKLOLC_OFFSET))(this, HIAIKHDFCLN);
	}

	::MoleMole::Config::StageEntry* HOLDBFEAGOJ()
	{
		return ((::MoleMole::Config::StageEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_HOLDBFEAGOJ_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>* ANOMFKDAAPE()
	{
		return ((::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_ANOMFKDAAPE_OFFSET))(this);
	}

	::System::Boolean NLDFKJAKFIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_NLDFKJAKFIC_OFFSET))(this);
	}

	::System::Void CGIKIHPHLLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_CGIKIHPHLLM_OFFSET))(this);
	}

	::System::Void MMMAGALNODJ(::MoleMole::Config::SceneConfigRuntimeData* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_MMMAGALNODJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJKJEMODDOP(::System::String* GNLHDJJEPDJ, ::System::Boolean PJPDLAMDJGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PECIOCLHHOL_EJKJEMODDOP_OFFSET))(this, GNLHDJJEPDJ, PJPDLAMDJGF);
	}

	::System::Void JCKJEDFFAPI(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_JCKJEDFFAPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::PECIOCLHHOL_ADOEJBOBPCP* ABINIJMMGCE()
	{
		return ((::PECIOCLHHOL_ADOEJBOBPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_ABINIJMMGCE_OFFSET))(this);
	}

	::MoleMole::MonoSpawnPoint* ONBFBKPOEKD(::System::String* GLBEOLEENIJ)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_ONBFBKPOEKD_OFFSET))(this, GLBEOLEENIJ);
	}

	::System::Void KEKAGBPNHPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_KEKAGBPNHPB_OFFSET))(this);
	}

	::Il2CppArray<::MoleMole::MonoSceneMoveObject*>* BAJAMLJDALO()
	{
		return ((::Il2CppArray<::MoleMole::MonoSceneMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_BAJAMLJDALO_OFFSET))(this);
	}

	::FHNLCIIHLIH* NCMMKLPIKIP(::System::String* HIAIKHDFCLN)
	{
		return ((::FHNLCIIHLIH*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_NCMMKLPIKIP_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void GKLJINIHIPB_1(::System::String* GNLHDJJEPDJ, ::System::Boolean EIHPLGJHOPE, ::System::Boolean PJPDLAMDJGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GKLJINIHIPB_1_OFFSET))(this, GNLHDJJEPDJ, EIHPLGJHOPE, PJPDLAMDJGF);
	}

	::FluffyUnderware::Curvy::CurvySpline* FNMEHPHHKEB(::System::String* HIAIKHDFCLN)
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PECIOCLHHOL_FNMEHPHHKEB_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void CGAOJDENOLL(::System::String* MCOHLHMKLIP, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PECIOCLHHOL_CGAOJDENOLL_OFFSET))(this, MCOHLHMKLIP, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::MoleMole::Battle::Entity* HDPNLDOAAPB()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_HDPNLDOAAPB_OFFSET))(this);
	}
};
