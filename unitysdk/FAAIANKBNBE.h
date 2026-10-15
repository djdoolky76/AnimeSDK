#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAAIANKBNBE_UseCameraAsStreamingCenterPosReason.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
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
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define FAAIANKBNBE_ADGDILBOICG_OFFSET UNITYSDK_OFFSET(0x15662380)
#define FAAIANKBNBE_AHJDPJFPPJN_OFFSET UNITYSDK_OFFSET(0x1565F0A0)
#define FAAIANKBNBE_AOKHGOBABLE_OFFSET UNITYSDK_OFFSET(0x1565FE20)
#define FAAIANKBNBE_BDEPPNHCGLC_OFFSET UNITYSDK_OFFSET(0x1565E0E0)
#define FAAIANKBNBE_BGENKGMIHEK_OFFSET UNITYSDK_OFFSET(0x15661890)
#define FAAIANKBNBE_BIMENGEFCIK_OFFSET UNITYSDK_OFFSET(0x156624D0)
#define FAAIANKBNBE_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x1565DB50)
#define FAAIANKBNBE_BLCKMGCCKJC_OFFSET UNITYSDK_OFFSET(0x1565FF80)
#define FAAIANKBNBE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15660E50)
#define FAAIANKBNBE_CCFGDHBDGMJ_OFFSET UNITYSDK_OFFSET(0x15660D80)
#define FAAIANKBNBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15662670)
#define FAAIANKBNBE_CHIJJAGJCBP_OFFSET UNITYSDK_OFFSET(0x1565E270)
#define FAAIANKBNBE_CJEDFONMPNG_OFFSET UNITYSDK_OFFSET(0x15662280)
#define FAAIANKBNBE_CJGCIKJCBCI_OFFSET UNITYSDK_OFFSET(0x15661AB0)
#define FAAIANKBNBE_CPKOJPJLEKJ_OFFSET UNITYSDK_OFFSET(0x15661C80)
#define FAAIANKBNBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1565D470)
#define FAAIANKBNBE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1565E300)
#define FAAIANKBNBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1565DAF0)
#define FAAIANKBNBE_DKMDDHAKNLH_OFFSET UNITYSDK_OFFSET(0x15660060)
#define FAAIANKBNBE_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x156624A0)
#define FAAIANKBNBE_DOJALNDLJBP_OFFSET UNITYSDK_OFFSET(0x15661980)
#define FAAIANKBNBE_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0x15662320)
#define FAAIANKBNBE_ECLOFPNEPNG_OFFSET UNITYSDK_OFFSET(0x156624B0)
#define FAAIANKBNBE_ELDMPBDGCBE_OFFSET UNITYSDK_OFFSET(0x1565D3D0)
#define FAAIANKBNBE_FBAODODPDCI_OFFSET UNITYSDK_OFFSET(0x15661750)
#define FAAIANKBNBE_FENMNNADNLJ_OFFSET UNITYSDK_OFFSET(0x156609B0)
#define FAAIANKBNBE_FJPABKEKHHI_OFFSET UNITYSDK_OFFSET(0x1565F180)
#define FAAIANKBNBE_FKCNLIMCHGF_OFFSET UNITYSDK_OFFSET(0x15660A80)
#define FAAIANKBNBE_FKIMBIGHABI_OFFSET UNITYSDK_OFFSET(0x156625B0)
#define FAAIANKBNBE_FOMAOAMABHB_OFFSET UNITYSDK_OFFSET(0x15660F60)
#define FAAIANKBNBE_FPONNCJDDHE_OFFSET UNITYSDK_OFFSET(0x15662590)
#define FAAIANKBNBE_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x15662480)
#define FAAIANKBNBE_GET_USE_UNLOAD_MODE_OFFSET UNITYSDK_OFFSET(0x1565D390)
#define FAAIANKBNBE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1565D5E0)
#define FAAIANKBNBE_GMACBEAPCKL_OFFSET UNITYSDK_OFFSET(0x156621C0)
#define FAAIANKBNBE_HAIBBMGHNLA_OFFSET UNITYSDK_OFFSET(0x156624F0)
#define FAAIANKBNBE_HBEJJHCJPIB_OFFSET UNITYSDK_OFFSET(0x15660870)
#define FAAIANKBNBE_HEHGKKIIDKF_OFFSET UNITYSDK_OFFSET(0x15662110)
#define FAAIANKBNBE_HFJBNLGLKAB_OFFSET UNITYSDK_OFFSET(0x156625D0)
#define FAAIANKBNBE_HIKEGPJJNNK_OFFSET UNITYSDK_OFFSET(0x1565E500)
#define FAAIANKBNBE_HKGDJMJFMAJ_OFFSET UNITYSDK_OFFSET(0x1565E400)
#define FAAIANKBNBE_HLGJFDKFBNI_OFFSET UNITYSDK_OFFSET(0x156611F0)
#define FAAIANKBNBE_HOCONHKFILE_OFFSET UNITYSDK_OFFSET(0x15661400)
#define FAAIANKBNBE_IAAOBDCIKIM_OFFSET UNITYSDK_OFFSET(0x15662420)
#define FAAIANKBNBE_IFOAJFIHFBB_OFFSET UNITYSDK_OFFSET(0x1565FC50)
#define FAAIANKBNBE_IHAFANLELDI_OFFSET UNITYSDK_OFFSET(0x15660DF0)
#define FAAIANKBNBE_ILMKBAIKBDD_OFFSET UNITYSDK_OFFSET(0x15660610)
#define FAAIANKBNBE_IOIABOLNDIJ_OFFSET UNITYSDK_OFFSET(0x15661050)
#define FAAIANKBNBE_IOJLCJGMLGC_OFFSET UNITYSDK_OFFSET(0x1565F820)
#define FAAIANKBNBE_JBFEFABEKLG_OFFSET UNITYSDK_OFFSET(0x15660940)
#define FAAIANKBNBE_JCCIOHHHGGL_OFFSET UNITYSDK_OFFSET(0x156624E0)
#define FAAIANKBNBE_JFDGCBPJGEF_OFFSET UNITYSDK_OFFSET(0x15660C30)
#define FAAIANKBNBE_JHNECMFNHOF_OFFSET UNITYSDK_OFFSET(0x15661FB0)
#define FAAIANKBNBE_JNHMDAFKPME_OFFSET UNITYSDK_OFFSET(0x156617F0)
#define FAAIANKBNBE_KAGMGGJEFHB_OFFSET UNITYSDK_OFFSET(0x15662580)
#define FAAIANKBNBE_KBBIJDANIPL_OFFSET UNITYSDK_OFFSET(0x15660CC0)
#define FAAIANKBNBE_KDFJINHJJHD_OFFSET UNITYSDK_OFFSET(0x15660AF0)
#define FAAIANKBNBE_KKCOGGOBILN_OFFSET UNITYSDK_OFFSET(0x15661510)
#define FAAIANKBNBE_KMHKOGIDIID_OFFSET UNITYSDK_OFFSET(0x156619D0)
#define FAAIANKBNBE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1565D920)
#define FAAIANKBNBE_LCPCMEKJIPF_OFFSET UNITYSDK_OFFSET(0x1565F1E0)
#define FAAIANKBNBE_LELIOLJPAKH_OFFSET UNITYSDK_OFFSET(0x156612E0)
#define FAAIANKBNBE_LIMJCGPLHJC_OFFSET UNITYSDK_OFFSET(0x1565FCD0)
#define FAAIANKBNBE_MAJHEOHGBLL_OFFSET UNITYSDK_OFFSET(0x1565F4D0)
#define FAAIANKBNBE_MFIMLCBBLLI_OFFSET UNITYSDK_OFFSET(0x15661680)
#define FAAIANKBNBE_MNEOGIBLHDD_OFFSET UNITYSDK_OFFSET(0x1565FA60)
#define FAAIANKBNBE_NKBAEABBCGI_OFFSET UNITYSDK_OFFSET(0x156616E0)
#define FAAIANKBNBE_NKPKIPPCLDA_OFFSET UNITYSDK_OFFSET(0x156624C0)
#define FAAIANKBNBE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1565EAD0)
#define FAAIANKBNBE_OMMMCPEMGLB_OFFSET UNITYSDK_OFFSET(0x15661DE0)
#define FAAIANKBNBE_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x156600D0)
#define FAAIANKBNBE_PKAABJFNMAG_OFFSET UNITYSDK_OFFSET(0x156618E0)
#define FAAIANKBNBE_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x15662490)

inline static constexpr unsigned int FAAIANKBNBE_TypeDefinitionIndex = 69203;

	class FAAIANKBNBE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* CCCJFJHMKLL; // 0x10
		::DEKGKNGPOHI* LAHKCCHHPEI; // 0x18
		::RPG::Client::MapDef* MJKJCCNJACA; // 0x20
		::RPG::Client::AdventurePhase* FPILJLGACHP; // 0x28
		::UnityEngine::Transform* KDFKBLCDHAD; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* OHMLOKOKLDB; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* JJDIAILEHIF; // 0x40
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x48
		::RPG::GameCore::EntityManager* KDKBEPAJODM; // 0x50
		::RPG::GameCore::ConfigMunicipal* KNDIEMFEKOE; // 0x58
		::MEFBCOKEFIN* GONBDOEJEEI; // 0x60
		::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0x68
		::KECODLJICEB* MLJLFFKDFLN; // 0x70
		::DDKIDMKIJMG* OELFHGJGCMC; // 0x78
		::MLFAGNKOOBJ* OHIFADIMNBI; // 0x80
		::System::String* PKDDJGKNAIA; // 0x88
		::RPG::GameCore::LodConfig* HEBPCEFHMHF; // 0x90
		::System::Boolean ECDGFEHILJN; // 0x98
		::System::Boolean LMPBNBJGKNA; // 0x99
		::System::Boolean AIBABFJNPFC; // 0x9A
		::System::Boolean CKADKEJIEBK; // 0x9B
		::System::Boolean AFNOIPANLJD; // 0x9C
		::System::Boolean KLPIKIAJPND; // 0x9D
		::System::Boolean KKKDDNFCPNL; // 0x9E
		::System::Boolean AAECOAAJBFE; // 0x9F
		::System::Boolean MKPIJNBFOKG; // 0xA0
		::System::Boolean MMDJHHBDDOH; // 0xA1
		::System::Boolean OFJLMEBKLAF; // 0xA2
		::System::Boolean OBIGBOCLHDL; // 0xA3
		::System::Boolean LPBDPPGMOBH; // 0xA4
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 JJJMGGNCEIA; // 0xA8
		::System::UInt32 GHILCHKJHBD; // 0xB4
		::UnityEngine::Vector3 KDBIIKOOGCP; // 0xB8
		::System::Nullable* LBFMKPLAAFD; // 0xC4
		static ::FAAIANKBNBE** StaticGet_EMLNOINPICJ()
		{
			return (::FAAIANKBNBE**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x32E40);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_PGJENCNMHIO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x32E48);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_IEPEBANINFA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x32E50);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EPAOALAGIDG()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x32E58);
		}

		static ::System::Object** StaticGet_HLOKPFHJPAK()
		{
			return (::System::Object**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x32E60);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_GAIPMKOKLMK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x32E68);
		}

		static ::System::String** StaticGet_JDGBNEMINGK()
		{
			return (::System::String**)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0x32E70);
		}

		static ::System::Boolean* StaticGet_MFAPAKONJHM()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xAB40);
		}

		static ::System::Boolean* StaticGet__USE_UNLOAD_MODE_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xAB41);
		}

		static ::System::Int32* StaticGet_MNNGKCFIJDL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xAB44);
		}

		static ::System::Int32* StaticGet_DLLJPLKOKNJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xAB48);
		}

		static ::System::Int32* StaticGet_LPMNPMOGHNC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xAB4C);
		}

		static ::System::Int32* StaticGet_OHLDOJEPKIK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xAB50);
		}

		static ::System::Int32* StaticGet_BCFCOBBLHHK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAIANKBNBE")->GetStaticField(0xAB54);
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

		::System::Void BDEPPNHCGLC(::System::Nullable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*, ::System::String*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BDEPPNHCGLC_OFFSET))(this, a1, a2);
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

		::RPG::GameCore::GameEntity* LIMJCGPLHJC(::RPG::Client::AssemNPC* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a3, ::System::String* a4, ::RPG::Client::EAssemblyNPC a5, ::UnityEngine::Vector3 a6, ::System::UInt32 a7, ::System::Action* a8)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::System::String*, ::RPG::Client::EAssemblyNPC, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_LIMJCGPLHJC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void AOKHGOBABLE(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_AOKHGOBABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* BLCKMGCCKJC(::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* a1, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* a2, ::UnityEngine::Vector3 a3, ::System::Action* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_BLCKMGCCKJC_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void CJGCIKJCBCI(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CJGCIKJCBCI_OFFSET))(this, a1, a2);
		}

		::System::Void CPKOJPJLEKJ(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CPKOJPJLEKJ_OFFSET))(this, a1, a2);
		}

		::System::Void OMMMCPEMGLB(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_OMMMCPEMGLB_OFFSET))(this, a1, a2);
		}

		::System::Void JHNECMFNHOF(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_JHNECMFNHOF_OFFSET))(this, a1, a2);
		}

		::System::Void HEHGKKIIDKF(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_HEHGKKIIDKF_OFFSET))(this, a1, a2);
		}

		::System::Void GMACBEAPCKL(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_GMACBEAPCKL_OFFSET))(this, a1, a2);
		}

		::System::Void CJEDFONMPNG(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + FAAIANKBNBE_CJEDFONMPNG_OFFSET))(this, a1, a2);
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
