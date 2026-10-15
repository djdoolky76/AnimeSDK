#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/OpenWorldCullingPauseReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class BGNDPIPJFCI;
class FCCJBBDBHCA;
class FCOEMCEDLNL;
class HPKACEPPPCA;
class KGPLCHGEGMD;
class LJFHKAJPFNE;
class NCNPCENKKGN;
class OLMJHHNPJJH;
class PLEDOEKMLCN;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG { class IReference; }
namespace RPG::Client { class PVSDebugMono; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerSetting; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace RPG::GameCore { class OfflineCullingLod; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StagePVSData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class TextAsset; }

#define APMFKFNCCHH_ABKKJIBEBHA_OFFSET UNITYSDK_OFFSET(0x15BB81D0)
#define APMFKFNCCHH_ABNALGJICPC_OFFSET UNITYSDK_OFFSET(0x15BBEC60)
#define APMFKFNCCHH_ADOJEIDGKOL_OFFSET UNITYSDK_OFFSET(0x15BB8230)
#define APMFKFNCCHH_BIBIIMAHAKB_OFFSET UNITYSDK_OFFSET(0x15BB7940)
#define APMFKFNCCHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BBEF60)
#define APMFKFNCCHH_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB4BD0)
#define APMFKFNCCHH_DHHPINDLPJH_OFFSET UNITYSDK_OFFSET(0x15BBE8E0)
#define APMFKFNCCHH_DNPBNFFBCID_OFFSET UNITYSDK_OFFSET(0x15BB8610)
#define APMFKFNCCHH_EDHHHIKCHPH_OFFSET UNITYSDK_OFFSET(0x15BBCC40)
#define APMFKFNCCHH_EDIHHHMNMMK_OFFSET UNITYSDK_OFFSET(0x15BB8520)
#define APMFKFNCCHH_EEEAMAPMDDF_OFFSET UNITYSDK_OFFSET(0x15BB9850)
#define APMFKFNCCHH_EOKFAMBHPHG_OFFSET UNITYSDK_OFFSET(0x15BB9520)
#define APMFKFNCCHH_FDCEFLFOGIO_OFFSET UNITYSDK_OFFSET(0x15BB7D70)
#define APMFKFNCCHH_FDMNDEDEDOD_OFFSET UNITYSDK_OFFSET(0x15BB98C0)
#define APMFKFNCCHH_FIOGPHDEDLK_OFFSET UNITYSDK_OFFSET(0x15BB9670)
#define APMFKFNCCHH_FJHGMBFNFJH_OFFSET UNITYSDK_OFFSET(0x15BBE7F0)
#define APMFKFNCCHH_FOBNNIEINCK_OFFSET UNITYSDK_OFFSET(0x15BBDCD0)
#define APMFKFNCCHH_FOEJHGAKBBI_OFFSET UNITYSDK_OFFSET(0x15BB9BB0)
#define APMFKFNCCHH_FPFIKNEGHCA_OFFSET UNITYSDK_OFFSET(0x15BB8710)
#define APMFKFNCCHH_GET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x15BBE920)
#define APMFKFNCCHH_GET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x15BB4B60)
#define APMFKFNCCHH_GFJFCAMHCOK_OFFSET UNITYSDK_OFFSET(0x15BBEB10)
#define APMFKFNCCHH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15BB72B0)
#define APMFKFNCCHH_HHFONBFOGCA_OFFSET UNITYSDK_OFFSET(0x15BBE940)
#define APMFKFNCCHH_HMPFPFNHOLK_OFFSET UNITYSDK_OFFSET(0x15BBEE10)
#define APMFKFNCCHH_ICABECIMMGC_OFFSET UNITYSDK_OFFSET(0x15BB7740)
#define APMFKFNCCHH_IFHDKHHMBFJ_OFFSET UNITYSDK_OFFSET(0x15BBE900)
#define APMFKFNCCHH_JLBNKAMAOHJ_OFFSET UNITYSDK_OFFSET(0x15BB8B60)
#define APMFKFNCCHH_JLOLGLLIBKE_OFFSET UNITYSDK_OFFSET(0x15BB8430)
#define APMFKFNCCHH_JMOHCMJEOMC_OFFSET UNITYSDK_OFFSET(0x15BB8150)
#define APMFKFNCCHH_JPHPAKAGJHA_OFFSET UNITYSDK_OFFSET(0x15BBE210)
#define APMFKFNCCHH_JPKLGGEKLJJ_OFFSET UNITYSDK_OFFSET(0x15BB78F0)
#define APMFKFNCCHH_KCFFBEAIFEG_OFFSET UNITYSDK_OFFSET(0x15BBA740)
#define APMFKFNCCHH_KCGFKIBJKNJ_OFFSET UNITYSDK_OFFSET(0x15BBA0F0)
#define APMFKFNCCHH_KLEJMFCPEPB_OFFSET UNITYSDK_OFFSET(0x15BB8DB0)
#define APMFKFNCCHH_KNIBMDAAEKE_OFFSET UNITYSDK_OFFSET(0x15BBAEE0)
#define APMFKFNCCHH_LFBKNKJIOIA_OFFSET UNITYSDK_OFFSET(0x15BB4B80)
#define APMFKFNCCHH_LNHCLLFAILN_OFFSET UNITYSDK_OFFSET(0x15BB9210)
#define APMFKFNCCHH_LOBINCLNKDC_OFFSET UNITYSDK_OFFSET(0x15BBD030)
#define APMFKFNCCHH_MCIJELPHKFK_OFFSET UNITYSDK_OFFSET(0x15BB71D0)
#define APMFKFNCCHH_MMEDFDJIGIM_OFFSET UNITYSDK_OFFSET(0x15BB7C00)
#define APMFKFNCCHH_MNFKCINBNFJ_OFFSET UNITYSDK_OFFSET(0x15BB8EA0)
#define APMFKFNCCHH_NANIAEPEGHB_OFFSET UNITYSDK_OFFSET(0x15BBAE40)
#define APMFKFNCCHH_NCFAINDCHOB_OFFSET UNITYSDK_OFFSET(0x15BBD360)
#define APMFKFNCCHH_NECEPECJKJA_OFFSET UNITYSDK_OFFSET(0x15BBE910)
#define APMFKFNCCHH_NHIANJEHEEK_OFFSET UNITYSDK_OFFSET(0x15BB7270)
#define APMFKFNCCHH_NKMCDHLFAOI_OFFSET UNITYSDK_OFFSET(0x15BB8480)
#define APMFKFNCCHH_NPPKAHKODCC_OFFSET UNITYSDK_OFFSET(0x15BB8890)
#define APMFKFNCCHH_OGMODJFMPBI_OFFSET UNITYSDK_OFFSET(0x15BB9600)
#define APMFKFNCCHH_OJNGKKJLDNB_OFFSET UNITYSDK_OFFSET(0x15BBE2B0)
#define APMFKFNCCHH_OMJPFIHCGHA_OFFSET UNITYSDK_OFFSET(0x15BB7290)
#define APMFKFNCCHH_ONFEIIIFCOK_OFFSET UNITYSDK_OFFSET(0x15BB9B10)
#define APMFKFNCCHH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BBB0B0)
#define APMFKFNCCHH_PAIGPOKOCJL_OFFSET UNITYSDK_OFFSET(0x15BB84D0)
#define APMFKFNCCHH_PCONDAPOAFH_OFFSET UNITYSDK_OFFSET(0x15BBE8F0)
#define APMFKFNCCHH_PKPEINFBLBO_OFFSET UNITYSDK_OFFSET(0x15BBA4C0)
#define APMFKFNCCHH_SET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x15BBE930)
#define APMFKFNCCHH_SET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x15BB4B70)

inline static constexpr unsigned int APMFKFNCCHH_TypeDefinitionIndex = 73776;

	class APMFKFNCCHH : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* PILDFLBIFJN; // 0x10
		::System::Collections::Generic::HashSet_1<::OLMJHHNPJJH*>* DHIBMDEMIBN; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* MGMEJJHGAOM; // 0x20
		::NCNPCENKKGN* PNIAJCNKHOP; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* EONODDHDKGG; // 0x30
		::System::Action_6<::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>* JJMFOBIIICA; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* PAKDMMJLJFI; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>*>* PMOBOBNKKAO; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* JBHOAMOBHCG; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ECKIMJFMONA; // 0x58
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* JPKACEHEFOH; // 0x60
		::RPG::GameCore::StagePVSData* CDHODPNNMGO; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* KDHCAJKADBL; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* AFGNJKMIELE; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* NIMEBGFNBGA; // 0x80
		::System::Collections::Generic::List_1<::System::ValueTuple_4<::RPG::GameCore::OfflineCullingIndex*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32>>* NMNLECOANLF; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>* NPBFOFEGKJG; // 0x90
		::RPG::Client::PVSDebugMono* EMDIEIENDCN; // 0x98
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* DLMAKOKDAPL; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* OOEGCINAFFI; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::OfflineCullingIndex*>*>* GLIHMBDEKFP; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* OALJEANHPAO; // 0xB8
		::RPG::GameCore::StageAutoGenConfig* CGPPFOLFAKI; // 0xC0
		::System::Action_2<::System::Int64, ::System::Boolean>* PDHMBMJIADP; // 0xC8
		::FCCJBBDBHCA* IDHKPDHIAKE; // 0xD0
		::RPG::GameCore::StageBaseConfig* KIKKCNDGFOL; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* PKOJHLMKMPD; // 0xE0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* JDHOBEHPEJF; // 0xE8
		::System::Collections::Generic::List_1<::System::ValueTuple_5<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32>>* OGHDCJLJECC; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonOfflineCullingCellData*>* BOBJONMPNFM; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* FJJNAJMOGHG; // 0x100
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* KJCFIDNOOPD; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GOLFLIHEPEL; // 0x110
		::LJFHKAJPFNE* BJPKBELGNCM; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::ValueTuple_4<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>>* DBKOBGPIHEE; // 0x120
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::OpenWorldCullingPauseReason> CKHLABOMJBM; // 0x128
		::System::Single JDHLINNDIJD; // 0x130
		::System::Int32 KPCDAMGMMJB; // 0x134
		::System::Boolean _UseBinaryData_k__BackingField; // 0x138
		::System::Boolean LJJPFLOEHGA; // 0x139
		::System::Byte _padding0[0x6];
		::System::Int64 EJLJJDFHDGK; // 0x140
		::System::Int32 PKDPHHHLAMA; // 0x148
		::UnityEngine::Vector3 BCEBNLHANAO; // 0x14C
		::System::Boolean CKCFINEHCBL; // 0x158
		::System::Boolean _DataDirty_k__BackingField; // 0x159
		::System::Boolean DLBAMHMDMDP; // 0x15A
		::System::Boolean CLAFGFLPIPA; // 0x15B
		::System::Int32 EJIMIIGJFHH; // 0x15C
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIBEDCLKBNE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x658E0);
		}

		static ::System::Object** StaticGet_GONDGPELLDG()
		{
			return (::System::Object**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x658E8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JPGBNDEGOMD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x658F0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NDJICBEOKAI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x658F8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_MLGAHMJHMLP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65900);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NDDGLIBPIEM()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65908);
		}

		static ::FCOEMCEDLNL** StaticGet_DHAELINDBHK()
		{
			return (::FCOEMCEDLNL**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65910);
		}

		static ::System::Collections::Generic::List_1<::System::Int64>** StaticGet_NMIKNGNEMHF()
		{
			return (::System::Collections::Generic::List_1<::System::Int64>**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65918);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_PKAJOPBCPIK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65920);
		}

		static ::System::Collections::Generic::Stack_1<::KGPLCHGEGMD*>** StaticGet_MPDMJDFHLPN()
		{
			return (::System::Collections::Generic::Stack_1<::KGPLCHGEGMD*>**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65928);
		}

		static ::System::Object** StaticGet_FMPJFBMGADP()
		{
			return (::System::Object**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65930);
		}

		static ::System::Collections::Generic::Stack_1<::PLEDOEKMLCN*>** StaticGet_MMPMFOFFJHB()
		{
			return (::System::Collections::Generic::Stack_1<::PLEDOEKMLCN*>**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65938);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_KJPLMHJINGE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x65940);
		}

		static ::System::Single* StaticGet_IGKDOGBBDGH()
		{
			return (::System::Single*)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x14D70);
		}

		// static const ::System::Object KONDIJAGDAC; // 0x0
		// static const ::System::Object CGJMEJFFHMJ; // 0x0
		::System::Void _ctor(::LJFHKAJPFNE* a1, ::RPG::GameCore::StageBaseConfig* a2, ::RPG::GameCore::StageAutoGenConfig* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::Client::OpenWorld::StreamingLayerSetting* a5)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::RPG::GameCore::StageBaseConfig*, ::RPG::GameCore::StageAutoGenConfig*, ::RPG::GameCore::LodConfig*, ::RPG::Client::OpenWorld::StreamingLayerSetting*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APMFKFNCCHH_CCTOR_OFFSET))();
		}

		::System::Boolean get_UseBinaryData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_GET_USEBINARYDATA_OFFSET))(this);
		}

		::System::Void set_UseBinaryData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_SET_USEBINARYDATA_OFFSET))(this, a1);
		}

		::System::Boolean LFBKNKJIOIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_LFBKNKJIOIA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void ICABECIMMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_ICABECIMMGC_OFFSET))(this);
		}

		::System::Int64 JPKLGGEKLJJ()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_JPKLGGEKLJJ_OFFSET))(this);
		}

		::System::Void BIBIIMAHAKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_BIBIIMAHAKB_OFFSET))(this);
		}

		::System::Void FDCEFLFOGIO(::System::Action_2<::System::Int64, ::System::Boolean>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int64, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_FDCEFLFOGIO_OFFSET))(this, a1, a2);
		}

		::System::Void JMOHCMJEOMC(::System::Action_2<::System::Int64, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int64, ::System::Boolean>*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_JMOHCMJEOMC_OFFSET))(this, a1);
		}

		::System::Int32 ABKKJIBEBHA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_ABKKJIBEBHA_OFFSET))(this);
		}

		::System::Void ADOJEIDGKOL(::System::Collections::Generic::List_1<::System::Int64>* a1, ::System::Collections::Generic::List_1<::System::Int64>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int64>*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_ADOJEIDGKOL_OFFSET))(this, a1, a2);
		}

		::System::Boolean MMEDFDJIGIM(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + APMFKFNCCHH_MMEDFDJIGIM_OFFSET))(this, a1);
		}

		::System::Void JLOLGLLIBKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_JLOLGLLIBKE_OFFSET))(this);
		}

		::System::Void NKMCDHLFAOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_NKMCDHLFAOI_OFFSET))(this);
		}

		::System::Void PAIGPOKOCJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_PAIGPOKOCJL_OFFSET))(this, a1);
		}

		::System::Void MCIJELPHKFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_MCIJELPHKFK_OFFSET))(this, a1);
		}

		::System::Void EDIHHHMNMMK(::System::Boolean a1, ::RPG::Client::OpenWorld::OpenWorldCullingPauseReason a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::OpenWorldCullingPauseReason, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_EDIHHHMNMMK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DNPBNFFBCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_DNPBNFFBCID_OFFSET))(this);
		}

		::System::Void FPFIKNEGHCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_FPFIKNEGHCA_OFFSET))(this);
		}

		::System::Void NPPKAHKODCC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APMFKFNCCHH_NPPKAHKODCC_OFFSET))(this, a1);
		}

		::System::Void JLBNKAMAOHJ(::OLMJHHNPJJH* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OLMJHHNPJJH*, ::System::Int32))((::PBYTE)hIl2Cpp + APMFKFNCCHH_JLBNKAMAOHJ_OFFSET))(this, a1, a2);
		}

		::System::Void KLEJMFCPEPB(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_KLEJMFCPEPB_OFFSET))(this, a1);
		}

		::System::Int32 MNFKCINBNFJ(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_MNFKCINBNFJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 LNHCLLFAILN(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_LNHCLLFAILN_OFFSET))(this, a1, a2);
		}

		::System::Void EOKFAMBHPHG(::OLMJHHNPJJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLMJHHNPJJH*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_EOKFAMBHPHG_OFFSET))(this, a1);
		}

		::System::Void OGMODJFMPBI(::OLMJHHNPJJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLMJHHNPJJH*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_OGMODJFMPBI_OFFSET))(this, a1);
		}

		::System::Void FIOGPHDEDLK(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_FIOGPHDEDLK_OFFSET))(this, a1);
		}

		::System::Void EEEAMAPMDDF(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_EEEAMAPMDDF_OFFSET))(this, a1);
		}

		::System::Void FDMNDEDEDOD(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_FDMNDEDEDOD_OFFSET))(this, a1);
		}

		::System::Void ONFEIIIFCOK(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_ONFEIIIFCOK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* FOEJHGAKBBI(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + APMFKFNCCHH_FOEJHGAKBBI_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::OfflineCullingIndex* KCGFKIBJKNJ(::System::Int32 a1, ::System::Int64 a2, ::System::Single a3)
		{
			return ((::RPG::GameCore::OfflineCullingIndex*(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Single))((::PBYTE)hIl2Cpp + APMFKFNCCHH_KCGFKIBJKNJ_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::JsonOfflineCullingCellData* PKPEINFBLBO(::UnityEngine::TextAsset* a1)
		{
			return ((::RPG::GameCore::JsonOfflineCullingCellData*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_PKPEINFBLBO_OFFSET))(this, a1);
		}

		::System::Void KCFFBEAIFEG(::BGNDPIPJFCI* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + APMFKFNCCHH_KCFFBEAIFEG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KNIBMDAAEKE(::UnityEngine::TextAsset* a1, ::RPG::IReference* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RPG::GameCore::OfflineCullingIndex* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + APMFKFNCCHH_KNIBMDAAEKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* NANIAEPEGHB(::RPG::GameCore::OfflineCullingIndex* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_NANIAEPEGHB_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::APLEMBNFLAA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void NCFAINDCHOB(::APLEMBNFLAA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_NCFAINDCHOB_OFFSET))(this, a1, a2);
		}

		::System::Void JPHPAKAGJHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_JPHPAKAGJHA_OFFSET))(this);
		}

		::System::Void FOBNNIEINCK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_FOBNNIEINCK_OFFSET))(this, a1, a2);
		}

		::System::Void OJNGKKJLDNB(::OLMJHHNPJJH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OLMJHHNPJJH*, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_OJNGKKJLDNB_OFFSET))(this, a1, a2);
		}

		::System::Void FJHGMBFNFJH(::RPG::GameCore::OfflineCullingIndex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_FJHGMBFNFJH_OFFSET))(this, a1);
		}

		::System::Void EDHHHIKCHPH(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_EDHHHIKCHPH_OFFSET))(this, a1);
		}

		::System::Void LOBINCLNKDC(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_LOBINCLNKDC_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageBaseConfig* DHHPINDLPJH()
		{
			return ((::RPG::GameCore::StageBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_DHHPINDLPJH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>* NHIANJEHEEK()
		{
			return ((::Il2CppArray<::RPG::GameCore::OfflineCullingIndex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_NHIANJEHEEK_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>* OMJPFIHCGHA()
		{
			return ((::Il2CppArray<::RPG::GameCore::OfflineCullingLod*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_OMJPFIHCGHA_OFFSET))(this);
		}

		::System::Single PCONDAPOAFH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_PCONDAPOAFH_OFFSET))(this);
		}

		::FCCJBBDBHCA* IFHDKHHMBFJ()
		{
			return ((::FCCJBBDBHCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_IFHDKHHMBFJ_OFFSET))(this);
		}

		::NCNPCENKKGN* NECEPECJKJA()
		{
			return ((::NCNPCENKKGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_NECEPECJKJA_OFFSET))(this);
		}

		::System::Boolean get_DataDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH_GET_DATADIRTY_OFFSET))(this);
		}

		::System::Void set_DataDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APMFKFNCCHH_SET_DATADIRTY_OFFSET))(this, a1);
		}

		static ::KGPLCHGEGMD* HHFONBFOGCA()
		{
			return ((::KGPLCHGEGMD*(*)())((::PBYTE)hIl2Cpp + APMFKFNCCHH_HHFONBFOGCA_OFFSET))();
		}

		static ::System::Void GFJFCAMHCOK(::KGPLCHGEGMD* a1)
		{
			return ((::System::Void(*)(::KGPLCHGEGMD*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_GFJFCAMHCOK_OFFSET))(a1);
		}

		static ::PLEDOEKMLCN* ABNALGJICPC()
		{
			return ((::PLEDOEKMLCN*(*)())((::PBYTE)hIl2Cpp + APMFKFNCCHH_ABNALGJICPC_OFFSET))();
		}

		static ::System::Void HMPFPFNHOLK(::PLEDOEKMLCN* a1)
		{
			return ((::System::Void(*)(::PLEDOEKMLCN*))((::PBYTE)hIl2Cpp + APMFKFNCCHH_HMPFPFNHOLK_OFFSET))(a1);
		}

	};
