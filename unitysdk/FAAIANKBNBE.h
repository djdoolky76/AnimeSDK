#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAAIANKBNBE_UseCameraAsStreamingCenterPosReason.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
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

#define FAAIANKBNBE_ADGDILBOICG_OFFSET UNITYSDK_OFFSET(0x156566B0)
#define FAAIANKBNBE_AHJDPJFPPJN_OFFSET UNITYSDK_OFFSET(0x156533D0)
#define FAAIANKBNBE_AOKHGOBABLE_OFFSET UNITYSDK_OFFSET(0x15654150)
#define FAAIANKBNBE_BDEPPNHCGLC_OFFSET UNITYSDK_OFFSET(0x15652410)
#define FAAIANKBNBE_BGENKGMIHEK_OFFSET UNITYSDK_OFFSET(0x15655BB0)
#define FAAIANKBNBE_BIMENGEFCIK_OFFSET UNITYSDK_OFFSET(0x15656800)
#define FAAIANKBNBE_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15651E90)
#define FAAIANKBNBE_BLCKMGCCKJC_OFFSET UNITYSDK_OFFSET(0x156542C0)
#define FAAIANKBNBE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15655180)
#define FAAIANKBNBE_CCFGDHBDGMJ_OFFSET UNITYSDK_OFFSET(0x156550B0)
#define FAAIANKBNBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x156569A0)
#define FAAIANKBNBE_CHIJJAGJCBP_OFFSET UNITYSDK_OFFSET(0x156525A0)
#define FAAIANKBNBE_CJEDFONMPNG_OFFSET UNITYSDK_OFFSET(0x156565B0)
#define FAAIANKBNBE_CJGCIKJCBCI_OFFSET UNITYSDK_OFFSET(0x15655DD0)
#define FAAIANKBNBE_CPKOJPJLEKJ_OFFSET UNITYSDK_OFFSET(0x15655FB0)
#define FAAIANKBNBE_CTOR_OFFSET UNITYSDK_OFFSET(0x156517B0)
#define FAAIANKBNBE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15652630)
#define FAAIANKBNBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15651E30)
#define FAAIANKBNBE_DKMDDHAKNLH_OFFSET UNITYSDK_OFFSET(0x156543A0)
#define FAAIANKBNBE_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x156567D0)
#define FAAIANKBNBE_DOJALNDLJBP_OFFSET UNITYSDK_OFFSET(0x15655CA0)
#define FAAIANKBNBE_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0x15656650)
#define FAAIANKBNBE_ECLOFPNEPNG_OFFSET UNITYSDK_OFFSET(0x156567E0)
#define FAAIANKBNBE_ELDMPBDGCBE_OFFSET UNITYSDK_OFFSET(0x15651710)
#define FAAIANKBNBE_FBAODODPDCI_OFFSET UNITYSDK_OFFSET(0x15655A70)
#define FAAIANKBNBE_FENMNNADNLJ_OFFSET UNITYSDK_OFFSET(0x15654CF0)
#define FAAIANKBNBE_FJPABKEKHHI_OFFSET UNITYSDK_OFFSET(0x156534B0)
#define FAAIANKBNBE_FKCNLIMCHGF_OFFSET UNITYSDK_OFFSET(0x15654DD0)
#define FAAIANKBNBE_FKIMBIGHABI_OFFSET UNITYSDK_OFFSET(0x156568E0)
#define FAAIANKBNBE_FOMAOAMABHB_OFFSET UNITYSDK_OFFSET(0x15655290)
#define FAAIANKBNBE_FPONNCJDDHE_OFFSET UNITYSDK_OFFSET(0x156568C0)
#define FAAIANKBNBE_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x156567B0)
#define FAAIANKBNBE_GET_USE_UNLOAD_MODE_OFFSET UNITYSDK_OFFSET(0x156516D0)
#define FAAIANKBNBE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x15651920)
#define FAAIANKBNBE_GMACBEAPCKL_OFFSET UNITYSDK_OFFSET(0x156564F0)
#define FAAIANKBNBE_HAIBBMGHNLA_OFFSET UNITYSDK_OFFSET(0x15656820)
#define FAAIANKBNBE_HBEJJHCJPIB_OFFSET UNITYSDK_OFFSET(0x15654BB0)
#define FAAIANKBNBE_HEHGKKIIDKF_OFFSET UNITYSDK_OFFSET(0x15656440)
#define FAAIANKBNBE_HFJBNLGLKAB_OFFSET UNITYSDK_OFFSET(0x15656900)
#define FAAIANKBNBE_HIKEGPJJNNK_OFFSET UNITYSDK_OFFSET(0x15652830)
#define FAAIANKBNBE_HKGDJMJFMAJ_OFFSET UNITYSDK_OFFSET(0x15652730)
#define FAAIANKBNBE_HLGJFDKFBNI_OFFSET UNITYSDK_OFFSET(0x15655510)
#define FAAIANKBNBE_HOCONHKFILE_OFFSET UNITYSDK_OFFSET(0x15655720)
#define FAAIANKBNBE_IAAOBDCIKIM_OFFSET UNITYSDK_OFFSET(0x15656750)
#define FAAIANKBNBE_IFOAJFIHFBB_OFFSET UNITYSDK_OFFSET(0x15653F80)
#define FAAIANKBNBE_IHAFANLELDI_OFFSET UNITYSDK_OFFSET(0x15655120)
#define FAAIANKBNBE_ILMKBAIKBDD_OFFSET UNITYSDK_OFFSET(0x15654950)
#define FAAIANKBNBE_IOIABOLNDIJ_OFFSET UNITYSDK_OFFSET(0x15655380)
#define FAAIANKBNBE_IOJLCJGMLGC_OFFSET UNITYSDK_OFFSET(0x15653B50)
#define FAAIANKBNBE_JBFEFABEKLG_OFFSET UNITYSDK_OFFSET(0x15654C80)
#define FAAIANKBNBE_JCCIOHHHGGL_OFFSET UNITYSDK_OFFSET(0x15656810)
#define FAAIANKBNBE_JFDGCBPJGEF_OFFSET UNITYSDK_OFFSET(0x15654F70)
#define FAAIANKBNBE_JHNECMFNHOF_OFFSET UNITYSDK_OFFSET(0x156562E0)
#define FAAIANKBNBE_JNHMDAFKPME_OFFSET UNITYSDK_OFFSET(0x15655B10)
#define FAAIANKBNBE_KAGMGGJEFHB_OFFSET UNITYSDK_OFFSET(0x156568B0)
#define FAAIANKBNBE_KBBIJDANIPL_OFFSET UNITYSDK_OFFSET(0x15654FF0)
#define FAAIANKBNBE_KDFJINHJJHD_OFFSET UNITYSDK_OFFSET(0x15654E40)
#define FAAIANKBNBE_KKCOGGOBILN_OFFSET UNITYSDK_OFFSET(0x15655830)
#define FAAIANKBNBE_KMHKOGIDIID_OFFSET UNITYSDK_OFFSET(0x15655CF0)
#define FAAIANKBNBE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15651C60)
#define FAAIANKBNBE_LCPCMEKJIPF_OFFSET UNITYSDK_OFFSET(0x15653510)
#define FAAIANKBNBE_LELIOLJPAKH_OFFSET UNITYSDK_OFFSET(0x15655600)
#define FAAIANKBNBE_LIMJCGPLHJC_OFFSET UNITYSDK_OFFSET(0x15654000)
#define FAAIANKBNBE_MAJHEOHGBLL_OFFSET UNITYSDK_OFFSET(0x15653800)
#define FAAIANKBNBE_MFIMLCBBLLI_OFFSET UNITYSDK_OFFSET(0x156559A0)
#define FAAIANKBNBE_MNEOGIBLHDD_OFFSET UNITYSDK_OFFSET(0x15653D90)
#define FAAIANKBNBE_NKBAEABBCGI_OFFSET UNITYSDK_OFFSET(0x15655A00)
#define FAAIANKBNBE_NKPKIPPCLDA_OFFSET UNITYSDK_OFFSET(0x156567F0)
#define FAAIANKBNBE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15652E00)
#define FAAIANKBNBE_OMMMCPEMGLB_OFFSET UNITYSDK_OFFSET(0x15656110)
#define FAAIANKBNBE_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x15654420)
#define FAAIANKBNBE_PKAABJFNMAG_OFFSET UNITYSDK_OFFSET(0x15655C00)
#define FAAIANKBNBE_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x156567C0)

inline static constexpr unsigned int FAAIANKBNBE_TypeDefinitionIndex = 69203;

	class FAAIANKBNBE : public ::System::Object
	{
	public:
		::MLFAGNKOOBJ* OHIFADIMNBI; // 0x10
		::DEKGKNGPOHI* LAHKCCHHPEI; // 0x18
		::MEFBCOKEFIN* GONBDOEJEEI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* CCCJFJHMKLL; // 0x28
		::System::String* PKDDJGKNAIA; // 0x30
		::UnityEngine::Transform* KDFKBLCDHAD; // 0x38
		::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0x40
		::RPG::GameCore::EntityManager* KDKBEPAJODM; // 0x48
		::RPG::Client::AdventurePhase* FPILJLGACHP; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* OHMLOKOKLDB; // 0x58
		::KECODLJICEB* MLJLFFKDFLN; // 0x60
		::DDKIDMKIJMG* OELFHGJGCMC; // 0x68
		::RPG::GameCore::LodConfig* HEBPCEFHMHF; // 0x70
		::RPG::GameCore::ConfigMunicipal* KNDIEMFEKOE; // 0x78
		::RPG::Client::MapDef* MJKJCCNJACA; // 0x80
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* JJDIAILEHIF; // 0x90
		::System::Boolean LMPBNBJGKNA; // 0x98
		::System::Boolean CKADKEJIEBK; // 0x99
		::System::Byte _padding0[0x2];
		::System::UInt32 GHILCHKJHBD; // 0x9C
		::System::Nullable_1<::UnityEngine::Vector3> LBFMKPLAAFD; // 0xA0
		::System::Byte _padding1[0x8];
		::System::Boolean AFNOIPANLJD; // 0xB0
		::System::Boolean OFJLMEBKLAF; // 0xB1
		::System::Boolean ECDGFEHILJN; // 0xB2
		::System::Boolean OBIGBOCLHDL; // 0xB3
		::UnityEngine::Vector3 KDBIIKOOGCP; // 0xB4
		::System::Boolean MKPIJNBFOKG; // 0xC0
		::System::Boolean AIBABFJNPFC; // 0xC1
		::System::Boolean KKKDDNFCPNL; // 0xC2
		::System::Boolean LPBDPPGMOBH; // 0xC3
		::UnityEngine::Vector3 JJJMGGNCEIA; // 0xC4
		::System::Boolean KLPIKIAJPND; // 0xD0
		::System::Boolean MMDJHHBDDOH; // 0xD1
		::System::Boolean AAECOAAJBFE; // 0xD2
		static ::RPG::Client::RPGProfilerMarker** StaticGet_IEPEBANINFA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x322D0);
		}

		static ::System::Object** StaticGet_HLOKPFHJPAK()
		{
			return (::System::Object**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x322D8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EPAOALAGIDG()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x322E0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GAIPMKOKLMK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x322E8);
		}

		static ::FAAIANKBNBE** StaticGet_EMLNOINPICJ()
		{
			return (::FAAIANKBNBE**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x322F0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_PGJENCNMHIO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x322F8);
		}

		static ::System::String** StaticGet_JDGBNEMINGK()
		{
			return (::System::String**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x32300);
		}

		static ::System::Int32* StaticGet_OHLDOJEPKIK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xA4F0);
		}

		static ::System::Boolean* StaticGet__USE_UNLOAD_MODE_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xA4F4);
		}

		static ::System::Boolean* StaticGet_MFAPAKONJHM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xA4F5);
		}

		static ::System::Int32* StaticGet_DLLJPLKOKNJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xA4F8);
		}

		static ::System::Int32* StaticGet_BCFCOBBLHHK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xA4FC);
		}

		static ::System::Int32* StaticGet_LPMNPMOGHNC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xA500);
		}

		static ::System::Int32* StaticGet_MNNGKCFIJDL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xA504);
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
