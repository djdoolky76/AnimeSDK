#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAPDOCNMJMO_HiddenStoryControlState.h"
#include "unitysdk/AAPDOCNMJMO_PuzzleState.h"
#include "unitysdk/GELIALJDFBL.h"
class BIDDFDEAEGB;
class EKFMIDBJDIA;
class GELIALJDFBL;
class HEAIEBHLCMJ;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Prop { class GravityBallBallController; }
namespace RPG::Client::Prop { class GravityBallWallController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GravityBallPuzzleControllerInit; }
namespace RPG::GameCore { class GravityBallUIParam; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TargetFetchAdvPropEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define AAPDOCNMJMO_ABABGHJMHDA_OFFSET UNITYSDK_OFFSET(0xB741880)
#define AAPDOCNMJMO_ABMCNOGOOJA_OFFSET UNITYSDK_OFFSET(0xB73CD20)
#define AAPDOCNMJMO_ADBBHMIGIFL_OFFSET UNITYSDK_OFFSET(0xB73EC30)
#define AAPDOCNMJMO_AGJGCNDLGBB_OFFSET UNITYSDK_OFFSET(0xB7423B0)
#define AAPDOCNMJMO_AHKHHIOFACB_OFFSET UNITYSDK_OFFSET(0xB743280)
#define AAPDOCNMJMO_ALCABLFPMOK_OFFSET UNITYSDK_OFFSET(0xB73C940)
#define AAPDOCNMJMO_APIGBAJFHHC_OFFSET UNITYSDK_OFFSET(0xB743750)
#define AAPDOCNMJMO_BIOIPLKDLGD_OFFSET UNITYSDK_OFFSET(0xB73E7F0)
#define AAPDOCNMJMO_BODONOAJJED_OFFSET UNITYSDK_OFFSET(0xB73D230)
#define AAPDOCNMJMO_BPILMHBJPEK_OFFSET UNITYSDK_OFFSET(0xB742BB0)
#define AAPDOCNMJMO_CAPJMFIHKKG_OFFSET UNITYSDK_OFFSET(0xB73E590)
#define AAPDOCNMJMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB743840)
#define AAPDOCNMJMO_CDCFKCICMNF_OFFSET UNITYSDK_OFFSET(0xB73C410)
#define AAPDOCNMJMO_CLNENPCJDBG_OFFSET UNITYSDK_OFFSET(0xB73D570)
#define AAPDOCNMJMO_CODPLONMNDB_OFFSET UNITYSDK_OFFSET(0xB741660)
#define AAPDOCNMJMO_CONBBIAIGGH_OFFSET UNITYSDK_OFFSET(0xB7413E0)
#define AAPDOCNMJMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB73FD80)
#define AAPDOCNMJMO_DBKMJIFFFNL_OFFSET UNITYSDK_OFFSET(0xB742CD0)
#define AAPDOCNMJMO_DFHOELKFOLP_OFFSET UNITYSDK_OFFSET(0xB742DB0)
#define AAPDOCNMJMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB740C00)
#define AAPDOCNMJMO_DNMMINDMLPE_OFFSET UNITYSDK_OFFSET(0xB73F100)
#define AAPDOCNMJMO_DNNAGJKJONB_OFFSET UNITYSDK_OFFSET(0xB73C810)
#define AAPDOCNMJMO_EFLDDPMNBKG_OFFSET UNITYSDK_OFFSET(0xB741D70)
#define AAPDOCNMJMO_EGCEPNHPDBD_OFFSET UNITYSDK_OFFSET(0xB73EB50)
#define AAPDOCNMJMO_EJJIFAPKDCF_OFFSET UNITYSDK_OFFSET(0xB73CDD0)
#define AAPDOCNMJMO_EMFBFPHKMGI_OFFSET UNITYSDK_OFFSET(0xB742A00)
#define AAPDOCNMJMO_EOEAIHIKBDM_OFFSET UNITYSDK_OFFSET(0xB73E490)
#define AAPDOCNMJMO_FDHOAELMPJJ_OFFSET UNITYSDK_OFFSET(0xB73DBD0)
#define AAPDOCNMJMO_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0xB73F7F0)
#define AAPDOCNMJMO_FMILDOKAEGK_OFFSET UNITYSDK_OFFSET(0xB742990)
#define AAPDOCNMJMO_FOGMBDNKIDC_OFFSET UNITYSDK_OFFSET(0xB73FBF0)
#define AAPDOCNMJMO_FOHDBAEGHOI_OFFSET UNITYSDK_OFFSET(0xB73EA30)
#define AAPDOCNMJMO_GADNMANFHNH_OFFSET UNITYSDK_OFFSET(0xB741F80)
#define AAPDOCNMJMO_GEBAGDANMLI_OFFSET UNITYSDK_OFFSET(0xB740EB0)
#define AAPDOCNMJMO_GJICBMOBOEG_OFFSET UNITYSDK_OFFSET(0xB73F870)
#define AAPDOCNMJMO_GKPLHHOFPED_OFFSET UNITYSDK_OFFSET(0xB73F080)
#define AAPDOCNMJMO_GMGGHNGGAPJ_OFFSET UNITYSDK_OFFSET(0xB73C990)
#define AAPDOCNMJMO_HGACHGJBFCA_OFFSET UNITYSDK_OFFSET(0xB73C860)
#define AAPDOCNMJMO_HHHBEJAAPDN_OFFSET UNITYSDK_OFFSET(0xB743230)
#define AAPDOCNMJMO_HOIFDAOJCBH_OFFSET UNITYSDK_OFFSET(0xB73D8C0)
#define AAPDOCNMJMO_IBCJKBKEPDF_OFFSET UNITYSDK_OFFSET(0xB742530)
#define AAPDOCNMJMO_IBKEIMALJHA_OFFSET UNITYSDK_OFFSET(0xB73EA90)
#define AAPDOCNMJMO_IEAHNMFHGEM_OFFSET UNITYSDK_OFFSET(0xB73C730)
#define AAPDOCNMJMO_IGLNDEHJFFK_OFFSET UNITYSDK_OFFSET(0xB73EBB0)
#define AAPDOCNMJMO_IMCCKCAILEI_OFFSET UNITYSDK_OFFSET(0xB741AA0)
#define AAPDOCNMJMO_JBHPALKNPKE_OFFSET UNITYSDK_OFFSET(0xB73F290)
#define AAPDOCNMJMO_JDHAHELKOLL_OFFSET UNITYSDK_OFFSET(0xB73D410)
#define AAPDOCNMJMO_JIEPFPCIFIM_OFFSET UNITYSDK_OFFSET(0xB742580)
#define AAPDOCNMJMO_KEBNJBNGCDL_OFFSET UNITYSDK_OFFSET(0xB73EE30)
#define AAPDOCNMJMO_KEJDABLAGBB_OFFSET UNITYSDK_OFFSET(0xB73D180)
#define AAPDOCNMJMO_KKFAFJGFFKB_OFFSET UNITYSDK_OFFSET(0xB741E10)
#define AAPDOCNMJMO_KLAACAICLII_OFFSET UNITYSDK_OFFSET(0xB73E510)
#define AAPDOCNMJMO_LBGGBHIKKDO_OFFSET UNITYSDK_OFFSET(0xB73F4A0)
#define AAPDOCNMJMO_LCDDGNJGECI_OFFSET UNITYSDK_OFFSET(0xB73D4A0)
#define AAPDOCNMJMO_LCKIGENJECP_OFFSET UNITYSDK_OFFSET(0xB73DFE0)
#define AAPDOCNMJMO_LIMAKMBIOBO_OFFSET UNITYSDK_OFFSET(0xB742230)
#define AAPDOCNMJMO_LJIGGIHPEII_OFFSET UNITYSDK_OFFSET(0xB73EAF0)
#define AAPDOCNMJMO_MEKEBAPOJKG_OFFSET UNITYSDK_OFFSET(0xB73EEF0)
#define AAPDOCNMJMO_MHLAJOMDJOG_OFFSET UNITYSDK_OFFSET(0xB73CA50)
#define AAPDOCNMJMO_MMFOIDAGEBN_OFFSET UNITYSDK_OFFSET(0xB73D290)
#define AAPDOCNMJMO_MNEAKBKKFIG_OFFSET UNITYSDK_OFFSET(0xB741260)
#define AAPDOCNMJMO_NCKCDKHKOCI_OFFSET UNITYSDK_OFFSET(0xB743630)
#define AAPDOCNMJMO_NDCJMPMNJCI_OFFSET UNITYSDK_OFFSET(0xB740C50)
#define AAPDOCNMJMO_NEOJNAKHJFA_OFFSET UNITYSDK_OFFSET(0xB73FE90)
#define AAPDOCNMJMO_NFDFLNCPGML_OFFSET UNITYSDK_OFFSET(0xB7422C0)
#define AAPDOCNMJMO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB73F420)
#define AAPDOCNMJMO_NNDNEKLDLNJ_OFFSET UNITYSDK_OFFSET(0xB741320)
#define AAPDOCNMJMO_OGIHKMHFJHJ_OFFSET UNITYSDK_OFFSET(0xB741B60)
#define AAPDOCNMJMO_OIPFKKCKMMH_OFFSET UNITYSDK_OFFSET(0xB73FA90)
#define AAPDOCNMJMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB740110)
#define AAPDOCNMJMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7407F0)
#define AAPDOCNMJMO_OOIGPNAIKKJ_OFFSET UNITYSDK_OFFSET(0xB73FCD0)
#define AAPDOCNMJMO_PCNKCMAGJDO_OFFSET UNITYSDK_OFFSET(0xB73DEC0)
#define AAPDOCNMJMO_PLDFBNAMPOC_OFFSET UNITYSDK_OFFSET(0xB73D010)
#define AAPDOCNMJMO_TICK_OFFSET UNITYSDK_OFFSET(0xB740B10)

inline static constexpr unsigned int AAPDOCNMJMO_TypeDefinitionIndex = 54065;

	class AAPDOCNMJMO : public ::GELIALJDFBL
	{
	public:
		::HEAIEBHLCMJ* MGBABGFLKHN; // 0x18
		::RPG::GameCore::GravityBallPuzzleControllerInit* OFKGLJOAMLD; // 0x20
		::RPG::Client::Prop::GravityBallBallController* FANCKKPHOLB; // 0x28
		::UnityEngine::Transform* JLANDCOEBAO; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*>* FONPBABDCCN; // 0x38
		::RPG::GameCore::GameEntity* DKKFNMKDCAI; // 0x40
		::System::String* MJFPMIEJABI; // 0x48
		::GELIALJDFBL* GEFODDHINGB; // 0x50
		::System::String* CNCKKHFDLKL; // 0x58
		::RPG::Client::LuaUIController* HHCECGELKHL; // 0x60
		::RPG::GameCore::GameEntity* PKPCLBHFIKJ; // 0x68
		::RPG::GameCore::GameEntity* MACLEPFOGGC; // 0x70
		::UnityEngine::GameObject* MJFOPNGAPHL; // 0x78
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x80
		::RPG::Client::Prop::GravityBallWallController* GEDBKFOKKNE; // 0x88
		::RPG::GameCore::GravityBallUIParam* DMFEKIIDMFL; // 0x90
		::BIDDFDEAEGB* NMCGNBHEBCL; // 0x98
		::System::UInt64 COOGOKOECMC; // 0xA0
		::AAPDOCNMJMO_PuzzleState JNBOICMADPC; // 0xA8
		::System::Single GINCBGLILDC; // 0xAC
		::System::Int32 HKCMLPINNOJ; // 0xB0
		::System::Single AHCDHEPILPK; // 0xB4
		::AAPDOCNMJMO_HiddenStoryControlState NELHPKJOBPH; // 0xB8
		::System::Single HNNFPFCBOEI; // 0xBC
		::System::Int16 MNLAPFDINBP; // 0xC0
		::System::Boolean FNBJNNGMFPB; // 0xC2
		::System::Boolean EDGCMJOLMHL; // 0xC3
		static ::System::Action** StaticGet_GBIMLGCDMEI()
		{
			return (::System::Action**)UnitySDK::FromName("", "AAPDOCNMJMO")->GetStaticField(0x37800);
		}

		static ::System::String** StaticGet_MNFHKIOPBKM()
		{
			return (::System::String**)UnitySDK::FromName("", "AAPDOCNMJMO")->GetStaticField(0x37808);
		}

		static ::System::Boolean* StaticGet_FBFLGJKLLJE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAPDOCNMJMO")->GetStaticField(0xBFE0);
		}

		// static const ::System::String* BNKDGNMCIIF; // 0x0
		// static const ::System::String* PGGJIPJPLHM; // 0x0
		// static const ::System::String* LFFDGCNMECG; // 0x0
		// static const ::System::String* LHAONJCCJAF; // 0x0
		// static const ::System::String* KIBHJFOFCGK; // 0x0
		// static const ::System::String* KKJAMFJLHJD; // 0x0
		// static const ::System::String* IKPEKEFFFLD; // 0x0
		// static const ::System::String* CDKIPCJKNAJ; // 0x0
		// static const ::System::String* LPHCBMLMGPD; // 0x0
		// static const ::System::String* JNNCKDHKKJJ; // 0x0
		// static const ::System::String* OIIPAMALLEH; // 0x0
		// static const ::System::String* DDENMAJCEBJ; // 0x0
		// static const ::System::String* HCNBDPDIJHD; // 0x0
		// static const ::System::String* IPPNPBFAKGD; // 0x0
		// static const ::System::String* CMAOOMKDPBD; // 0x0
		// static const ::System::String* HELLKAFMGBP; // 0x0
		// static const ::System::String* LLIDCIFEKOM; // 0x0
		// static const ::System::String* BPNDOAGEGMO; // 0x0
		// static const ::System::String* HOAOHOEEIEI; // 0x0
		// static const ::System::String* DODPKCCAKIA; // 0x0
		// static const ::System::String* GIIACOIOIHA; // 0x0
		// static const ::System::String* OMFGBCIDNMO; // 0x0
		// static const ::System::String* JLCCODLDNHE; // 0x0
		// static const ::System::String* IGPNFPCPBLI; // 0x0
		// static const ::System::String* BFPEJLEPIED; // 0x0
		// static const ::System::String* BKDOKILCNKH; // 0x0
		// static const ::System::String* PNKALJBLJLG; // 0x0
		// static const ::System::String* OIFDKCBBODL; // 0x0
		// static const ::System::String* EIOPBCMIKLG; // 0x0
		// static const ::System::String* JJMNLEMMKEO; // 0x0
		// static const ::System::String* APBKMMPEHAC; // 0x0
		// static const ::System::String* OMFDAJCNGFJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleControllerInit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleControllerInit*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAPDOCNMJMO_CCTOR_OFFSET))();
		}

		::System::Void CDCFKCICMNF(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_CDCFKCICMNF_OFFSET))(this, a1);
		}

		::System::Void DNNAGJKJONB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_DNNAGJKJONB_OFFSET))(this);
		}

		::System::Void ALCABLFPMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_ALCABLFPMOK_OFFSET))(this);
		}

		::System::Void GMGGHNGGAPJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_GMGGHNGGAPJ_OFFSET))(this, a1);
		}

		::System::Void ABMCNOGOOJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_ABMCNOGOOJA_OFFSET))(this);
		}

		::System::Void EJJIFAPKDCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_EJJIFAPKDCF_OFFSET))(this);
		}

		::System::Void PLDFBNAMPOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_PLDFBNAMPOC_OFFSET))(this);
		}

		::System::Void MMFOIDAGEBN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_MMFOIDAGEBN_OFFSET))(this, a1);
		}

		::System::Void JDHAHELKOLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_JDHAHELKOLL_OFFSET))(this);
		}

		::System::Void LCDDGNJGECI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_LCDDGNJGECI_OFFSET))(this);
		}

		::System::String* KEJDABLAGBB(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_KEJDABLAGBB_OFFSET))(this, a1);
		}

		::System::Void BODONOAJJED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_BODONOAJJED_OFFSET))(this);
		}

		::System::Void HOIFDAOJCBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_HOIFDAOJCBH_OFFSET))(this);
		}

		::System::Void PCNKCMAGJDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_PCNKCMAGJDO_OFFSET))(this);
		}

		::System::Void LCKIGENJECP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_LCKIGENJECP_OFFSET))(this);
		}

		::System::String* EOEAIHIKBDM(::System::Int16 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_EOEAIHIKBDM_OFFSET))(this, a1);
		}

		::System::String* CAPJMFIHKKG(::System::Int16 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_CAPJMFIHKKG_OFFSET))(this, a1);
		}

		::System::Void BIOIPLKDLGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_BIOIPLKDLGD_OFFSET))(this);
		}

		::System::Void FOHDBAEGHOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_FOHDBAEGHOI_OFFSET))(this);
		}

		::System::Void IBKEIMALJHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_IBKEIMALJHA_OFFSET))(this);
		}

		::System::Void LJIGGIHPEII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_LJIGGIHPEII_OFFSET))(this);
		}

		::System::Void EGCEPNHPDBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_EGCEPNHPDBD_OFFSET))(this);
		}

		::System::Void KLAACAICLII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_KLAACAICLII_OFFSET))(this);
		}

		::System::Void IGLNDEHJFFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_IGLNDEHJFFK_OFFSET))(this);
		}

		::System::Void ADBBHMIGIFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_ADBBHMIGIFL_OFFSET))(this);
		}

		::System::Void KEBNJBNGCDL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_KEBNJBNGCDL_OFFSET))(this, a1);
		}

		::System::Void MEKEBAPOJKG(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_MEKEBAPOJKG_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean GKPLHHOFPED()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAPDOCNMJMO_GKPLHHOFPED_OFFSET))();
		}

		::System::Void DNMMINDMLPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_DNMMINDMLPE_OFFSET))(this);
		}

		::System::Void JBHPALKNPKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_JBHPALKNPKE_OFFSET))(this);
		}

		::System::Void NMPLHCJKEOI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_NMPLHCJKEOI_OFFSET))(this, a1);
		}

		::System::Void FGFFJBEKHBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_FGFFJBEKHBO_OFFSET))(this, a1);
		}

		::System::Void OIPFKKCKMMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_OIPFKKCKMMH_OFFSET))(this, a1);
		}

		::System::Void OOIGPNAIKKJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_OOIGPNAIKKJ_OFFSET))(this, a1);
		}

		::System::Void NEOJNAKHJFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_NEOJNAKHJFA_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_DISPOSE_OFFSET))(this);
		}

		::System::Void NDCJMPMNJCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_NDCJMPMNJCI_OFFSET))(this);
		}

		::System::Void GEBAGDANMLI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_GEBAGDANMLI_OFFSET))(this, a1);
		}

		::System::Void MNEAKBKKFIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_MNEAKBKKFIG_OFFSET))(this);
		}

		::System::Void NNDNEKLDLNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_NNDNEKLDLNJ_OFFSET))(this);
		}

		::System::Void CONBBIAIGGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_CONBBIAIGGH_OFFSET))(this);
		}

		::System::Void CODPLONMNDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_CODPLONMNDB_OFFSET))(this, a1);
		}

		::System::Void ABABGHJMHDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_ABABGHJMHDA_OFFSET))(this);
		}

		::System::Void OGIHKMHFJHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_OGIHKMHFJHJ_OFFSET))(this);
		}

		::System::Void EFLDDPMNBKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_EFLDDPMNBKG_OFFSET))(this);
		}

		::System::Void GADNMANFHNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_GADNMANFHNH_OFFSET))(this);
		}

		::System::Void LIMAKMBIOBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_LIMAKMBIOBO_OFFSET))(this);
		}

		::System::Void NFDFLNCPGML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_NFDFLNCPGML_OFFSET))(this);
		}

		::System::Void GJICBMOBOEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_GJICBMOBOEG_OFFSET))(this);
		}

		::System::Void AGJGCNDLGBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_AGJGCNDLGBB_OFFSET))(this);
		}

		::System::Void IBCJKBKEPDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_IBCJKBKEPDF_OFFSET))(this);
		}

		::System::Void MHLAJOMDJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_MHLAJOMDJOG_OFFSET))(this);
		}

		::System::Void JIEPFPCIFIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_JIEPFPCIFIM_OFFSET))(this);
		}

		::System::Void LBGGBHIKKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_LBGGBHIKKDO_OFFSET))(this);
		}

		::System::Void DFHOELKFOLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_DFHOELKFOLP_OFFSET))(this);
		}

		::System::Void CLNENPCJDBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_CLNENPCJDBG_OFFSET))(this);
		}

		::System::Void HHHBEJAAPDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_HHHBEJAAPDN_OFFSET))(this);
		}

		::System::Void IMCCKCAILEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_IMCCKCAILEI_OFFSET))(this);
		}

		::System::Void AHKHHIOFACB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_AHKHHIOFACB_OFFSET))(this, a1);
		}

		::System::Void KKFAFJGFFKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_KKFAFJGFFKB_OFFSET))(this);
		}

		::System::Void FMILDOKAEGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_FMILDOKAEGK_OFFSET))(this);
		}

		::RPG::GameCore::TargetFetchAdvPropEx* FDHOAELMPJJ()
		{
			return ((::RPG::GameCore::TargetFetchAdvPropEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_FDHOAELMPJJ_OFFSET))(this);
		}

		::System::Void EMFBFPHKMGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_EMFBFPHKMGI_OFFSET))(this, a1);
		}

		::RPG::GameCore::RuntimeGroupInfo* APIGBAJFHHC()
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_APIGBAJFHHC_OFFSET))(this);
		}

		::System::Void NCKCDKHKOCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_NCKCDKHKOCI_OFFSET))(this);
		}

		::System::Void BPILMHBJPEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_BPILMHBJPEK_OFFSET))(this);
		}

		::System::Void FOGMBDNKIDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_FOGMBDNKIDC_OFFSET))(this);
		}

		::System::Void IEAHNMFHGEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_IEAHNMFHGEM_OFFSET))(this);
		}

		::System::Void HGACHGJBFCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_HGACHGJBFCA_OFFSET))(this);
		}

		::System::Void DBKMJIFFFNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPDOCNMJMO_DBKMJIFFFNL_OFFSET))(this);
		}

	};
