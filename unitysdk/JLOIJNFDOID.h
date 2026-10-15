#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class ACHPKKLGLNI;
class GDKHHPPIFBC;
class HEAIEBHLCMJ;
class IAPMAKKKIEK;
class LHLEGLKEECE;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class NpcMonoLod; }
namespace RPG::GameCore { class EntityLodLoadingData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class Transform; }

#define JLOIJNFDOID_AKCAADPMCPJ_OFFSET UNITYSDK_OFFSET(0xB24F5B0)
#define JLOIJNFDOID_BAHBCGOHENN_OFFSET UNITYSDK_OFFSET(0xB24D990)
#define JLOIJNFDOID_BBLAKMOAHAP_OFFSET UNITYSDK_OFFSET(0xB24E960)
#define JLOIJNFDOID_BDBALPDELPI_OFFSET UNITYSDK_OFFSET(0xB24D450)
#define JLOIJNFDOID_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0xB24EBA0)
#define JLOIJNFDOID_BLNNLLLCMHF_OFFSET UNITYSDK_OFFSET(0xB24EA00)
#define JLOIJNFDOID_BOMNLFOAEIN_OFFSET UNITYSDK_OFFSET(0xB2503D0)
#define JLOIJNFDOID_CAAGCKGKOAG_OFFSET UNITYSDK_OFFSET(0xB250AE0)
#define JLOIJNFDOID_CAKMJHIDBOK_OFFSET UNITYSDK_OFFSET(0xB250B90)
#define JLOIJNFDOID_CHIAFCGCAHC_OFFSET UNITYSDK_OFFSET(0xB24DC10)
#define JLOIJNFDOID_CNAIHOHFGIB_OFFSET UNITYSDK_OFFSET(0xB24E410)
#define JLOIJNFDOID_CTOR_OFFSET UNITYSDK_OFFSET(0xB251730)
#define JLOIJNFDOID_DCFAODDKJKN_OFFSET UNITYSDK_OFFSET(0xB24EE30)
#define JLOIJNFDOID_DCOLDEMILMF_OFFSET UNITYSDK_OFFSET(0xB24EFD0)
#define JLOIJNFDOID_DDAOGECEODE_OFFSET UNITYSDK_OFFSET(0xB2513B0)
#define JLOIJNFDOID_DDOEDMBPPAJ_OFFSET UNITYSDK_OFFSET(0xB24FDA0)
#define JLOIJNFDOID_DHAMGNCJEJE_OFFSET UNITYSDK_OFFSET(0xB24F160)
#define JLOIJNFDOID_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB24ECE0)
#define JLOIJNFDOID_EHLGBGLANCE_OFFSET UNITYSDK_OFFSET(0xB250E60)
#define JLOIJNFDOID_ENCEGHNADEF_OFFSET UNITYSDK_OFFSET(0xB24F900)
#define JLOIJNFDOID_ENCKOANFAOE_OFFSET UNITYSDK_OFFSET(0xB24E670)
#define JLOIJNFDOID_FCIMJNBJJPB_OFFSET UNITYSDK_OFFSET(0xB2515E0)
#define JLOIJNFDOID_FEKGFLIGDJP_OFFSET UNITYSDK_OFFSET(0xB24F9A0)
#define JLOIJNFDOID_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xB251480)
#define JLOIJNFDOID_GETMODELART_OFFSET UNITYSDK_OFFSET(0xB251130)
#define JLOIJNFDOID_GETMODELGO_OFFSET UNITYSDK_OFFSET(0xB24D930)
#define JLOIJNFDOID_GET_ISPOLYMER_OFFSET UNITYSDK_OFFSET(0xB2515B0)
#define JLOIJNFDOID_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0xB2515D0)
#define JLOIJNFDOID_GET_MATERIALGROUPCONTAINERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB251470)
#define JLOIJNFDOID_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0xB251460)
#define JLOIJNFDOID_GET_SCENEOBJHANDLER_OFFSET UNITYSDK_OFFSET(0xB2515C0)
#define JLOIJNFDOID_GMMMPHOGBDF_OFFSET UNITYSDK_OFFSET(0xB24EB20)
#define JLOIJNFDOID_HELFHIHAFBP_OFFSET UNITYSDK_OFFSET(0xB250160)
#define JLOIJNFDOID_IIAHENCDKEJ_OFFSET UNITYSDK_OFFSET(0xB24E0D0)
#define JLOIJNFDOID_IOHDMJGFAKN_OFFSET UNITYSDK_OFFSET(0xB24EC50)
#define JLOIJNFDOID_JBFAGHGLCCK_OFFSET UNITYSDK_OFFSET(0xB24EA80)
#define JLOIJNFDOID_JGCFJALJKGL_OFFSET UNITYSDK_OFFSET(0xB24F2B0)
#define JLOIJNFDOID_JPBAAOCOPPO_OFFSET UNITYSDK_OFFSET(0xB250810)
#define JLOIJNFDOID_KAAIGAKIBCB_OFFSET UNITYSDK_OFFSET(0xB2504B0)
#define JLOIJNFDOID_KCDBNPHEFGM_OFFSET UNITYSDK_OFFSET(0xB24D5A0)
#define JLOIJNFDOID_KHFDMEMGHKJ_OFFSET UNITYSDK_OFFSET(0xB24D800)
#define JLOIJNFDOID_KILPBJFHHGH_OFFSET UNITYSDK_OFFSET(0xB24F6C0)
#define JLOIJNFDOID_LCOIAPFCBOJ_OFFSET UNITYSDK_OFFSET(0xB24D500)
#define JLOIJNFDOID_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB24DC60)
#define JLOIJNFDOID_MADEGAMLABG_OFFSET UNITYSDK_OFFSET(0xB24DF90)
#define JLOIJNFDOID_MFFLAPCAHBI_OFFSET UNITYSDK_OFFSET(0xB24D2B0)
#define JLOIJNFDOID_MFNPKPDHKCF_OFFSET UNITYSDK_OFFSET(0xB250460)
#define JLOIJNFDOID_MMCKJLMDIJC_OFFSET UNITYSDK_OFFSET(0xB2500F0)
#define JLOIJNFDOID_MPOGHENAFPO_OFFSET UNITYSDK_OFFSET(0xB250540)
#define JLOIJNFDOID_NMKEOLMLFBO_OFFSET UNITYSDK_OFFSET(0xB24DEA0)
#define JLOIJNFDOID_OAMEONGLMBP_OFFSET UNITYSDK_OFFSET(0xB24D6E0)
#define JLOIJNFDOID_OBOLKMDMIOK_OFFSET UNITYSDK_OFFSET(0xB24F620)
#define JLOIJNFDOID_OGFDKHKAHKG_OFFSET UNITYSDK_OFFSET(0xB24DA40)
#define JLOIJNFDOID_OHNHMMKLNEG_OFFSET UNITYSDK_OFFSET(0xB24DB10)
#define JLOIJNFDOID_PEMLPLGBPCL_OFFSET UNITYSDK_OFFSET(0xB24E570)
#define JLOIJNFDOID_REFRESHADDCOLLIDERSENABLE_OFFSET UNITYSDK_OFFSET(0xB251570)
#define JLOIJNFDOID_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xB2515F0)
#define JLOIJNFDOID_SETSCENEOBJVISIBLE_OFFSET UNITYSDK_OFFSET(0xB2514D0)
#define JLOIJNFDOID_TRYHIDEACTOR_OFFSET UNITYSDK_OFFSET(0xB251520)

inline static constexpr unsigned int JLOIJNFDOID_TypeDefinitionIndex = 57444;

	class JLOIJNFDOID : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* IFPNIKLCAGG; // 0x18
		::UnityEngine::RuntimeAnimatorController* NBECDBIDDOP; // 0x20
		::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x28
		::HEAIEBHLCMJ* DLALHGJDNNO; // 0x30
		::System::Action_1<::RPG::GameCore::GameEntity*>* ENFFCLICPHI; // 0x38
		::UnityEngine::GameObject* MDIAMHAKNDK; // 0x40
		::System::String* DOECJPAELJD; // 0x48
		::RPG::GameCore::LevelNPCStillConfigData* KGAHMNCOICF; // 0x50
		::System::String* CLHPAEEALJB; // 0x58
		::System::Action_1<::RPG::GameCore::GameEntity*>* AKOBGLFNHCM; // 0x60
		::System::String* GJNPEPHFFFO; // 0x68
		::RPG::Client::CharacterShaderPropertyTransition* KNBIKJLEHMH; // 0x70
		::RPG::GameCore::EntityLodLoadingData* FKLLFNKCFKD; // 0x78
		::System::String* OPOIFACOJNL; // 0x80
		::System::Action_1<::UnityEngine::GameObject*>* BCLEMMLJIEJ; // 0x88
		::RPG::Client::NpcMonoLod* HJJPDFDGNIK; // 0x90
		::UnityEngine::AnimatorOverrideController* KENAPFGJKOM; // 0x98
		::IAPMAKKKIEK* PNODAKGIMID; // 0xA0
		::UnityEngine::Collider* GBDKBLPAHEL; // 0xA8
		::UnityEngine::Animator* APPGGMLEPLN; // 0xB0
		::System::String* IDBJKPAAADH; // 0xB8
		::LHLEGLKEECE* MAKLDCENIDG; // 0xC0
		::RPG::GameCore::EntityLoadState FMNJGFHAPEA; // 0xC8
		::System::Boolean FKFPJFJGNCH; // 0xCC
		::System::Boolean NABJKCPCGND; // 0xCD
		::System::Boolean OLOLCIBBIKP; // 0xCE
		::System::Boolean NCJFNBIPLDB; // 0xCF
		::System::Boolean OGIGDPOPDAP; // 0xD0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_CTOR_OFFSET))(this);
		}

		::System::Void MFFLAPCAHBI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JLOIJNFDOID_MFFLAPCAHBI_OFFSET))(this, a1, a2);
		}

		::System::Void KCDBNPHEFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_KCDBNPHEFGM_OFFSET))(this);
		}

		::System::Void KHFDMEMGHKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_KHFDMEMGHKJ_OFFSET))(this);
		}

		::System::Void BAHBCGOHENN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_BAHBCGOHENN_OFFSET))(this);
		}

		::System::Boolean BDBALPDELPI(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_BDBALPDELPI_OFFSET))(this, a1, a2);
		}

		::System::Void LCOIAPFCBOJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLOIJNFDOID_LCOIAPFCBOJ_OFFSET))(this, a1);
		}

		::System::Void OAMEONGLMBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_OAMEONGLMBP_OFFSET))(this);
		}

		::System::Void OGFDKHKAHKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_OGFDKHKAHKG_OFFSET))(this);
		}

		::System::Void OHNHMMKLNEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_OHNHMMKLNEG_OFFSET))(this);
		}

		::RPG::GameCore::EntityLodTemplateName CHIAFCGCAHC()
		{
			return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_CHIAFCGCAHC_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::String* a1, ::RPG::GameCore::LevelNPCStillConfigData* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::LevelNPCStillConfigData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MADEGAMLABG(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_MADEGAMLABG_OFFSET))(this, a1, a2);
		}

		::System::Void PEMLPLGBPCL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_PEMLPLGBPCL_OFFSET))(this, a1);
		}

		::System::Void BBLAKMOAHAP(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_BBLAKMOAHAP_OFFSET))(this, a1);
		}

		::System::Void BLNNLLLCMHF(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_BLNNLLLCMHF_OFFSET))(this, a1);
		}

		::System::Void JBFAGHGLCCK(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_JBFAGHGLCCK_OFFSET))(this, a1);
		}

		::System::Void GMMMPHOGBDF(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GMMMPHOGBDF_OFFSET))(this, a1);
		}

		::System::Void BeforeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_BEFOREDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_DISPOSE_OFFSET))(this);
		}

		::System::Void NMKEOLMLFBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_NMKEOLMLFBO_OFFSET))(this);
		}

		::System::Void ENCKOANFAOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_ENCKOANFAOE_OFFSET))(this, a1);
		}

		::System::Void JGCFJALJKGL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_JGCFJALJKGL_OFFSET))(this, a1);
		}

		::System::Void OBOLKMDMIOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_OBOLKMDMIOK_OFFSET))(this, a1);
		}

		::System::Void KILPBJFHHGH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_KILPBJFHHGH_OFFSET))(this, a1);
		}

		::System::Void ENCEGHNADEF(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_ENCEGHNADEF_OFFSET))(this, a1);
		}

		::System::Void BOMNLFOAEIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_BOMNLFOAEIN_OFFSET))(this);
		}

		::System::Void MFNPKPDHKCF(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_MFNPKPDHKCF_OFFSET))(this, a1);
		}

		::System::Void IOHDMJGFAKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_IOHDMJGFAKN_OFFSET))(this);
		}

		::System::Void DCOLDEMILMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_DCOLDEMILMF_OFFSET))(this);
		}

		::System::Void KAAIGAKIBCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_KAAIGAKIBCB_OFFSET))(this);
		}

		::System::Void AKCAADPMCPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_AKCAADPMCPJ_OFFSET))(this);
		}

		::System::Void MMCKJLMDIJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_MMCKJLMDIJC_OFFSET))(this);
		}

		::System::Void CAKMJHIDBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_CAKMJHIDBOK_OFFSET))(this);
		}

		::System::Void MPOGHENAFPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_MPOGHENAFPO_OFFSET))(this);
		}

		::System::Void EHLGBGLANCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_EHLGBGLANCE_OFFSET))(this);
		}

		::System::Void JPBAAOCOPPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_JPBAAOCOPPO_OFFSET))(this);
		}

		::System::Void FEKGFLIGDJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_FEKGFLIGDJP_OFFSET))(this);
		}

		::System::Void IIAHENCDKEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_IIAHENCDKEJ_OFFSET))(this);
		}

		::System::Void DCFAODDKJKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_DCFAODDKJKN_OFFSET))(this);
		}

		::System::Void CNAIHOHFGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_CNAIHOHFGIB_OFFSET))(this);
		}

		::System::Void DDOEDMBPPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_DDOEDMBPPAJ_OFFSET))(this);
		}

		::System::Void DHAMGNCJEJE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JLOIJNFDOID_DHAMGNCJEJE_OFFSET))(this, a1);
		}

		::System::Void DDAOGECEODE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_DDAOGECEODE_OFFSET))(this, a1);
		}

		::System::Void HELFHIHAFBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_HELFHIHAFBP_OFFSET))(this);
		}

		::System::Void CAAGCKGKOAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_CAAGCKGKOAG_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetModelGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GETMODELGO_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetModelArt()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GETMODELART_OFFSET))(this);
		}

		::RPG::Client::MockAnimator* get_MockAnimator()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GET_MOCKANIMATOR_OFFSET))(this);
		}

		::ACHPKKLGLNI* get_MaterialGroupContainerInstance()
		{
			return ((::ACHPKKLGLNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GET_MATERIALGROUPCONTAINERINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachPoint(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GETATTACHPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetSceneObjVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_SETSCENEOBJVISIBLE_OFFSET))(this, a1);
		}

		::System::Void TryHideActor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLOIJNFDOID_TRYHIDEACTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshAddCollidersEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_REFRESHADDCOLLIDERSENABLE_OFFSET))(this);
		}

		::System::Boolean get_IsPolymer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GET_ISPOLYMER_OFFSET))(this);
		}

		::GDKHHPPIFBC* get_SceneObjHandler()
		{
			return ((::GDKHHPPIFBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GET_SCENEOBJHANDLER_OFFSET))(this);
		}

		::RPG::GameCore::EntityLoadState get_LoadState()
		{
			return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_GET_LOADSTATE_OFFSET))(this);
		}

		::System::Void FCIMJNBJJPB(::RPG::GameCore::EntityLoadState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLoadState))((::PBYTE)hIl2Cpp + JLOIJNFDOID_FCIMJNBJJPB_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOIJNFDOID_RESETTODEFAULT_OFFSET))(this);
		}

	};
