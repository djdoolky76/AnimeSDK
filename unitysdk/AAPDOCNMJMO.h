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

#define AAPDOCNMJMO_ABABGHJMHDA_OFFSET UNITYSDK_OFFSET(0xB0DF050)
#define AAPDOCNMJMO_ABMCNOGOOJA_OFFSET UNITYSDK_OFFSET(0xB0DA580)
#define AAPDOCNMJMO_ADBBHMIGIFL_OFFSET UNITYSDK_OFFSET(0xB0DC450)
#define AAPDOCNMJMO_AGJGCNDLGBB_OFFSET UNITYSDK_OFFSET(0xB0DFB60)
#define AAPDOCNMJMO_AHKHHIOFACB_OFFSET UNITYSDK_OFFSET(0xB0E09E0)
#define AAPDOCNMJMO_ALCABLFPMOK_OFFSET UNITYSDK_OFFSET(0xB0DA1A0)
#define AAPDOCNMJMO_APIGBAJFHHC_OFFSET UNITYSDK_OFFSET(0xB0E0EB0)
#define AAPDOCNMJMO_BIOIPLKDLGD_OFFSET UNITYSDK_OFFSET(0xB0DC050)
#define AAPDOCNMJMO_BODONOAJJED_OFFSET UNITYSDK_OFFSET(0xB0DAAA0)
#define AAPDOCNMJMO_BPILMHBJPEK_OFFSET UNITYSDK_OFFSET(0xB0E0330)
#define AAPDOCNMJMO_CAPJMFIHKKG_OFFSET UNITYSDK_OFFSET(0xB0DBDF0)
#define AAPDOCNMJMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0E0F90)
#define AAPDOCNMJMO_CDCFKCICMNF_OFFSET UNITYSDK_OFFSET(0xB0D9C70)
#define AAPDOCNMJMO_CLNENPCJDBG_OFFSET UNITYSDK_OFFSET(0xB0DADE0)
#define AAPDOCNMJMO_CODPLONMNDB_OFFSET UNITYSDK_OFFSET(0xB0DEE30)
#define AAPDOCNMJMO_CONBBIAIGGH_OFFSET UNITYSDK_OFFSET(0xB0DEB90)
#define AAPDOCNMJMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB0DD560)
#define AAPDOCNMJMO_DBKMJIFFFNL_OFFSET UNITYSDK_OFFSET(0xB0E0450)
#define AAPDOCNMJMO_DFHOELKFOLP_OFFSET UNITYSDK_OFFSET(0xB0E0530)
#define AAPDOCNMJMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0DE3C0)
#define AAPDOCNMJMO_DNMMINDMLPE_OFFSET UNITYSDK_OFFSET(0xB0DC8F0)
#define AAPDOCNMJMO_DNNAGJKJONB_OFFSET UNITYSDK_OFFSET(0xB0DA070)
#define AAPDOCNMJMO_EFLDDPMNBKG_OFFSET UNITYSDK_OFFSET(0xB0DF530)
#define AAPDOCNMJMO_EGCEPNHPDBD_OFFSET UNITYSDK_OFFSET(0xB0DC380)
#define AAPDOCNMJMO_EJJIFAPKDCF_OFFSET UNITYSDK_OFFSET(0xB0DA630)
#define AAPDOCNMJMO_EMFBFPHKMGI_OFFSET UNITYSDK_OFFSET(0xB0E0190)
#define AAPDOCNMJMO_EOEAIHIKBDM_OFFSET UNITYSDK_OFFSET(0xB0DBCF0)
#define AAPDOCNMJMO_FDHOAELMPJJ_OFFSET UNITYSDK_OFFSET(0xB0DB430)
#define AAPDOCNMJMO_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0xB0DCFD0)
#define AAPDOCNMJMO_FMILDOKAEGK_OFFSET UNITYSDK_OFFSET(0xB0E0120)
#define AAPDOCNMJMO_FOGMBDNKIDC_OFFSET UNITYSDK_OFFSET(0xB0DD3D0)
#define AAPDOCNMJMO_FOHDBAEGHOI_OFFSET UNITYSDK_OFFSET(0xB0DC290)
#define AAPDOCNMJMO_GADNMANFHNH_OFFSET UNITYSDK_OFFSET(0xB0DF730)
#define AAPDOCNMJMO_GEBAGDANMLI_OFFSET UNITYSDK_OFFSET(0xB0DE660)
#define AAPDOCNMJMO_GJICBMOBOEG_OFFSET UNITYSDK_OFFSET(0xB0DD050)
#define AAPDOCNMJMO_GKPLHHOFPED_OFFSET UNITYSDK_OFFSET(0xB0DC870)
#define AAPDOCNMJMO_GMGGHNGGAPJ_OFFSET UNITYSDK_OFFSET(0xB0DA1F0)
#define AAPDOCNMJMO_HGACHGJBFCA_OFFSET UNITYSDK_OFFSET(0xB0DA0C0)
#define AAPDOCNMJMO_HHHBEJAAPDN_OFFSET UNITYSDK_OFFSET(0xB0E0990)
#define AAPDOCNMJMO_HOIFDAOJCBH_OFFSET UNITYSDK_OFFSET(0xB0DB120)
#define AAPDOCNMJMO_IBCJKBKEPDF_OFFSET UNITYSDK_OFFSET(0xB0DFCD0)
#define AAPDOCNMJMO_IBKEIMALJHA_OFFSET UNITYSDK_OFFSET(0xB0DC2E0)
#define AAPDOCNMJMO_IEAHNMFHGEM_OFFSET UNITYSDK_OFFSET(0xB0D9F90)
#define AAPDOCNMJMO_IGLNDEHJFFK_OFFSET UNITYSDK_OFFSET(0xB0DC3D0)
#define AAPDOCNMJMO_IMCCKCAILEI_OFFSET UNITYSDK_OFFSET(0xB0DF270)
#define AAPDOCNMJMO_JBHPALKNPKE_OFFSET UNITYSDK_OFFSET(0xB0DCA80)
#define AAPDOCNMJMO_JDHAHELKOLL_OFFSET UNITYSDK_OFFSET(0xB0DAC80)
#define AAPDOCNMJMO_JIEPFPCIFIM_OFFSET UNITYSDK_OFFSET(0xB0DFD20)
#define AAPDOCNMJMO_KEBNJBNGCDL_OFFSET UNITYSDK_OFFSET(0xB0DC640)
#define AAPDOCNMJMO_KEJDABLAGBB_OFFSET UNITYSDK_OFFSET(0xB0DA9F0)
#define AAPDOCNMJMO_KKFAFJGFFKB_OFFSET UNITYSDK_OFFSET(0xB0DF5D0)
#define AAPDOCNMJMO_KLAACAICLII_OFFSET UNITYSDK_OFFSET(0xB0DBD70)
#define AAPDOCNMJMO_LBGGBHIKKDO_OFFSET UNITYSDK_OFFSET(0xB0DCC90)
#define AAPDOCNMJMO_LCDDGNJGECI_OFFSET UNITYSDK_OFFSET(0xB0DAD10)
#define AAPDOCNMJMO_LCKIGENJECP_OFFSET UNITYSDK_OFFSET(0xB0DB840)
#define AAPDOCNMJMO_LIMAKMBIOBO_OFFSET UNITYSDK_OFFSET(0xB0DF9E0)
#define AAPDOCNMJMO_LJIGGIHPEII_OFFSET UNITYSDK_OFFSET(0xB0DC330)
#define AAPDOCNMJMO_MEKEBAPOJKG_OFFSET UNITYSDK_OFFSET(0xB0DC6F0)
#define AAPDOCNMJMO_MHLAJOMDJOG_OFFSET UNITYSDK_OFFSET(0xB0DA2B0)
#define AAPDOCNMJMO_MMFOIDAGEBN_OFFSET UNITYSDK_OFFSET(0xB0DAB00)
#define AAPDOCNMJMO_MNEAKBKKFIG_OFFSET UNITYSDK_OFFSET(0xB0DEA10)
#define AAPDOCNMJMO_NCKCDKHKOCI_OFFSET UNITYSDK_OFFSET(0xB0E0D90)
#define AAPDOCNMJMO_NDCJMPMNJCI_OFFSET UNITYSDK_OFFSET(0xB0DE410)
#define AAPDOCNMJMO_NEOJNAKHJFA_OFFSET UNITYSDK_OFFSET(0xB0DD670)
#define AAPDOCNMJMO_NFDFLNCPGML_OFFSET UNITYSDK_OFFSET(0xB0DFA70)
#define AAPDOCNMJMO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB0DCC10)
#define AAPDOCNMJMO_NNDNEKLDLNJ_OFFSET UNITYSDK_OFFSET(0xB0DEAD0)
#define AAPDOCNMJMO_OGIHKMHFJHJ_OFFSET UNITYSDK_OFFSET(0xB0DF330)
#define AAPDOCNMJMO_OIPFKKCKMMH_OFFSET UNITYSDK_OFFSET(0xB0DD270)
#define AAPDOCNMJMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0DD8F0)
#define AAPDOCNMJMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0DDFB0)
#define AAPDOCNMJMO_OOIGPNAIKKJ_OFFSET UNITYSDK_OFFSET(0xB0DD4B0)
#define AAPDOCNMJMO_PCNKCMAGJDO_OFFSET UNITYSDK_OFFSET(0xB0DB720)
#define AAPDOCNMJMO_PLDFBNAMPOC_OFFSET UNITYSDK_OFFSET(0xB0DA880)
#define AAPDOCNMJMO_TICK_OFFSET UNITYSDK_OFFSET(0xB0DE2D0)

	class AAPDOCNMJMO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* PKPCLBHFIKJ; // 0x18
		::RPG::Client::Prop::GravityBallBallController* FANCKKPHOLB; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::UnityEngine::GameObject* MJFOPNGAPHL; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*>* FONPBABDCCN; // 0x38
		::RPG::Client::Prop::GravityBallWallController* GEDBKFOKKNE; // 0x40
		::RPG::GameCore::GameEntity* MACLEPFOGGC; // 0x48
		::RPG::Client::LuaUIController* HHCECGELKHL; // 0x50
		::System::String* CNCKKHFDLKL; // 0x58
		::BIDDFDEAEGB* NMCGNBHEBCL; // 0x60
		::UnityEngine::Transform* JLANDCOEBAO; // 0x68
		::RPG::GameCore::GravityBallPuzzleControllerInit* OFKGLJOAMLD; // 0x70
		::RPG::GameCore::GravityBallUIParam* DMFEKIIDMFL; // 0x78
		::System::String* MJFPMIEJABI; // 0x80
		::GELIALJDFBL* GEFODDHINGB; // 0x88
		::RPG::GameCore::GameEntity* DKKFNMKDCAI; // 0x90
		::HEAIEBHLCMJ* MGBABGFLKHN; // 0x98
		::System::UInt64 COOGOKOECMC; // 0xA0
		::System::Single HNNFPFCBOEI; // 0xA8
		::System::Boolean EDGCMJOLMHL; // 0xAC
		::System::Boolean FNBJNNGMFPB; // 0xAD
		::System::Int16 MNLAPFDINBP; // 0xAE
		::System::Single AHCDHEPILPK; // 0xB0
		::System::Single GINCBGLILDC; // 0xB4
		::AAPDOCNMJMO_HiddenStoryControlState NELHPKJOBPH; // 0xB8
		::AAPDOCNMJMO_PuzzleState JNBOICMADPC; // 0xBC
		::System::Int32 HKCMLPINNOJ; // 0xC0
		static ::System::Action** StaticGet_GBIMLGCDMEI()
		{
			return (::System::Action**)UnitySDK::FromName("", "AAPDOCNMJMO")->GetStaticField(0x42260);
		}

		static ::System::String** StaticGet_MNFHKIOPBKM()
		{
			return (::System::String**)UnitySDK::FromName("", "AAPDOCNMJMO")->GetStaticField(0x42268);
		}

		static ::System::Boolean* StaticGet_FBFLGJKLLJE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAPDOCNMJMO")->GetStaticField(0xFFE0);
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
