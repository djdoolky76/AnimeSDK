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

#define APMFKFNCCHH_ABKKJIBEBHA_OFFSET UNITYSDK_OFFSET(0x18511DF0)
#define APMFKFNCCHH_ABNALGJICPC_OFFSET UNITYSDK_OFFSET(0x185188C0)
#define APMFKFNCCHH_ADOJEIDGKOL_OFFSET UNITYSDK_OFFSET(0x18511E50)
#define APMFKFNCCHH_BIBIIMAHAKB_OFFSET UNITYSDK_OFFSET(0x185115E0)
#define APMFKFNCCHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x18518BC0)
#define APMFKFNCCHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1850E910)
#define APMFKFNCCHH_DHHPINDLPJH_OFFSET UNITYSDK_OFFSET(0x18518540)
#define APMFKFNCCHH_DNPBNFFBCID_OFFSET UNITYSDK_OFFSET(0x18512250)
#define APMFKFNCCHH_EDHHHIKCHPH_OFFSET UNITYSDK_OFFSET(0x185168A0)
#define APMFKFNCCHH_EDIHHHMNMMK_OFFSET UNITYSDK_OFFSET(0x18512160)
#define APMFKFNCCHH_EEEAMAPMDDF_OFFSET UNITYSDK_OFFSET(0x18513490)
#define APMFKFNCCHH_EOKFAMBHPHG_OFFSET UNITYSDK_OFFSET(0x18513160)
#define APMFKFNCCHH_FDCEFLFOGIO_OFFSET UNITYSDK_OFFSET(0x185119D0)
#define APMFKFNCCHH_FDMNDEDEDOD_OFFSET UNITYSDK_OFFSET(0x18513500)
#define APMFKFNCCHH_FIOGPHDEDLK_OFFSET UNITYSDK_OFFSET(0x185132B0)
#define APMFKFNCCHH_FJHGMBFNFJH_OFFSET UNITYSDK_OFFSET(0x18518450)
#define APMFKFNCCHH_FOBNNIEINCK_OFFSET UNITYSDK_OFFSET(0x18517920)
#define APMFKFNCCHH_FOEJHGAKBBI_OFFSET UNITYSDK_OFFSET(0x18513800)
#define APMFKFNCCHH_FPFIKNEGHCA_OFFSET UNITYSDK_OFFSET(0x18512340)
#define APMFKFNCCHH_GET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x18518580)
#define APMFKFNCCHH_GET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x1850E8A0)
#define APMFKFNCCHH_GFJFCAMHCOK_OFFSET UNITYSDK_OFFSET(0x18518770)
#define APMFKFNCCHH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x18510F50)
#define APMFKFNCCHH_HHFONBFOGCA_OFFSET UNITYSDK_OFFSET(0x185185A0)
#define APMFKFNCCHH_HMPFPFNHOLK_OFFSET UNITYSDK_OFFSET(0x18518A70)
#define APMFKFNCCHH_ICABECIMMGC_OFFSET UNITYSDK_OFFSET(0x185113E0)
#define APMFKFNCCHH_IFHDKHHMBFJ_OFFSET UNITYSDK_OFFSET(0x18518560)
#define APMFKFNCCHH_JLBNKAMAOHJ_OFFSET UNITYSDK_OFFSET(0x18512790)
#define APMFKFNCCHH_JLOLGLLIBKE_OFFSET UNITYSDK_OFFSET(0x18512050)
#define APMFKFNCCHH_JMOHCMJEOMC_OFFSET UNITYSDK_OFFSET(0x18511D70)
#define APMFKFNCCHH_JPHPAKAGJHA_OFFSET UNITYSDK_OFFSET(0x18517E60)
#define APMFKFNCCHH_JPKLGGEKLJJ_OFFSET UNITYSDK_OFFSET(0x18511590)
#define APMFKFNCCHH_KCFFBEAIFEG_OFFSET UNITYSDK_OFFSET(0x18514390)
#define APMFKFNCCHH_KCGFKIBJKNJ_OFFSET UNITYSDK_OFFSET(0x18513D40)
#define APMFKFNCCHH_KLEJMFCPEPB_OFFSET UNITYSDK_OFFSET(0x185129E0)
#define APMFKFNCCHH_KNIBMDAAEKE_OFFSET UNITYSDK_OFFSET(0x18514B30)
#define APMFKFNCCHH_LFBKNKJIOIA_OFFSET UNITYSDK_OFFSET(0x1850E8C0)
#define APMFKFNCCHH_LNHCLLFAILN_OFFSET UNITYSDK_OFFSET(0x18512E50)
#define APMFKFNCCHH_LOBINCLNKDC_OFFSET UNITYSDK_OFFSET(0x18516C90)
#define APMFKFNCCHH_MCIJELPHKFK_OFFSET UNITYSDK_OFFSET(0x18510E70)
#define APMFKFNCCHH_MMEDFDJIGIM_OFFSET UNITYSDK_OFFSET(0x18511860)
#define APMFKFNCCHH_MNFKCINBNFJ_OFFSET UNITYSDK_OFFSET(0x18512AE0)
#define APMFKFNCCHH_NANIAEPEGHB_OFFSET UNITYSDK_OFFSET(0x18514A90)
#define APMFKFNCCHH_NCFAINDCHOB_OFFSET UNITYSDK_OFFSET(0x18516FB0)
#define APMFKFNCCHH_NECEPECJKJA_OFFSET UNITYSDK_OFFSET(0x18518570)
#define APMFKFNCCHH_NHIANJEHEEK_OFFSET UNITYSDK_OFFSET(0x18510F10)
#define APMFKFNCCHH_NKMCDHLFAOI_OFFSET UNITYSDK_OFFSET(0x185120B0)
#define APMFKFNCCHH_NPPKAHKODCC_OFFSET UNITYSDK_OFFSET(0x185124C0)
#define APMFKFNCCHH_OGMODJFMPBI_OFFSET UNITYSDK_OFFSET(0x18513240)
#define APMFKFNCCHH_OJNGKKJLDNB_OFFSET UNITYSDK_OFFSET(0x18517F00)
#define APMFKFNCCHH_OMJPFIHCGHA_OFFSET UNITYSDK_OFFSET(0x18510F30)
#define APMFKFNCCHH_ONFEIIIFCOK_OFFSET UNITYSDK_OFFSET(0x18513760)
#define APMFKFNCCHH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x18514D00)
#define APMFKFNCCHH_PAIGPOKOCJL_OFFSET UNITYSDK_OFFSET(0x18512110)
#define APMFKFNCCHH_PCONDAPOAFH_OFFSET UNITYSDK_OFFSET(0x18518550)
#define APMFKFNCCHH_PKPEINFBLBO_OFFSET UNITYSDK_OFFSET(0x18514110)
#define APMFKFNCCHH_SET_DATADIRTY_OFFSET UNITYSDK_OFFSET(0x18518590)
#define APMFKFNCCHH_SET_USEBINARYDATA_OFFSET UNITYSDK_OFFSET(0x1850E8B0)

inline static constexpr unsigned int APMFKFNCCHH_TypeDefinitionIndex = 75899;

	class APMFKFNCCHH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* JBHOAMOBHCG; // 0x10
		::System::Action_6<::UnityEngine::TextAsset*, ::RPG::IReference*, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>* JJMFOBIIICA; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>* NPBFOFEGKJG; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ECKIMJFMONA; // 0x28
		::FCCJBBDBHCA* IDHKPDHIAKE; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* PKOJHLMKMPD; // 0x38
		::RPG::GameCore::StageBaseConfig* KIKKCNDGFOL; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* OALJEANHPAO; // 0x48
		::RPG::GameCore::StageAutoGenConfig* CGPPFOLFAKI; // 0x50
		::System::Collections::Generic::HashSet_1<::OLMJHHNPJJH*>* DHIBMDEMIBN; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* EONODDHDKGG; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonOfflineCullingCellData*>* BOBJONMPNFM; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* FJJNAJMOGHG; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* DLMAKOKDAPL; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* OOEGCINAFFI; // 0x80
		::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* PILDFLBIFJN; // 0x88
		::System::Collections::Generic::List_1<::System::ValueTuple_4<::RPG::GameCore::OfflineCullingIndex*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32>>* NMNLECOANLF; // 0x90
		::RPG::Client::PVSDebugMono* EMDIEIENDCN; // 0x98
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* KJCFIDNOOPD; // 0xA0
		::RPG::GameCore::StagePVSData* CDHODPNNMGO; // 0xA8
		::System::Collections::Generic::List_1<::System::Single>* PAKDMMJLJFI; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* AFGNJKMIELE; // 0xB8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* JDHOBEHPEJF; // 0xC0
		::LJFHKAJPFNE* BJPKBELGNCM; // 0xC8
		::System::Collections::Generic::List_1<::System::ValueTuple_5<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32>>* OGHDCJLJECC; // 0xD0
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* MGMEJJHGAOM; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::OfflineCullingIndex*>*>* GLIHMBDEKFP; // 0xE0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* KDHCAJKADBL; // 0xE8
		::System::Action_2<::System::Int64, ::System::Boolean>* PDHMBMJIADP; // 0xF0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*>* NIMEBGFNBGA; // 0xF8
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* JPKACEHEFOH; // 0x100
		::NCNPCENKKGN* PNIAJCNKHOP; // 0x108
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>*>* PMOBOBNKKAO; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::ValueTuple_4<::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32>>* DBKOBGPIHEE; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GOLFLIHEPEL; // 0x120
		::System::Int32 EJIMIIGJFHH; // 0x128
		::System::Single JDHLINNDIJD; // 0x12C
		::UnityEngine::Vector3 BCEBNLHANAO; // 0x130
		::System::Int32 KPCDAMGMMJB; // 0x13C
		::System::Int32 PKDPHHHLAMA; // 0x140
		::System::Byte _padding0[0x4];
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::OpenWorldCullingPauseReason> CKHLABOMJBM; // 0x148
		::System::Boolean CKCFINEHCBL; // 0x150
		::System::Boolean _DataDirty_k__BackingField; // 0x151
		::System::Boolean DLBAMHMDMDP; // 0x152
		::System::Boolean CLAFGFLPIPA; // 0x153
		::System::Boolean _UseBinaryData_k__BackingField; // 0x154
		::System::Boolean LJJPFLOEHGA; // 0x155
		::System::Byte _padding1[0x2];
		::System::Int64 EJLJJDFHDGK; // 0x158
		static ::FCOEMCEDLNL** StaticGet_DHAELINDBHK()
		{
			return (::FCOEMCEDLNL**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE30);
		}

		static ::System::Collections::Generic::List_1<::System::Int64>** StaticGet_NMIKNGNEMHF()
		{
			return (::System::Collections::Generic::List_1<::System::Int64>**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE38);
		}

		static ::System::Object** StaticGet_FMPJFBMGADP()
		{
			return (::System::Object**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE40);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NDDGLIBPIEM()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE48);
		}

		static ::System::Object** StaticGet_GONDGPELLDG()
		{
			return (::System::Object**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE50);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JPGBNDEGOMD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE58);
		}

		static ::System::Collections::Generic::Stack_1<::KGPLCHGEGMD*>** StaticGet_MPDMJDFHLPN()
		{
			return (::System::Collections::Generic::Stack_1<::KGPLCHGEGMD*>**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE60);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_MLGAHMJHMLP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE68);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_PKAJOPBCPIK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE70);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NDJICBEOKAI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE78);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIBEDCLKBNE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE80);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_KJPLMHJINGE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE88);
		}

		static ::System::Collections::Generic::Stack_1<::PLEDOEKMLCN*>** StaticGet_MMPMFOFFJHB()
		{
			return (::System::Collections::Generic::Stack_1<::PLEDOEKMLCN*>**)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x5EE90);
		}

		static ::System::Single* StaticGet_IGKDOGBBDGH()
		{
			return (::System::Single*)UnitySDK::FromName("", "APMFKFNCCHH")->GetStaticField(0x13D40);
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
