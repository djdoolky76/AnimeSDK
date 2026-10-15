#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFDAMFIHCHJ.h"
#include "unitysdk/PNKPEABDCGC.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IPKGHGJPNKB.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class BOCEFFDMFPM;
class NFCPIKFFCNA;
class ODMILIPHJGD;
class PNDFLJFPBBE;
namespace RPG::Client { class AssetMgr; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { template <typename T1, typename T2> class MHashLinkedList_2; }
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace RPG::Client::AssetSystem { class AssetObjectOptProxy; }
namespace RPG::Client::AssetSystem { template <typename T> class AssetOperationCache_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class Object; }

#define BOPECJBFFNJ_AACHGDPPNAE_OFFSET UNITYSDK_OFFSET(0x1C43B240)
#define BOPECJBFFNJ_AMEEJHDIHBH_OFFSET UNITYSDK_OFFSET(0x1C438FD0)
#define BOPECJBFFNJ_BALNBJJMPBH_OFFSET UNITYSDK_OFFSET(0x1C441940)
#define BOPECJBFFNJ_BCEKHBIGKEO_OFFSET UNITYSDK_OFFSET(0x1C4492E0)
#define BOPECJBFFNJ_BHGOLCNCPHE_OFFSET UNITYSDK_OFFSET(0x1C4485F0)
#define BOPECJBFFNJ_BLJLIHCPEAK_OFFSET UNITYSDK_OFFSET(0x1C445800)
#define BOPECJBFFNJ_BMECDPJDGAA_OFFSET UNITYSDK_OFFSET(0x1C444730)
#define BOPECJBFFNJ_BPMHDCMFGGG_OFFSET UNITYSDK_OFFSET(0x1C43E790)
#define BOPECJBFFNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C44AB00)
#define BOPECJBFFNJ_CIIPOAGJOEE_OFFSET UNITYSDK_OFFSET(0x1C445D70)
#define BOPECJBFFNJ_CODFPOCCPHK_OFFSET UNITYSDK_OFFSET(0x1C43DE80)
#define BOPECJBFFNJ_COMKMFMHIPI_OFFSET UNITYSDK_OFFSET(0x1C444780)
#define BOPECJBFFNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4448A0)
#define BOPECJBFFNJ_DFIJNFCHMAH_OFFSET UNITYSDK_OFFSET(0x1C443570)
#define BOPECJBFFNJ_DIHIODGKKLA_OFFSET UNITYSDK_OFFSET(0x1C4442A0)
#define BOPECJBFFNJ_DJMFFOFLOKK_OFFSET UNITYSDK_OFFSET(0x1C444350)
#define BOPECJBFFNJ_DNLBJCEIIKD_OFFSET UNITYSDK_OFFSET(0x1C447970)
#define BOPECJBFFNJ_DOHGIAACBII_OFFSET UNITYSDK_OFFSET(0x1C446870)
#define BOPECJBFFNJ_EJNCKGEAKOF_OFFSET UNITYSDK_OFFSET(0x1C444890)
#define BOPECJBFFNJ_FAKDGHIIFJB_OFFSET UNITYSDK_OFFSET(0x1C447740)
#define BOPECJBFFNJ_FCNANIKMNHF_OFFSET UNITYSDK_OFFSET(0x1C443D80)
#define BOPECJBFFNJ_FIHCBKNODMA_OFFSET UNITYSDK_OFFSET(0x1C449810)
#define BOPECJBFFNJ_FIMJMCLJOON_OFFSET UNITYSDK_OFFSET(0x1C444BA0)
#define BOPECJBFFNJ_GNJLGGPIKLH_OFFSET UNITYSDK_OFFSET(0x1C4390A0)
#define BOPECJBFFNJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C444BF0)
#define BOPECJBFFNJ_HELHFOPHDBM_OFFSET UNITYSDK_OFFSET(0x1C4460B0)
#define BOPECJBFFNJ_HPJGCNEDNFL_OFFSET UNITYSDK_OFFSET(0x1C444EE0)
#define BOPECJBFFNJ_ICFBAKNLAPI_OFFSET UNITYSDK_OFFSET(0x1C440AA0)
#define BOPECJBFFNJ_IDBBJPOKEPA_1_OFFSET UNITYSDK_OFFSET(0x1C445CE0)
#define BOPECJBFFNJ_IDBBJPOKEPA_OFFSET UNITYSDK_OFFSET(0x1C445A70)
#define BOPECJBFFNJ_IEBAKNONHKA_OFFSET UNITYSDK_OFFSET(0x1C444230)
#define BOPECJBFFNJ_IIIJICBENNM_OFFSET UNITYSDK_OFFSET(0x1C443F10)
#define BOPECJBFFNJ_JJAJLCPBKPO_OFFSET UNITYSDK_OFFSET(0x1C4435F0)
#define BOPECJBFFNJ_KEHIHFJELEH_OFFSET UNITYSDK_OFFSET(0x1C443A20)
#define BOPECJBFFNJ_KFCONOEFOBA_OFFSET UNITYSDK_OFFSET(0x1C449E00)
#define BOPECJBFFNJ_KOEGNKOHHEI_OFFSET UNITYSDK_OFFSET(0x1C4446E0)
#define BOPECJBFFNJ_LFCKBDMCPII_OFFSET UNITYSDK_OFFSET(0x1C447540)
#define BOPECJBFFNJ_MCDPMJFKGEC_OFFSET UNITYSDK_OFFSET(0x1C442F00)
#define BOPECJBFFNJ_MIOMGLAFIFD_OFFSET UNITYSDK_OFFSET(0x1C438ED0)
#define BOPECJBFFNJ_MJDHOPHLDJE_1_OFFSET UNITYSDK_OFFSET(0x1C445F50)
#define BOPECJBFFNJ_MJDHOPHLDJE_OFFSET UNITYSDK_OFFSET(0x1C445E10)
#define BOPECJBFFNJ_MNIJJBNAOJD_OFFSET UNITYSDK_OFFSET(0x1C445290)
#define BOPECJBFFNJ_NABPJPFFDIP_OFFSET UNITYSDK_OFFSET(0x1C444840)
#define BOPECJBFFNJ_NKECLAJKCDH_1_OFFSET UNITYSDK_OFFSET(0x1C446EA0)
#define BOPECJBFFNJ_NKECLAJKCDH_OFFSET UNITYSDK_OFFSET(0x1C444580)
#define BOPECJBFFNJ_NLFMDKKPLJK_1_OFFSET UNITYSDK_OFFSET(0x1C449170)
#define BOPECJBFFNJ_NLFMDKKPLJK_OFFSET UNITYSDK_OFFSET(0x1C448EE0)
#define BOPECJBFFNJ_NMEHGDDJFKM_OFFSET UNITYSDK_OFFSET(0x1C43E7D0)
#define BOPECJBFFNJ_NNDDDCKIFOK_OFFSET UNITYSDK_OFFSET(0x1C43DE90)
#define BOPECJBFFNJ_ODKNAHBJLDP_OFFSET UNITYSDK_OFFSET(0x1C44A100)
#define BOPECJBFFNJ_PGHHFBLOHKM_OFFSET UNITYSDK_OFFSET(0x1C44A560)
#define BOPECJBFFNJ_PHBHFPIBPOG_OFFSET UNITYSDK_OFFSET(0x1C4495E0)
#define BOPECJBFFNJ_PHOANPDFMPG_OFFSET UNITYSDK_OFFSET(0x1C4459E0)
#define BOPECJBFFNJ_PJHOCIKFAFI_OFFSET UNITYSDK_OFFSET(0x1C43FD50)
#define BOPECJBFFNJ_PNGOKMCKKEA_OFFSET UNITYSDK_OFFSET(0x1C4475F0)
#define BOPECJBFFNJ_POAHNMILDNM_OFFSET UNITYSDK_OFFSET(0x1C4447E0)
#define BOPECJBFFNJ_PODLKOGHGMA_1_OFFSET UNITYSDK_OFFSET(0x1C446500)
#define BOPECJBFFNJ_PODLKOGHGMA_OFFSET UNITYSDK_OFFSET(0x1C444490)
#define BOPECJBFFNJ__CLEARCACHE_B__48_0_OFFSET UNITYSDK_OFFSET(0x1C44AB40)

inline static constexpr unsigned int BOPECJBFFNJ_TypeDefinitionIndex = 41574;

	class BOPECJBFFNJ : public ::System::Object
	{
	public:
		::RPG::Client::MHashLinkedList_2<::NFCPIKFFCNA*, ::NFCPIKFFCNA*>* GLNPDKIKBHB; // 0x10
		::System::Collections::Generic::Dictionary_2<::PNKPEABDCGC, ::RPG::Client::AssetSystem::AssetLoader*>* GDHNLLBEEFN; // 0x18
		::RPG::Client::AssetSystem::AssetOperationCache_1<::NFCPIKFFCNA*>* DLFGIOBPPLP; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::AssetSystem::AssetLoader*>* LMDGBKAHCGN; // 0x28
		::RPG::Client::MHashLinkedList_2<::NFCPIKFFCNA*, ::NFCPIKFFCNA*>* IPILHPCPIKG; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BOCEFFDMFPM*>* MFPEGINPPCN; // 0x38
		::ODMILIPHJGD* CDMOKNNGKCC; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>* BJIDKALLCJB; // 0x48
		::RPG::Client::AssetMgr* HEDOONDANFG; // 0x50
		::RPG::Client::MHashLinkedList_2<::System::UInt64, ::BOCEFFDMFPM*>* CFDKAJJCOCG; // 0x58
		::RPG::Client::MHashLinkedList_2<::System::UInt64, ::BOCEFFDMFPM*>* DLOJIPGDFDM; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::JFDAMFIHCHJ>* GBDIFMCIOIF; // 0x68
		::System::Boolean JGCOOGFLFGA; // 0x70
		::System::Boolean EHFEJHKFDAJ; // 0x71
		::System::Boolean MICKGCNKCKA; // 0x72
		::System::Byte _padding0[0x1];
		::System::Int32 JIKJHEJGNOF; // 0x74
		::System::Int32 BLPIKELOGAA; // 0x78
		static ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>** StaticGet_GODDALPLAGF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>**)UnitySDK::FromName("", "BOPECJBFFNJ")->GetStaticField(0x11AC0);
		}

		::System::Void _ctor(::RPG::Client::AssetMgr* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetMgr*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOPECJBFFNJ_CCTOR_OFFSET))();
		}

		::System::Void GNJLGGPIKLH(::System::UInt64 a1, ::BOCEFFDMFPM* a2, ::RPG::Client::LoaderState a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::BOCEFFDMFPM*, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_GNJLGGPIKLH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BALNBJJMPBH(::PNKPEABDCGC a1, ::RPG::Client::AssetSystem::AssetLoader* a2, ::RPG::Client::LoaderState a3)
		{
			return ((::System::Void(*)(::PVOID, ::PNKPEABDCGC, ::RPG::Client::AssetSystem::AssetLoader*, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_BALNBJJMPBH_OFFSET))(this, a1, a2, a3);
		}

		::BOCEFFDMFPM* MCDPMJFKGEC(::System::UInt64 a1, ::IPKGHGJPNKB a2)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::UInt64, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_MCDPMJFKGEC_OFFSET))(this, a1, a2);
		}

		::BOCEFFDMFPM* AMEEJHDIHBH(::BOCEFFDMFPM* a1, ::System::UInt64 a2, ::IPKGHGJPNKB a3)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::BOCEFFDMFPM*, ::System::UInt64, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_AMEEJHDIHBH_OFFSET))(this, a1, a2, a3);
		}

		::BOCEFFDMFPM* DFIJNFCHMAH(::System::UInt64 a1, ::IPKGHGJPNKB a2)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::UInt64, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_DFIJNFCHMAH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AssetSystem::AssetLoader* JJAJLCPBKPO(::System::String* a1, ::BOCEFFDMFPM* a2, ::IPKGHGJPNKB a3)
		{
			return ((::RPG::Client::AssetSystem::AssetLoader*(*)(::PVOID, ::System::String*, ::BOCEFFDMFPM*, ::IPKGHGJPNKB))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_JJAJLCPBKPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KEHIHFJELEH(::System::UInt64 a1, ::BOCEFFDMFPM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_KEHIHFJELEH_OFFSET))(this, a1, a2);
		}

		::System::Void IIIJICBENNM(::System::UInt64 a1, ::BOCEFFDMFPM* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::BOCEFFDMFPM*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_IIIJICBENNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PODLKOGHGMA(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_PODLKOGHGMA_OFFSET))(this, a1);
		}

		::System::Void NKECLAJKCDH(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_NKECLAJKCDH_OFFSET))(this, a1);
		}

		::System::Void FCNANIKMNHF(::BOCEFFDMFPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_FCNANIKMNHF_OFFSET))(this, a1);
		}

		::System::Void DJMFFOFLOKK(::BOCEFFDMFPM* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOCEFFDMFPM*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_DJMFFOFLOKK_OFFSET))(this, a1, a2);
		}

		::System::Void DIHIODGKKLA(::BOCEFFDMFPM* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOCEFFDMFPM*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_DIHIODGKKLA_OFFSET))(this, a1, a2);
		}

		::System::Int32 KOEGNKOHHEI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_KOEGNKOHHEI_OFFSET))(this);
		}

		::System::Int32 BMECDPJDGAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_BMECDPJDGAA_OFFSET))(this);
		}

		::System::Int32 COMKMFMHIPI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_COMKMFMHIPI_OFFSET))(this);
		}

		::System::Int32 POAHNMILDNM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_POAHNMILDNM_OFFSET))(this);
		}

		::System::Int32 NABPJPFFDIP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_NABPJPFFDIP_OFFSET))(this);
		}

		::System::Boolean CODFPOCCPHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_CODFPOCCPHK_OFFSET))(this);
		}

		::System::Int32 EJNCKGEAKOF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_EJNCKGEAKOF_OFFSET))(this);
		}

		::System::Void FIMJMCLJOON(::ODMILIPHJGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODMILIPHJGD*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_FIMJMCLJOON_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BLJLIHCPEAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_BLJLIHCPEAK_OFFSET))(this);
		}

		::System::Boolean PHOANPDFMPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_PHOANPDFMPG_OFFSET))(this);
		}

		::BOCEFFDMFPM* IDBBJPOKEPA(::System::UInt64 a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_IDBBJPOKEPA_OFFSET))(this, a1);
		}

		::BOCEFFDMFPM* MIOMGLAFIFD(::System::UInt64 a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_MIOMGLAFIFD_OFFSET))(this, a1);
		}

		::BOCEFFDMFPM* IDBBJPOKEPA_1(::System::String* a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_IDBBJPOKEPA_1_OFFSET))(this, a1);
		}

		::BOCEFFDMFPM* CIIPOAGJOEE(::System::UInt64 a1)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_CIIPOAGJOEE_OFFSET))(this, a1);
		}

		::RPG::Client::AssetSystem::AssetLoader* MJDHOPHLDJE(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::AssetSystem::AssetLoader*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_MJDHOPHLDJE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AssetSystem::AssetLoader* MJDHOPHLDJE_1(::UnityEngine::Object* a1)
		{
			return ((::RPG::Client::AssetSystem::AssetLoader*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_MJDHOPHLDJE_1_OFFSET))(this, a1);
		}

		::System::Boolean HELHFOPHDBM(::PNKPEABDCGC a1, ::RPG::Client::AssetSystem::AssetLoader* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNKPEABDCGC, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_HELHFOPHDBM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAssetOperation* PODLKOGHGMA_1(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_PODLKOGHGMA_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AssetSystem::AssetObjectOptProxy* NKECLAJKCDH_1(::System::String* a1, ::System::Type* a2, ::System::Object* a3, ::RPG::Client::OnAssetOperationDelegate* a4, ::System::Int32 a5)
		{
			return ((::RPG::Client::AssetSystem::AssetObjectOptProxy*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_NKECLAJKCDH_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IEBAKNONHKA(::NFCPIKFFCNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFCPIKFFCNA*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_IEBAKNONHKA_OFFSET))(this, a1);
		}

		::System::Void ICFBAKNLAPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_ICFBAKNLAPI_OFFSET))(this);
		}

		::BOCEFFDMFPM* LFCKBDMCPII()
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_LFCKBDMCPII_OFFSET))(this);
		}

		::System::Void PJHOCIKFAFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_PJHOCIKFAFI_OFFSET))(this);
		}

		::System::Void HPJGCNEDNFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_HPJGCNEDNFL_OFFSET))(this);
		}

		::BOCEFFDMFPM* PNGOKMCKKEA(::System::String* a1, ::System::Type* a2)
		{
			return ((::BOCEFFDMFPM*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_PNGOKMCKKEA_OFFSET))(this, a1, a2);
		}

		::System::Boolean FAKDGHIIFJB(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_FAKDGHIIFJB_OFFSET))(this, a1);
		}

		::System::Boolean BHGOLCNCPHE(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_BHGOLCNCPHE_OFFSET))(this, a1);
		}

		::System::Boolean DNLBJCEIIKD(::System::UInt64 a1, ::System::Int32 a2, ::System::Type* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_DNLBJCEIIKD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DOHGIAACBII(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_DOHGIAACBII_OFFSET))(this, a1);
		}

		::System::Void NLFMDKKPLJK(::System::UInt64 a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_NLFMDKKPLJK_OFFSET))(this, a1, a2);
		}

		::System::Void NLFMDKKPLJK_1(::BOCEFFDMFPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_NLFMDKKPLJK_1_OFFSET))(this, a1);
		}

		::System::Void BCEKHBIGKEO(::System::Collections::Generic::List_1<::BOCEFFDMFPM*>* a1, ::RPG::Client::MHashLinkedList_2<::System::UInt64, ::BOCEFFDMFPM*>* a2, ::System::Action_1<::BOCEFFDMFPM*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BOCEFFDMFPM*>*, ::RPG::Client::MHashLinkedList_2<::System::UInt64, ::BOCEFFDMFPM*>*, ::System::Action_1<::BOCEFFDMFPM*>*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_BCEKHBIGKEO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MNIJJBNAOJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_MNIJJBNAOJD_OFFSET))(this);
		}

		::System::Void PHBHFPIBPOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_PHBHFPIBPOG_OFFSET))(this);
		}

		::System::Void FIHCBKNODMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_FIHCBKNODMA_OFFSET))(this);
		}

		::System::Void KFCONOEFOBA(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_KFCONOEFOBA_OFFSET))(this, a1);
		}

		::System::Void NNDDDCKIFOK(::NFCPIKFFCNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFCPIKFFCNA*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_NNDDDCKIFOK_OFFSET))(this, a1);
		}

		::System::Void AACHGDPPNAE(::NFCPIKFFCNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFCPIKFFCNA*))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_AACHGDPPNAE_OFFSET))(this, a1);
		}

		::System::Void BPMHDCMFGGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_BPMHDCMFGGG_OFFSET))(this);
		}

		::System::Void NMEHGDDJFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_NMEHGDDJFKM_OFFSET))(this);
		}

		::System::Void ODKNAHBJLDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_ODKNAHBJLDP_OFFSET))(this);
		}

		::PNDFLJFPBBE* PGHHFBLOHKM()
		{
			return ((::PNDFLJFPBBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPECJBFFNJ_PGHHFBLOHKM_OFFSET))(this);
		}

		::System::Boolean _ClearCache_b__48_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::UInt64> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::UInt64>))((::PBYTE)hIl2Cpp + BOPECJBFFNJ__CLEARCACHE_B__48_0_OFFSET))(this, a1);
		}

	};
