#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIJLFGJIJGG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HFPLNFLBBKI.h"
#include "unitysdk/MBDDPHPODAN.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NFNCKCMAPAJ.h"
#include "unitysdk/OEDGDCLJLGF.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AKLPCMMHKEO;
class DFEIIJKCIBN;
class GAMICCELBAG;
class LCFAKNCOMEF;
class OPCAMPLOOAO;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace MoleMole::Config { class InputEnableInfo; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroup_StateGroupKeyValue; }
namespace SimpleJSON { class JSONData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEIIGPJKDGM_AFOECANGFCL_OFFSET UNITYSDK_OFFSET(0x1AE05A30)
#define NEIIGPJKDGM_BNGDAHKGIPB_OFFSET UNITYSDK_OFFSET(0x1AE0E6C0)
#define NEIIGPJKDGM_CEJGBDIHGKE_OFFSET UNITYSDK_OFFSET(0x1AE07590)
#define NEIIGPJKDGM_CEMBDNCHNHK_OFFSET UNITYSDK_OFFSET(0x1AE05380)
#define NEIIGPJKDGM_DFKHPDALDEO_OFFSET UNITYSDK_OFFSET(0x1AE09DE0)
#define NEIIGPJKDGM_DFMMPAHKNCG_OFFSET UNITYSDK_OFFSET(0x1AE102C0)
#define NEIIGPJKDGM_ECAEFMPEMIB_OFFSET UNITYSDK_OFFSET(0x1AE06830)
#define NEIIGPJKDGM_EEFHHMKBJDD_OFFSET UNITYSDK_OFFSET(0x1AE14B70)
#define NEIIGPJKDGM_EHIKBPHDBHJ_OFFSET UNITYSDK_OFFSET(0x1AE07F00)
#define NEIIGPJKDGM_ENIHKPHPNBP_OFFSET UNITYSDK_OFFSET(0x1AE06770)
#define NEIIGPJKDGM_EPIOMJKGDNG_OFFSET UNITYSDK_OFFSET(0x1AE10B00)
#define NEIIGPJKDGM_GCLENLLOMII_OFFSET UNITYSDK_OFFSET(0x1AE039E0)
#define NEIIGPJKDGM_HNGDOACOOOM_OFFSET UNITYSDK_OFFSET(0x1AE05270)
#define NEIIGPJKDGM_JOCELLBFFOK_OFFSET UNITYSDK_OFFSET(0x1AE15B50)
#define NEIIGPJKDGM_KCBCHPBONFH_1_OFFSET UNITYSDK_OFFSET(0x1AE17330)
#define NEIIGPJKDGM_KCBCHPBONFH_OFFSET UNITYSDK_OFFSET(0x1AE13E00)
#define NEIIGPJKDGM_KGMKCLCKHKM_OFFSET UNITYSDK_OFFSET(0x1AE0A4F0)
#define NEIIGPJKDGM_MKEFBLKCNKE_10_OFFSET UNITYSDK_OFFSET(0x1AE0E050)
#define NEIIGPJKDGM_MKEFBLKCNKE_11_OFFSET UNITYSDK_OFFSET(0x1AE0ECA0)
#define NEIIGPJKDGM_MKEFBLKCNKE_12_OFFSET UNITYSDK_OFFSET(0x1AE0EEC0)
#define NEIIGPJKDGM_MKEFBLKCNKE_13_OFFSET UNITYSDK_OFFSET(0x1AE06DB0)
#define NEIIGPJKDGM_MKEFBLKCNKE_14_OFFSET UNITYSDK_OFFSET(0x1AE0F0E0)
#define NEIIGPJKDGM_MKEFBLKCNKE_15_OFFSET UNITYSDK_OFFSET(0x1AE0F320)
#define NEIIGPJKDGM_MKEFBLKCNKE_16_OFFSET UNITYSDK_OFFSET(0x1AE108D0)
#define NEIIGPJKDGM_MKEFBLKCNKE_17_OFFSET UNITYSDK_OFFSET(0x1AE10AA0)
#define NEIIGPJKDGM_MKEFBLKCNKE_18_OFFSET UNITYSDK_OFFSET(0x1AE0DFF0)
#define NEIIGPJKDGM_MKEFBLKCNKE_19_OFFSET UNITYSDK_OFFSET(0x1AE10EC0)
#define NEIIGPJKDGM_MKEFBLKCNKE_1_OFFSET UNITYSDK_OFFSET(0x1AE05E40)
#define NEIIGPJKDGM_MKEFBLKCNKE_20_OFFSET UNITYSDK_OFFSET(0x1AE101B0)
#define NEIIGPJKDGM_MKEFBLKCNKE_21_OFFSET UNITYSDK_OFFSET(0x1AE13350)
#define NEIIGPJKDGM_MKEFBLKCNKE_22_OFFSET UNITYSDK_OFFSET(0x1AE13D90)
#define NEIIGPJKDGM_MKEFBLKCNKE_23_OFFSET UNITYSDK_OFFSET(0x1AE14150)
#define NEIIGPJKDGM_MKEFBLKCNKE_24_OFFSET UNITYSDK_OFFSET(0x1AE15390)
#define NEIIGPJKDGM_MKEFBLKCNKE_25_OFFSET UNITYSDK_OFFSET(0x1AE15400)
#define NEIIGPJKDGM_MKEFBLKCNKE_26_OFFSET UNITYSDK_OFFSET(0x1AE0FA30)
#define NEIIGPJKDGM_MKEFBLKCNKE_27_OFFSET UNITYSDK_OFFSET(0x1AE06CC0)
#define NEIIGPJKDGM_MKEFBLKCNKE_28_OFFSET UNITYSDK_OFFSET(0x1AE125E0)
#define NEIIGPJKDGM_MKEFBLKCNKE_29_OFFSET UNITYSDK_OFFSET(0x1AE154E0)
#define NEIIGPJKDGM_MKEFBLKCNKE_2_OFFSET UNITYSDK_OFFSET(0x1AE06E10)
#define NEIIGPJKDGM_MKEFBLKCNKE_30_OFFSET UNITYSDK_OFFSET(0x1AE12BE0)
#define NEIIGPJKDGM_MKEFBLKCNKE_31_OFFSET UNITYSDK_OFFSET(0x1AE16B10)
#define NEIIGPJKDGM_MKEFBLKCNKE_32_OFFSET UNITYSDK_OFFSET(0x1AE0F9D0)
#define NEIIGPJKDGM_MKEFBLKCNKE_33_OFFSET UNITYSDK_OFFSET(0x1AE0DAD0)
#define NEIIGPJKDGM_MKEFBLKCNKE_34_OFFSET UNITYSDK_OFFSET(0x1AE15470)
#define NEIIGPJKDGM_MKEFBLKCNKE_35_OFFSET UNITYSDK_OFFSET(0x1AE0F970)
#define NEIIGPJKDGM_MKEFBLKCNKE_36_OFFSET UNITYSDK_OFFSET(0x1AE17580)
#define NEIIGPJKDGM_MKEFBLKCNKE_3_OFFSET UNITYSDK_OFFSET(0x1AE06E80)
#define NEIIGPJKDGM_MKEFBLKCNKE_4_OFFSET UNITYSDK_OFFSET(0x1AE089C0)
#define NEIIGPJKDGM_MKEFBLKCNKE_5_OFFSET UNITYSDK_OFFSET(0x1AE0A2F0)
#define NEIIGPJKDGM_MKEFBLKCNKE_6_OFFSET UNITYSDK_OFFSET(0x1AE0D080)
#define NEIIGPJKDGM_MKEFBLKCNKE_7_OFFSET UNITYSDK_OFFSET(0x1AE0D7C0)
#define NEIIGPJKDGM_MKEFBLKCNKE_8_OFFSET UNITYSDK_OFFSET(0x1AE0DCD0)
#define NEIIGPJKDGM_MKEFBLKCNKE_9_OFFSET UNITYSDK_OFFSET(0x1AE0DE90)
#define NEIIGPJKDGM_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x1AE05C40)
#define NEIIGPJKDGM_MMPDGCKHPAN_OFFSET UNITYSDK_OFFSET(0x1AE082B0)
#define NEIIGPJKDGM_MPJJLANCANL_OFFSET UNITYSDK_OFFSET(0x1AE098B0)
#define NEIIGPJKDGM_OCNJGOBCFNJ_OFFSET UNITYSDK_OFFSET(0x1AE05EB0)
#define NEIIGPJKDGM_PKLFFIJCMHO_10_OFFSET UNITYSDK_OFFSET(0x1AE0CEE0)
#define NEIIGPJKDGM_PKLFFIJCMHO_11_OFFSET UNITYSDK_OFFSET(0x1AE0D1C0)
#define NEIIGPJKDGM_PKLFFIJCMHO_12_OFFSET UNITYSDK_OFFSET(0x1AE073F0)
#define NEIIGPJKDGM_PKLFFIJCMHO_13_OFFSET UNITYSDK_OFFSET(0x1AE0BA50)
#define NEIIGPJKDGM_PKLFFIJCMHO_14_OFFSET UNITYSDK_OFFSET(0x1AE0C800)
#define NEIIGPJKDGM_PKLFFIJCMHO_15_OFFSET UNITYSDK_OFFSET(0x1AE0CB50)
#define NEIIGPJKDGM_PKLFFIJCMHO_16_OFFSET UNITYSDK_OFFSET(0x1AE0E0C0)
#define NEIIGPJKDGM_PKLFFIJCMHO_17_OFFSET UNITYSDK_OFFSET(0x1AE07250)
#define NEIIGPJKDGM_PKLFFIJCMHO_18_OFFSET UNITYSDK_OFFSET(0x1AE10600)
#define NEIIGPJKDGM_PKLFFIJCMHO_19_OFFSET UNITYSDK_OFFSET(0x1AE10FF0)
#define NEIIGPJKDGM_PKLFFIJCMHO_1_OFFSET UNITYSDK_OFFSET(0x1AE06E70)
#define NEIIGPJKDGM_PKLFFIJCMHO_20_OFFSET UNITYSDK_OFFSET(0x1AE119E0)
#define NEIIGPJKDGM_PKLFFIJCMHO_21_OFFSET UNITYSDK_OFFSET(0x1AE131C0)
#define NEIIGPJKDGM_PKLFFIJCMHO_22_OFFSET UNITYSDK_OFFSET(0x1AE0C280)
#define NEIIGPJKDGM_PKLFFIJCMHO_23_OFFSET UNITYSDK_OFFSET(0x1AE11150)
#define NEIIGPJKDGM_PKLFFIJCMHO_24_OFFSET UNITYSDK_OFFSET(0x1AE0B700)
#define NEIIGPJKDGM_PKLFFIJCMHO_25_OFFSET UNITYSDK_OFFSET(0x1AE13550)
#define NEIIGPJKDGM_PKLFFIJCMHO_26_OFFSET UNITYSDK_OFFSET(0x1AE14B00)
#define NEIIGPJKDGM_PKLFFIJCMHO_27_OFFSET UNITYSDK_OFFSET(0x1AE0B4B0)
#define NEIIGPJKDGM_PKLFFIJCMHO_28_OFFSET UNITYSDK_OFFSET(0x1AE136E0)
#define NEIIGPJKDGM_PKLFFIJCMHO_29_OFFSET UNITYSDK_OFFSET(0x1AE159B0)
#define NEIIGPJKDGM_PKLFFIJCMHO_2_OFFSET UNITYSDK_OFFSET(0x1AE06EF0)
#define NEIIGPJKDGM_PKLFFIJCMHO_30_OFFSET UNITYSDK_OFFSET(0x1AE16040)
#define NEIIGPJKDGM_PKLFFIJCMHO_31_OFFSET UNITYSDK_OFFSET(0x1AE15540)
#define NEIIGPJKDGM_PKLFFIJCMHO_32_OFFSET UNITYSDK_OFFSET(0x1AE161E0)
#define NEIIGPJKDGM_PKLFFIJCMHO_33_OFFSET UNITYSDK_OFFSET(0x1AE16380)
#define NEIIGPJKDGM_PKLFFIJCMHO_34_OFFSET UNITYSDK_OFFSET(0x1AE0DB30)
#define NEIIGPJKDGM_PKLFFIJCMHO_35_OFFSET UNITYSDK_OFFSET(0x1AE16520)
#define NEIIGPJKDGM_PKLFFIJCMHO_36_OFFSET UNITYSDK_OFFSET(0x1AE133C0)
#define NEIIGPJKDGM_PKLFFIJCMHO_37_OFFSET UNITYSDK_OFFSET(0x1AE13AD0)
#define NEIIGPJKDGM_PKLFFIJCMHO_38_OFFSET UNITYSDK_OFFSET(0x1AE0B040)
#define NEIIGPJKDGM_PKLFFIJCMHO_39_OFFSET UNITYSDK_OFFSET(0x1AE16850)
#define NEIIGPJKDGM_PKLFFIJCMHO_3_OFFSET UNITYSDK_OFFSET(0x1AE075F0)
#define NEIIGPJKDGM_PKLFFIJCMHO_40_OFFSET UNITYSDK_OFFSET(0x1AE173E0)
#define NEIIGPJKDGM_PKLFFIJCMHO_4_OFFSET UNITYSDK_OFFSET(0x1AE07A50)
#define NEIIGPJKDGM_PKLFFIJCMHO_5_OFFSET UNITYSDK_OFFSET(0x1AE08BB0)
#define NEIIGPJKDGM_PKLFFIJCMHO_6_OFFSET UNITYSDK_OFFSET(0x1AE0A160)
#define NEIIGPJKDGM_PKLFFIJCMHO_7_OFFSET UNITYSDK_OFFSET(0x1AE0A350)
#define NEIIGPJKDGM_PKLFFIJCMHO_8_OFFSET UNITYSDK_OFFSET(0x1AE0A780)
#define NEIIGPJKDGM_PKLFFIJCMHO_9_OFFSET UNITYSDK_OFFSET(0x1AE0A920)
#define NEIIGPJKDGM_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x1AE05CB0)
#define NEIIGPJKDGM_PLGJFPDLKHJ_OFFSET UNITYSDK_OFFSET(0x1AE14750)
#define NEIIGPJKDGM_POEDKBCCPFH_OFFSET UNITYSDK_OFFSET(0x1AE16BB0)
#define NEIIGPJKDGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE03740)
#define NEIIGPJKDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE05370)

inline static constexpr unsigned int NEIIGPJKDGM_TypeDefinitionIndex = 63888;

class NEIIGPJKDGM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::GAMICCELBAG*, ::SimpleJSON::JSONNode*>*>** StaticGet_BHIEMJJNLJG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::GAMICCELBAG*, ::SimpleJSON::JSONNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(NEIIGPJKDGM_TypeDefinitionIndex)->GetStaticField(0x39800);
	}
	static ::SimpleJSON::JSONData** StaticGet_DIAJMEEGJOA()
	{
		return (::SimpleJSON::JSONData**)Il2CppClass::FromTypeDefinitionIndex(NEIIGPJKDGM_TypeDefinitionIndex)->GetStaticField(0x39808);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_FKMBEEHCOCM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NEIIGPJKDGM_TypeDefinitionIndex)->GetStaticField(0x39810);
	}
	static ::System::Collections::Generic::Dictionary_2<::KIJLFGJIJGG, ::System::Func_2<::GAMICCELBAG*, ::SimpleJSON::JSONNode*>*>** StaticGet_KMKFHELAJPB()
	{
		return (::System::Collections::Generic::Dictionary_2<::KIJLFGJIJGG, ::System::Func_2<::GAMICCELBAG*, ::SimpleJSON::JSONNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(NEIIGPJKDGM_TypeDefinitionIndex)->GetStaticField(0x39818);
	}
	// static const ::System::String* AMPBFFIHJKH; // 0x0
	// static const ::System::String* GOILJCBDFPN; // 0x0
	// static const ::System::String* FLJCOKJOILI; // 0x0
	// static const ::System::String* INELPDKEMNG; // 0x0
	// static const ::System::String* LNGHALIPGKD; // 0x0
	// static const ::System::String* GGENEDCKBCO; // 0x0
	// static const ::System::String* JPDLIPCHCKI; // 0x0
	// static const ::System::String* KBJPCIJINML; // 0x0
	// static const ::System::String* AGHMBDBMJLI; // 0x0
	// static const ::System::String* CHJBMOAOIHL; // 0x0
	// static const ::System::String* FOOMHCLNDEL; // 0x0
	// static const ::System::String* INLJIFBCEPB; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEIIGPJKDGM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIIGPJKDGM__CTOR_OFFSET))(this);
	}

	static ::SimpleJSON::JSONNode* CEMBDNCHNHK(::System::Type* GLPLOOEONEA, ::System::Int32 AIOACIOMHKM)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_CEMBDNCHNHK_OFFSET))(GLPLOOEONEA, AIOACIOMHKM);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE(::System::Collections::Generic::List_1<::System::String*>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_1(::System::Collections::Generic::List_1<::System::Boolean>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_1_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::SimpleJSON::JSONNode* OCNJGOBCFNJ(::System::Collections::IList* DJLOKMMLFJC, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_OCNJGOBCFNJ_OFFSET))(DJLOKMMLFJC, MGEADLAIAPJ);
	}

	static ::SimpleJSON::JSONNode* AFOECANGFCL(::System::String* GKBFENNFCDH, ::System::Int32 AIOACIOMHKM)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_AFOECANGFCL_OFFSET))(GKBFENNFCDH, AIOACIOMHKM);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_2(::System::UInt64 GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_2_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_1(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::Foundation::ViewObject::ViewObjectHandle& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_1_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_3(::UnityEngine::Vector3 GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_3_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_2(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::NFNCKCMAPAJ& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::NFNCKCMAPAJ&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_2_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* CEJGBDIHGKE(::System::Collections::IList* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_CEJGBDIHGKE_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::System::Boolean PKLFFIJCMHO_3(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_3_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::System::Boolean PKLFFIJCMHO_4(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::MoleMole::Config::InputEnableInfo*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::Config::InputEnableInfo*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_4_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::DFEIIJKCIBN* EHIKBPHDBHJ(::System::String* FDOKFPDLNNA)
	{
		return ((::DFEIIJKCIBN*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_EHIKBPHDBHJ_OFFSET))(FDOKFPDLNNA);
	}

	static ::DPKOIBEFPAO MMPDGCKHPAN(::System::String* FDOKFPDLNNA, ::GAMICCELBAG* KLFNBCEKHEI)
	{
		return ((::DPKOIBEFPAO(*)(::System::String*, ::GAMICCELBAG*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MMPDGCKHPAN_OFFSET))(FDOKFPDLNNA, KLFNBCEKHEI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_4(::System::Collections::Generic::List_1<::HFPLNFLBBKI>* JNIDMGEKNCH)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::HFPLNFLBBKI>*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_4_OFFSET))(JNIDMGEKNCH);
	}

	static ::System::Void GCLENLLOMII()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEIIGPJKDGM_GCLENLLOMII_OFFSET))();
	}

	static ::System::Boolean PKLFFIJCMHO_5(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_5_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean MPJJLANCANL(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Type* ACFDOHPLMEN, ::System::Object*& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MPJJLANCANL_OFFSET))(HHIJHDFHPOI, ACFDOHPLMEN, HFMHOELKCAJ);
	}

	static ::System::Boolean PKLFFIJCMHO_6(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::Single>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Single>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_6_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_5(::System::Int64 GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Int64))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_5_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_7(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Int64& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Int64&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_7_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* KGMKCLCKHKM(::System::String* AKNECPOOACN, ::System::Collections::Generic::List_1<::System::Int32>* DJLOKMMLFJC)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_KGMKCLCKHKM_OFFSET))(AKNECPOOACN, DJLOKMMLFJC);
	}

	static ::System::Boolean PKLFFIJCMHO_8(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::String*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::String*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_8_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_9(::System::String* FDOKFPDLNNA, ::SimpleJSON::JSONNode* HHIJHDFHPOI, ::DPKOIBEFPAO& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_9_OFFSET))(FDOKFPDLNNA, HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_10(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::UInt32& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::UInt32&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_10_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_6(::LCFAKNCOMEF* HNOPAJLDCFB)
	{
		return ((::SimpleJSON::JSONNode*(*)(::LCFAKNCOMEF*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_6_OFFSET))(HNOPAJLDCFB);
	}

	static ::System::Boolean PKLFFIJCMHO_11(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::Int32>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_11_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_7(::OPCAMPLOOAO* GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::OPCAMPLOOAO*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_7_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_12(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Single& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Single&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_12_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_13(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::OPCAMPLOOAO*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::OPCAMPLOOAO*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_13_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_8(::MoleMole::Config::InputEnableInfo* GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::Config::InputEnableInfo*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_8_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_14(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::MoleMole::Config::Spline_WayPoint& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::Config::Spline_WayPoint&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_14_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_15(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_15_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean DFKHPDALDEO(::System::Object* EGEGIMGMJHN, ::System::Int32& IAJLLMALHJJ, ::System::Type* ACFDOHPLMEN)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Int32&, ::System::Type*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_DFKHPDALDEO_OFFSET))(EGEGIMGMJHN, IAJLLMALHJJ, ACFDOHPLMEN);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_9(::NFNCKCMAPAJ GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::NFNCKCMAPAJ))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_9_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_10(::System::Collections::Generic::List_1<::System::Int32>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_10_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::System::Boolean PKLFFIJCMHO_16(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::Int64>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int64>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_16_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::GAMICCELBAG* BNGDAHKGIPB(::OMGFCFDABLN LOACBJBANNC, ::System::Object* HEAJMIGHEHG)
	{
		return ((::GAMICCELBAG*(*)(::OMGFCFDABLN, ::System::Object*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_BNGDAHKGIPB_OFFSET))(LOACBJBANNC, HEAJMIGHEHG);
	}

	static ::System::Boolean PKLFFIJCMHO_17(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Boolean& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_17_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_11(::MoleMole::Config::Spline_WayPoint GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::Config::Spline_WayPoint))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_11_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_12(::MoleMole::BubbleSpeakerPair GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleSpeakerPair))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_12_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_13(::System::Int32 GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_13_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_14(::MBDDPHPODAN GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MBDDPHPODAN))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_14_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_15(::System::Object* HEAJMIGHEHG)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_15_OFFSET))(HEAJMIGHEHG);
	}

	static ::System::Boolean PKLFFIJCMHO_18(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::String*>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_18_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_16(::MoleMole::BubbleGraphStruct GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleGraphStruct))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_16_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_17(::System::SByte GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::SByte))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_17_OFFSET))(GEGOALONGBI);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* EPIOMJKGDNG(::System::Collections::IList* DJLOKMMLFJC)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_EPIOMJKGDNG_OFFSET))(DJLOKMMLFJC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_18(::System::Single GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_18_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_19(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_19_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_19(::OMGFCFDABLN& FJBEGHDCFCA, ::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::IList*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::OMGFCFDABLN&, ::SimpleJSON::JSONNode*, ::System::Collections::IList*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_19_OFFSET))(FJBEGHDCFCA, HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_20(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_20_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_20(::System::Collections::IDictionary* NFBGFHDACPD)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_20_OFFSET))(NFBGFHDACPD);
	}

	static ::System::Boolean PKLFFIJCMHO_21(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::Double>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Double>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_21_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_21(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_21_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::System::Boolean PKLFFIJCMHO_22(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::MBDDPHPODAN& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MBDDPHPODAN&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_22_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_23(::System::String* BJKKGNLACIB, ::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::IList*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::IList*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_23_OFFSET))(BJKKGNLACIB, HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_24(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::MoleMole::BubbleSpeakerPair& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleSpeakerPair&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_24_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_25(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::Boolean>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Boolean>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_25_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_22(::System::Collections::Generic::List_1<::System::Double>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Double>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_22_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::System::Boolean KCBCHPBONFH(::System::String* AKNECPOOACN, ::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::Int32>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_KCBCHPBONFH_OFFSET))(AKNECPOOACN, HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_23(::OMGFCFDABLN LOACBJBANNC, ::GAMICCELBAG* KLFNBCEKHEI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::OMGFCFDABLN, ::GAMICCELBAG*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_23_OFFSET))(LOACBJBANNC, KLFNBCEKHEI);
	}

	static ::AKLPCMMHKEO* PLGJFPDLKHJ(::System::String* FDOKFPDLNNA)
	{
		return ((::AKLPCMMHKEO*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PLGJFPDLKHJ_OFFSET))(FDOKFPDLNNA);
	}

	static ::System::Boolean PKLFFIJCMHO_26(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::MoleMole::EntityHandle& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_26_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Void EEFHHMKBJDD(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::GAMICCELBAG*, ::SimpleJSON::JSONNode*>*>* ECKEGDJFJFC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::GAMICCELBAG*, ::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_EEFHHMKBJDD_OFFSET))(ECKEGDJFJFC);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_24(::System::Collections::Generic::List_1<::System::Single>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_24_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_25(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_25_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_26(::System::Collections::IList* DJLOKMMLFJC)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_26_OFFSET))(DJLOKMMLFJC);
	}

	static ::System::Boolean PKLFFIJCMHO_27(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::MoleMole::BubbleGroupPlayGraphContent*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleGroupPlayGraphContent*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_27_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_28(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::Object*>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_28_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::System::Boolean PKLFFIJCMHO_29(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::SByte& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::SByte&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_29_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::GAMICCELBAG* JOCELLBFFOK(::OMGFCFDABLN LOACBJBANNC, ::System::Object* HEAJMIGHEHG)
	{
		return ((::GAMICCELBAG*(*)(::OMGFCFDABLN, ::System::Object*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_JOCELLBFFOK_OFFSET))(LOACBJBANNC, HEAJMIGHEHG);
	}

	static ::System::Boolean PKLFFIJCMHO_30(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::UnityEngine::Vector2& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_30_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_31(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_31_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::System::Boolean PKLFFIJCMHO_32(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::UInt64& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::UInt64&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_32_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_33(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::UnityEngine::Vector3& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_33_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::System::Boolean PKLFFIJCMHO_34(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Int32& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Int32&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_34_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_27(::System::String* GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_27_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_28(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_28_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* ENIHKPHPNBP(::SimpleJSON::JSONNode* OEGEGBMMLPG, ::System::Object* HEAJMIGHEHG)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_ENIHKPHPNBP_OFFSET))(OEGEGBMMLPG, HEAJMIGHEHG);
	}

	static ::System::Boolean PKLFFIJCMHO_35(::SimpleJSON::JSONNode* KDODCCHDNPO, ::OMGFCFDABLN FDOKFPDLNNA, ::LCFAKNCOMEF*& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::OMGFCFDABLN, ::LCFAKNCOMEF*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_35_OFFSET))(KDODCCHDNPO, FDOKFPDLNNA, GEGOALONGBI);
	}

	static ::System::Void HNGDOACOOOM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEIIGPJKDGM_HNGDOACOOOM_OFFSET))();
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_29(::System::Collections::Generic::List_1<::System::Object*>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_29_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::System::String* ECAEFMPEMIB(::System::Object* HEAJMIGHEHG)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_ECAEFMPEMIB_OFFSET))(HEAJMIGHEHG);
	}

	static ::System::Boolean PKLFFIJCMHO_36(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_36_OFFSET))(HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::System::Boolean PKLFFIJCMHO_37(::OMGFCFDABLN& JBPNNOIEHCK, ::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Collections::Generic::List_1<::System::Object*>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::OMGFCFDABLN&, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_37_OFFSET))(JBPNNOIEHCK, HHIJHDFHPOI, DJLOKMMLFJC);
	}

	static ::System::Boolean PKLFFIJCMHO_38(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::MoleMole::BubbleGraphStruct& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::MoleMole::BubbleGraphStruct&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_38_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_30(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_30_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_31(::MoleMole::BubbleGroupPlayGraphContent* GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::MoleMole::BubbleGroupPlayGraphContent*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_31_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean POEDKBCCPFH(::OMGFCFDABLN& LOACBJBANNC, ::SimpleJSON::JSONNode* HHIJHDFHPOI, ::GAMICCELBAG*& KLFNBCEKHEI)
	{
		return ((::System::Boolean(*)(::OMGFCFDABLN&, ::SimpleJSON::JSONNode*, ::GAMICCELBAG*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_POEDKBCCPFH_OFFSET))(LOACBJBANNC, HHIJHDFHPOI, KLFNBCEKHEI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_32(::UnityEngine::Vector2 GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_32_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_33(::System::Boolean GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_33_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean KCBCHPBONFH_1(::OMGFCFDABLN& LOACBJBANNC, ::SimpleJSON::JSONNode* HHIJHDFHPOI, ::GAMICCELBAG*& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::OMGFCFDABLN&, ::SimpleJSON::JSONNode*, ::GAMICCELBAG*&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_KCBCHPBONFH_1_OFFSET))(LOACBJBANNC, HHIJHDFHPOI, HFMHOELKCAJ);
	}

	static ::System::Boolean PKLFFIJCMHO_39(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::OMGFCFDABLN& OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::OMGFCFDABLN&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_39_OFFSET))(HHIJHDFHPOI, OBNIAHNMHPF);
	}

	static ::System::Boolean PKLFFIJCMHO_40(::SimpleJSON::JSONNode* HHIJHDFHPOI, ::System::Double& GEGOALONGBI)
	{
		return ((::System::Boolean(*)(::SimpleJSON::JSONNode*, ::System::Double&))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_PKLFFIJCMHO_40_OFFSET))(HHIJHDFHPOI, GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_34(::System::Collections::Generic::List_1<::System::Int64>* GEGOALONGBI, ::System::Boolean MGEADLAIAPJ)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::System::Int64>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_34_OFFSET))(GEGOALONGBI, MGEADLAIAPJ);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_35(::System::Double GEGOALONGBI)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_35_OFFSET))(GEGOALONGBI);
	}

	static ::SimpleJSON::JSONNode* DFMMPAHKNCG(::System::Object* HEAJMIGHEHG)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_DFMMPAHKNCG_OFFSET))(HEAJMIGHEHG);
	}

	static ::SimpleJSON::JSONNode* MKEFBLKCNKE_36(::System::Collections::Generic::List_1<::OEDGDCLJLGF>* BKBDPPCFPHL)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Collections::Generic::List_1<::OEDGDCLJLGF>*))((::PBYTE)hIl2Cpp + NEIIGPJKDGM_MKEFBLKCNKE_36_OFFSET))(BKBDPPCFPHL);
	}
};
