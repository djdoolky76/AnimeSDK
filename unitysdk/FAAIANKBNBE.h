#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAAIANKBNBE_EnableReason.h"
#include "unitysdk/FAAIANKBNBE_UseCameraAsStreamingCenterPosReason.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DDKIDMKIJMG;
class DEKGKNGPOHI;
class FAAIANKBNBE;
class KECODLJICEB;
class MEFBCOKEFIN;
class MLFAGNKOOBJ;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class ConfigMunicipal; }
namespace RPG::GameCore { class ConfigMunicipalPedestrianOverride; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define FAAIANKBNBE_ADGDILBOICG_OFFSET UNITYSDK_OFFSET(0x136DCEE0)
#define FAAIANKBNBE_AHJDPJFPPJN_OFFSET UNITYSDK_OFFSET(0x136D9A50)
#define FAAIANKBNBE_AOKHGOBABLE_OFFSET UNITYSDK_OFFSET(0x136DA7D0)
#define FAAIANKBNBE_BDEPPNHCGLC_OFFSET UNITYSDK_OFFSET(0x136D8A20)
#define FAAIANKBNBE_BGENKGMIHEK_OFFSET UNITYSDK_OFFSET(0x136DC3C0)
#define FAAIANKBNBE_BIMENGEFCIK_OFFSET UNITYSDK_OFFSET(0x136DD030)
#define FAAIANKBNBE_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x136D8470)
#define FAAIANKBNBE_BLCKMGCCKJC_OFFSET UNITYSDK_OFFSET(0x136DA930)
#define FAAIANKBNBE_BLILDBCEGFH_1_OFFSET UNITYSDK_OFFSET(0x136DB9E0)
#define FAAIANKBNBE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x136DB7F0)
#define FAAIANKBNBE_CCFGDHBDGMJ_OFFSET UNITYSDK_OFFSET(0x136DB720)
#define FAAIANKBNBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x136DD1D0)
#define FAAIANKBNBE_CHIJJAGJCBP_OFFSET UNITYSDK_OFFSET(0x136D8BB0)
#define FAAIANKBNBE_CJEDFONMPNG_OFFSET UNITYSDK_OFFSET(0x136DCDE0)
#define FAAIANKBNBE_CJGCIKJCBCI_OFFSET UNITYSDK_OFFSET(0x136DC610)
#define FAAIANKBNBE_CPKOJPJLEKJ_OFFSET UNITYSDK_OFFSET(0x136DC7E0)
#define FAAIANKBNBE_CTOR_OFFSET UNITYSDK_OFFSET(0x136D7D70)
#define FAAIANKBNBE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x136D8C40)
#define FAAIANKBNBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136D8410)
#define FAAIANKBNBE_DKMDDHAKNLH_OFFSET UNITYSDK_OFFSET(0x136DAA10)
#define FAAIANKBNBE_DKMNPAEPBAM_OFFSET UNITYSDK_OFFSET(0x136DB850)
#define FAAIANKBNBE_DNFEJEJMOPB_OFFSET UNITYSDK_OFFSET(0x136D9480)
#define FAAIANKBNBE_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x136DD000)
#define FAAIANKBNBE_DOJALNDLJBP_OFFSET UNITYSDK_OFFSET(0x136DC4C0)
#define FAAIANKBNBE_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0x136DCE80)
#define FAAIANKBNBE_ECLOFPNEPNG_OFFSET UNITYSDK_OFFSET(0x136DD010)
#define FAAIANKBNBE_ELDMPBDGCBE_OFFSET UNITYSDK_OFFSET(0x136D7CD0)
#define FAAIANKBNBE_FBAODODPDCI_OFFSET UNITYSDK_OFFSET(0x136DC280)
#define FAAIANKBNBE_FENMNNADNLJ_OFFSET UNITYSDK_OFFSET(0x136DB360)
#define FAAIANKBNBE_FJPABKEKHHI_OFFSET UNITYSDK_OFFSET(0x136D9B30)
#define FAAIANKBNBE_FKCNLIMCHGF_OFFSET UNITYSDK_OFFSET(0x136DB440)
#define FAAIANKBNBE_FKIMBIGHABI_OFFSET UNITYSDK_OFFSET(0x136DD110)
#define FAAIANKBNBE_FOMAOAMABHB_OFFSET UNITYSDK_OFFSET(0x136DBA80)
#define FAAIANKBNBE_FPONNCJDDHE_OFFSET UNITYSDK_OFFSET(0x136DD0F0)
#define FAAIANKBNBE_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x136DCFE0)
#define FAAIANKBNBE_GET_USE_UNLOAD_MODE_OFFSET UNITYSDK_OFFSET(0x136D7C90)
#define FAAIANKBNBE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x136D7EF0)
#define FAAIANKBNBE_GMACBEAPCKL_OFFSET UNITYSDK_OFFSET(0x136DCD20)
#define FAAIANKBNBE_HAIBBMGHNLA_OFFSET UNITYSDK_OFFSET(0x136DD050)
#define FAAIANKBNBE_HBEJJHCJPIB_OFFSET UNITYSDK_OFFSET(0x136DB220)
#define FAAIANKBNBE_HEHGKKIIDKF_OFFSET UNITYSDK_OFFSET(0x136DCC70)
#define FAAIANKBNBE_HFJBNLGLKAB_OFFSET UNITYSDK_OFFSET(0x136DD130)
#define FAAIANKBNBE_HIKEGPJJNNK_OFFSET UNITYSDK_OFFSET(0x136D8E50)
#define FAAIANKBNBE_HKGDJMJFMAJ_OFFSET UNITYSDK_OFFSET(0x136D8D40)
#define FAAIANKBNBE_HLGJFDKFBNI_OFFSET UNITYSDK_OFFSET(0x136DBD10)
#define FAAIANKBNBE_HOCONHKFILE_OFFSET UNITYSDK_OFFSET(0x136DBF20)
#define FAAIANKBNBE_IAAOBDCIKIM_OFFSET UNITYSDK_OFFSET(0x136DCF80)
#define FAAIANKBNBE_IFOAJFIHFBB_OFFSET UNITYSDK_OFFSET(0x136DA600)
#define FAAIANKBNBE_IHAFANLELDI_OFFSET UNITYSDK_OFFSET(0x136DB790)
#define FAAIANKBNBE_ILMKBAIKBDD_OFFSET UNITYSDK_OFFSET(0x136DAFC0)
#define FAAIANKBNBE_IOIABOLNDIJ_OFFSET UNITYSDK_OFFSET(0x136DBB80)
#define FAAIANKBNBE_IOJLCJGMLGC_OFFSET UNITYSDK_OFFSET(0x136DA1D0)
#define FAAIANKBNBE_JBFEFABEKLG_OFFSET UNITYSDK_OFFSET(0x136DB2F0)
#define FAAIANKBNBE_JCCIOHHHGGL_OFFSET UNITYSDK_OFFSET(0x136DD040)
#define FAAIANKBNBE_JFDGCBPJGEF_OFFSET UNITYSDK_OFFSET(0x136DB5E0)
#define FAAIANKBNBE_JHNECMFNHOF_OFFSET UNITYSDK_OFFSET(0x136DCB10)
#define FAAIANKBNBE_JNHMDAFKPME_OFFSET UNITYSDK_OFFSET(0x136DC320)
#define FAAIANKBNBE_KAGMGGJEFHB_OFFSET UNITYSDK_OFFSET(0x136DD0E0)
#define FAAIANKBNBE_KBBIJDANIPL_OFFSET UNITYSDK_OFFSET(0x136DB660)
#define FAAIANKBNBE_KDFJINHJJHD_OFFSET UNITYSDK_OFFSET(0x136DB4B0)
#define FAAIANKBNBE_KKCOGGOBILN_OFFSET UNITYSDK_OFFSET(0x136DC040)
#define FAAIANKBNBE_KMHKOGIDIID_OFFSET UNITYSDK_OFFSET(0x136DC510)
#define FAAIANKBNBE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x136D8240)
#define FAAIANKBNBE_LCPCMEKJIPF_OFFSET UNITYSDK_OFFSET(0x136D9B90)
#define FAAIANKBNBE_LELIOLJPAKH_OFFSET UNITYSDK_OFFSET(0x136DBE00)
#define FAAIANKBNBE_LIMJCGPLHJC_OFFSET UNITYSDK_OFFSET(0x136DA680)
#define FAAIANKBNBE_MAJHEOHGBLL_OFFSET UNITYSDK_OFFSET(0x136D9E80)
#define FAAIANKBNBE_MFIMLCBBLLI_OFFSET UNITYSDK_OFFSET(0x136DC1B0)
#define FAAIANKBNBE_MNEOGIBLHDD_OFFSET UNITYSDK_OFFSET(0x136DA410)
#define FAAIANKBNBE_NKBAEABBCGI_OFFSET UNITYSDK_OFFSET(0x136DC210)
#define FAAIANKBNBE_NKPKIPPCLDA_OFFSET UNITYSDK_OFFSET(0x136DD020)
#define FAAIANKBNBE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x136D9420)
#define FAAIANKBNBE_OMMMCPEMGLB_OFFSET UNITYSDK_OFFSET(0x136DC940)
#define FAAIANKBNBE_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x136DAA80)
#define FAAIANKBNBE_PKAABJFNMAG_OFFSET UNITYSDK_OFFSET(0x136DC420)
#define FAAIANKBNBE_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x136DCFF0)

inline static constexpr unsigned int FAAIANKBNBE_TypeDefinitionIndex = 71156;

	class FAAIANKBNBE : public ::System::Object
	{
	public:
		::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0x10
		::RPG::GameCore::EntityManager* KDKBEPAJODM; // 0x18
		::DDKIDMKIJMG* OELFHGJGCMC; // 0x20
		::RPG::GameCore::LodConfig* HEBPCEFHMHF; // 0x28
		::DEKGKNGPOHI* LAHKCCHHPEI; // 0x30
		::MEFBCOKEFIN* GONBDOEJEEI; // 0x38
		::RPG::GameCore::ConfigMunicipal* KNDIEMFEKOE; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* CCCJFJHMKLL; // 0x48
		::RPG::Client::MapDef* MJKJCCNJACA; // 0x50
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x58
		::UnityEngine::Transform* KDFKBLCDHAD; // 0x60
		::System::String* PKDDJGKNAIA; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* JJDIAILEHIF; // 0x70
		::MLFAGNKOOBJ* OHIFADIMNBI; // 0x78
		::KECODLJICEB* MLJLFFKDFLN; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* OHMLOKOKLDB; // 0x88
		::RPG::Client::AdventurePhase* FPILJLGACHP; // 0x90
		::RPG::Client::ReasonBool_1<::System::Object*> HEOEJEJIAML; // 0x98
		::System::Boolean AFNOIPANLJD; // 0xA0
		::System::Boolean PCDPEGIKGDC; // 0xA1
		::System::Boolean LMPBNBJGKNA; // 0xA2
		::System::Boolean KKKDDNFCPNL; // 0xA3
		::System::Nullable_1<::UnityEngine::Vector3> LBFMKPLAAFD; // 0xA4
		::System::Byte _padding0[0x8];
		::UnityEngine::Vector3 KDBIIKOOGCP; // 0xB4
		::System::Boolean KLPIKIAJPND; // 0xC0
		::System::Boolean LPBDPPGMOBH; // 0xC1
		::System::Boolean ECDGFEHILJN; // 0xC2
		::System::Boolean AAECOAAJBFE; // 0xC3
		::System::UInt32 GHILCHKJHBD; // 0xC4
		::System::Boolean CKADKEJIEBK; // 0xC8
		::System::Boolean AIBABFJNPFC; // 0xC9
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector3 JJJMGGNCEIA; // 0xCC
		::System::Boolean MMDJHHBDDOH; // 0xD8
		::System::Boolean MKPIJNBFOKG; // 0xD9
		::System::Boolean OFJLMEBKLAF; // 0xDA
		::System::Boolean OBIGBOCLHDL; // 0xDB
		static ::RPG::Client::RPGProfilerMarker** StaticGet_PGJENCNMHIO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x2F970);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EPAOALAGIDG()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x2F978);
		}

		static ::System::String** StaticGet_JDGBNEMINGK()
		{
			return (::System::String**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x2F980);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_IEPEBANINFA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x2F988);
		}

		static ::FAAIANKBNBE** StaticGet_EMLNOINPICJ()
		{
			return (::FAAIANKBNBE**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x2F990);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GAIPMKOKLMK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x2F998);
		}

		static ::System::Object** StaticGet_HLOKPFHJPAK()
		{
			return (::System::Object**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x2F9A0);
		}

		static ::System::Int32* StaticGet_BCFCOBBLHHK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x95A0);
		}

		static ::System::Boolean* StaticGet__USE_UNLOAD_MODE_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x95A4);
		}

		static ::System::Boolean* StaticGet_MFAPAKONJHM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x95A5);
		}

		static ::System::Int32* StaticGet_LPMNPMOGHNC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x95A8);
		}

		static ::System::Int32* StaticGet_DLLJPLKOKNJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x95AC);
		}

		static ::System::Int32* StaticGet_OHLDOJEPKIK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x95B0);
		}

		static ::System::Int32* StaticGet_MNNGKCFIJDL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x95B4);
		}

		// static const ::System::Object PODAEAGLOIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAAIANKBNBE_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_USE_UNLOAD_MODE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAAIANKBNBE_GET_USE_UNLOAD_MODE_OFFSET))();
		}

		static ::System::Void ELDMPBDGCBE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FAAIANKBNBE_ELDMPBDGCBE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::FAAIANKBNBE* GGBLHEHJBDO()
		{
			return ((::FAAIANKBNBE*(*)())((::PBYTE)hIl2Cpp + FAAIANKBNBE_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_DISPOSE_OFFSET))(this);
		}

		::System::Void BDEPPNHCGLC(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BDEPPNHCGLC_OFFSET))(this, a1, a2);
		}

		::System::Void CHIJJAGJCBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CHIJJAGJCBP_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAAIANKBNBE_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void DNFEJEJMOPB(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_DNFEJEJMOPB_OFFSET))(this, a1);
		}

		::RPG::GameCore::WorldType FJPABKEKHHI()
		{
			return ((::RPG::GameCore::WorldType(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_FJPABKEKHHI_OFFSET))(this);
		}

		::System::Int32 LCPCMEKJIPF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_LCPCMEKJIPF_OFFSET))(this);
		}

		::System::Int32 MAJHEOHGBLL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_MAJHEOHGBLL_OFFSET))(this);
		}

		::System::Single IOJLCJGMLGC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_IOJLCJGMLGC_OFFSET))(this);
		}

		::RPG::GameCore::GraphicQuality MNEOGIBLHDD(::RPG::Client::EAssemblyNPC a1)
		{
			return ((::RPG::GameCore::GraphicQuality(*)(::PVOID, ::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + FAAIANKBNBE_MNEOGIBLHDD_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* IFOAJFIHFBB(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_IFOAJFIHFBB_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LIMJCGPLHJC(::RPG::Client::AssemNPC* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a3, ::System::String* a4, ::RPG::Client::EAssemblyNPC a5, ::UnityEngine::Vector3 a6, ::System::UInt32 a7, ::System::Action_1<::RPG::GameCore::GameEntity*>* a8)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::System::String*, ::RPG::Client::EAssemblyNPC, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_LIMJCGPLHJC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void AOKHGOBABLE(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AOKHGOBABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* BLCKMGCCKJC(::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* a1, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BLCKMGCCKJC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DKMDDHAKNLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_DKMDDHAKNLH_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void HBEJJHCJPIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HBEJJHCJPIB_OFFSET))(this);
		}

		::System::Void JBFEFABEKLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_JBFEFABEKLG_OFFSET))(this);
		}

		::System::Void FENMNNADNLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_FENMNNADNLJ_OFFSET))(this);
		}

		::System::Void FKCNLIMCHGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_FKCNLIMCHGF_OFFSET))(this);
		}

		::System::Void KDFJINHJJHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_KDFJINHJJHD_OFFSET))(this);
		}

		::System::Void JFDGCBPJGEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_JFDGCBPJGEF_OFFSET))(this);
		}

		::System::Void KBBIJDANIPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_KBBIJDANIPL_OFFSET))(this);
		}

		::System::Void CCFGDHBDGMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CCFGDHBDGMJ_OFFSET))(this);
		}

		::System::Void IHAFANLELDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_IHAFANLELDI_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH_1(::System::Boolean a1, ::FAAIANKBNBE_EnableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FAAIANKBNBE_EnableReason))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BLILDBCEGFH_1_OFFSET))(this, a1, a2);
		}

		::System::Void DKMNPAEPBAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_DKMNPAEPBAM_OFFSET))(this);
		}

		::System::Void FOMAOAMABHB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAAIANKBNBE_FOMAOAMABHB_OFFSET))(this, a1);
		}

		::System::Void IOIABOLNDIJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAAIANKBNBE_IOIABOLNDIJ_OFFSET))(this, a1);
		}

		::System::Void HLGJFDKFBNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HLGJFDKFBNI_OFFSET))(this, a1);
		}

		::System::Void LELIOLJPAKH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAAIANKBNBE_LELIOLJPAKH_OFFSET))(this, a1);
		}

		::System::Void HIKEGPJJNNK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HIKEGPJJNNK_OFFSET))(this, a1);
		}

		::RPG::GameCore::LodTemplate* KKCOGGOBILN(::RPG::Client::EAssemblyNPC a1)
		{
			return ((::RPG::GameCore::LodTemplate*(*)(::PVOID, ::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + FAAIANKBNBE_KKCOGGOBILN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigMunicipalPedestrianOverride* MFIMLCBBLLI()
		{
			return ((::RPG::GameCore::ConfigMunicipalPedestrianOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_MFIMLCBBLLI_OFFSET))(this);
		}

		::System::Void HOCONHKFILE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HOCONHKFILE_OFFSET))(this);
		}

		::System::Void NKBAEABBCGI(::System::Boolean a1, ::FAAIANKBNBE_UseCameraAsStreamingCenterPosReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FAAIANKBNBE_UseCameraAsStreamingCenterPosReason))((::PBYTE)hIl2Cpp + FAAIANKBNBE_NKBAEABBCGI_OFFSET))(this, a1, a2);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void AHJDPJFPPJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AHJDPJFPPJN_OFFSET))(this);
		}

		::System::Void ILMKBAIKBDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_ILMKBAIKBDD_OFFSET))(this);
		}

		::System::Void FBAODODPDCI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_FBAODODPDCI_OFFSET))(this, a1);
		}

		::System::Void JNHMDAFKPME(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_JNHMDAFKPME_OFFSET))(this, a1);
		}

		::System::Void BGENKGMIHEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BGENKGMIHEK_OFFSET))(this);
		}

		::System::Void PKAABJFNMAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_PKAABJFNMAG_OFFSET))(this);
		}

		::System::Void DOJALNDLJBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_DOJALNDLJBP_OFFSET))(this);
		}

		::System::Void KMHKOGIDIID(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_KMHKOGIDIID_OFFSET))(this, a1);
		}

		::System::Void CJGCIKJCBCI(::System::String* a1, ::System::Action_1<::UnityEngine::Mesh*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CJGCIKJCBCI_OFFSET))(this, a1, a2);
		}

		::System::Void CPKOJPJLEKJ(::System::String* a1, ::System::Action_1<::UnityEngine::Mesh*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CPKOJPJLEKJ_OFFSET))(this, a1, a2);
		}

		::System::Void OMMMCPEMGLB(::System::String* a1, ::System::Action_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_OMMMCPEMGLB_OFFSET))(this, a1, a2);
		}

		::System::Void JHNECMFNHOF(::System::String* a1, ::System::Action_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_JHNECMFNHOF_OFFSET))(this, a1, a2);
		}

		::System::Void HEHGKKIIDKF(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HEHGKKIIDKF_OFFSET))(this, a1, a2);
		}

		::System::Void GMACBEAPCKL(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_GMACBEAPCKL_OFFSET))(this, a1, a2);
		}

		::System::Void CJEDFONMPNG(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CJEDFONMPNG_OFFSET))(this, a1, a2);
		}

		::System::Single EANLMIKHCKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_EANLMIKHCKG_OFFSET))(this);
		}

		::System::Single HKGDJMJFMAJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HKGDJMJFMAJ_OFFSET))(this);
		}

		::System::Single ADGDILBOICG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_ADGDILBOICG_OFFSET))(this);
		}

		::System::Boolean IAAOBDCIKIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_IAAOBDCIKIM_OFFSET))(this);
		}

		::RPG::GameCore::TimeScaleStack* get_TimeScaleStack()
		{
			return ((::RPG::GameCore::TimeScaleStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_GET_TIMESCALESTACK_OFFSET))(this);
		}

		::System::Void set_TimeScaleStack(::RPG::GameCore::TimeScaleStack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeScaleStack*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_SET_TIMESCALESTACK_OFFSET))(this, a1);
		}

		::System::Boolean DOIGMAGLGCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_DOIGMAGLGCC_OFFSET))(this);
		}

		::KECODLJICEB* ECLOFPNEPNG()
		{
			return ((::KECODLJICEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_ECLOFPNEPNG_OFFSET))(this);
		}

		::DEKGKNGPOHI* NKPKIPPCLDA()
		{
			return ((::DEKGKNGPOHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_NKPKIPPCLDA_OFFSET))(this);
		}

		::MLFAGNKOOBJ* BIMENGEFCIK()
		{
			return ((::MLFAGNKOOBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BIMENGEFCIK_OFFSET))(this);
		}

		::MEFBCOKEFIN* JCCIOHHHGGL()
		{
			return ((::MEFBCOKEFIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_JCCIOHHHGGL_OFFSET))(this);
		}

		::UnityEngine::Transform* HAIBBMGHNLA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HAIBBMGHNLA_OFFSET))(this);
		}

		::System::Boolean KAGMGGJEFHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_KAGMGGJEFHB_OFFSET))(this);
		}

		::UnityEngine::Vector3 FPONNCJDDHE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_FPONNCJDDHE_OFFSET))(this);
		}

		::UnityEngine::Vector3 FKIMBIGHABI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_FKIMBIGHABI_OFFSET))(this);
		}

		::UnityEngine::Vector3 HFJBNLGLKAB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HFJBNLGLKAB_OFFSET))(this);
		}

	};
