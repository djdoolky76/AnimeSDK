#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGJFJGEMIPB_IJGJFOLIMAH.h"
#include "unitysdk/AGJFJGEMIPB_JDAJAJNPCGG.h"
#include "unitysdk/AGJFJGEMIPB_JLDJPIALOLL.h"
#include "unitysdk/AJPBNIJDOEJ.h"
#include "unitysdk/DDJHPJHDLKG.h"
#include "unitysdk/DEJDAODMJDJ.h"
#include "unitysdk/EPEEDOJEBCK.h"
#include "unitysdk/FNLJPBBJIKB.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GAKAEKHONIN.h"
#include "unitysdk/GGBKALNONBN.h"
#include "unitysdk/KGOEPEBCOOB.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NFPJHHNGFEF.h"
#include "unitysdk/PGNFPEFOACA_FACCPCCIGHK.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/AGJFJGEMIPB_HGFBJALPMJA.h"
#include "unitysdk/FNKOPDEKLKG.h"

class AGJFDPBLDDF;
class AGJFJGEMIPB_ABMKPFAONMD;
class EELOMMHDNHK;
class HGAJKHIMKJP;
class JJFFDGFKJAP;
class KMMOLFIBFPK;
class MHJDIPINMMF;
class OGJNHDLJIBM;
class PGHPGEANHGL;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define AGJFJGEMIPB_ABBPHLLPIJC_OFFSET UNITYSDK_OFFSET(0x12655260)
#define AGJFJGEMIPB_AEDOHCBFFMN_OFFSET UNITYSDK_OFFSET(0x12655150)
#define AGJFJGEMIPB_AFBHLADANMG_OFFSET UNITYSDK_OFFSET(0x12654E50)
#define AGJFJGEMIPB_AILJLEPMALO_OFFSET UNITYSDK_OFFSET(0x12653B20)
#define AGJFJGEMIPB_BAFIKGPAAEB_OFFSET UNITYSDK_OFFSET(0x12653BC0)
#define AGJFJGEMIPB_BDPODILIKLJ_OFFSET UNITYSDK_OFFSET(0x126545D0)
#define AGJFJGEMIPB_BFBABENFMEB_OFFSET UNITYSDK_OFFSET(0x12655010)
#define AGJFJGEMIPB_BFLDJGMBHCN_OFFSET UNITYSDK_OFFSET(0x12655140)
#define AGJFJGEMIPB_BIEFMEBEJBN_OFFSET UNITYSDK_OFFSET(0x12654E60)
#define AGJFJGEMIPB_BKOBNNDEHGL_OFFSET UNITYSDK_OFFSET(0x1264F480)
#define AGJFJGEMIPB_BOMKAAJLDHJ_OFFSET UNITYSDK_OFFSET(0x126506E0)
#define AGJFJGEMIPB_CFPABNLFNKA_OFFSET UNITYSDK_OFFSET(0x12653DC0)
#define AGJFJGEMIPB_CHPNBDMGLJB_OFFSET UNITYSDK_OFFSET(0x126555C0)
#define AGJFJGEMIPB_CIMJKGBKLLG_OFFSET UNITYSDK_OFFSET(0x12654080)
#define AGJFJGEMIPB_CLNNAOEOLMJ_OFFSET UNITYSDK_OFFSET(0x1264F570)
#define AGJFJGEMIPB_DEEAIPGHBOM_OFFSET UNITYSDK_OFFSET(0x12650C70)
#define AGJFJGEMIPB_DKOIKPKMCNJ_OFFSET UNITYSDK_OFFSET(0x12651700)
#define AGJFJGEMIPB_DPOLLCPMKGK_OFFSET UNITYSDK_OFFSET(0x12650B30)
#define AGJFJGEMIPB_EJOBLEDGPDC_OFFSET UNITYSDK_OFFSET(0x12653C30)
#define AGJFJGEMIPB_FGBBMNBOMEO_OFFSET UNITYSDK_OFFSET(0x12653F30)
#define AGJFJGEMIPB_FIFMDOOPJIC_OFFSET UNITYSDK_OFFSET(0x126519E0)
#define AGJFJGEMIPB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1264E3F0)
#define AGJFJGEMIPB_HBEDNICOMBP_OFFSET UNITYSDK_OFFSET(0x12654A50)
#define AGJFJGEMIPB_HGPMBHNAMAI_OFFSET UNITYSDK_OFFSET(0x1264F5F0)
#define AGJFJGEMIPB_HHDMABAPIHG_OFFSET UNITYSDK_OFFSET(0x1264F530)
#define AGJFJGEMIPB_HJCCIGBLNOC_OFFSET UNITYSDK_OFFSET(0x12650930)
#define AGJFJGEMIPB_IALJALLEAMN_OFFSET UNITYSDK_OFFSET(0x12650C10)
#define AGJFJGEMIPB_IBEGAHEIHPJ_OFFSET UNITYSDK_OFFSET(0x12654CF0)
#define AGJFJGEMIPB_IBHPHCODALB_OFFSET UNITYSDK_OFFSET(0x12650B40)
#define AGJFJGEMIPB_IDJNCJCMCHD_OFFSET UNITYSDK_OFFSET(0x12653DB0)
#define AGJFJGEMIPB_IEGPEFGJPCP_OFFSET UNITYSDK_OFFSET(0x126508E0)
#define AGJFJGEMIPB_IHCLICGAGCA_OFFSET UNITYSDK_OFFSET(0x126506F0)
#define AGJFJGEMIPB_IHHCDKEOAGN_OFFSET UNITYSDK_OFFSET(0x12650700)
#define AGJFJGEMIPB_ILHILJKBDEB_OFFSET UNITYSDK_OFFSET(0x12650200)
#define AGJFJGEMIPB_IOBCJMCLPFF_OFFSET UNITYSDK_OFFSET(0x1264F4A0)
#define AGJFJGEMIPB_JELHFOMHBDK_OFFSET UNITYSDK_OFFSET(0x1264F600)
#define AGJFJGEMIPB_JFAHCOGLMKC_OFFSET UNITYSDK_OFFSET(0x12654470)
#define AGJFJGEMIPB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12650660)
#define AGJFJGEMIPB_JFHKIMELOIG_OFFSET UNITYSDK_OFFSET(0x126504F0)
#define AGJFJGEMIPB_JGEDKODJFIO_OFFSET UNITYSDK_OFFSET(0x12654690)
#define AGJFJGEMIPB_JLOEOIMCGFJ_OFFSET UNITYSDK_OFFSET(0x12654C10)
#define AGJFJGEMIPB_KCDCBNNNDCD_OFFSET UNITYSDK_OFFSET(0x126519D0)
#define AGJFJGEMIPB_KJIELPBKLAC_OFFSET UNITYSDK_OFFSET(0x1264F5D0)
#define AGJFJGEMIPB_KKENNJGJEOD_OFFSET UNITYSDK_OFFSET(0x126555D0)
#define AGJFJGEMIPB_KKMBAPLELNC_OFFSET UNITYSDK_OFFSET(0x12654E30)
#define AGJFJGEMIPB_LMCINGKIBHC_OFFSET UNITYSDK_OFFSET(0x1264F490)
#define AGJFJGEMIPB_LOCPDKNNCDB_OFFSET UNITYSDK_OFFSET(0x12654070)
#define AGJFJGEMIPB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12655440)
#define AGJFJGEMIPB_MEPGEHOLFMG_OFFSET UNITYSDK_OFFSET(0x12650140)
#define AGJFJGEMIPB_MGBIPOMJBCM_OFFSET UNITYSDK_OFFSET(0x12650A70)
#define AGJFJGEMIPB_MHDBCIHKPIL_OFFSET UNITYSDK_OFFSET(0x126554D0)
#define AGJFJGEMIPB_MIABHCDKDHB_OFFSET UNITYSDK_OFFSET(0x12654280)
#define AGJFJGEMIPB_MIDBIOMMEBH_OFFSET UNITYSDK_OFFSET(0x12651710)
#define AGJFJGEMIPB_MONMEPFGEOD_OFFSET UNITYSDK_OFFSET(0x12650B50)
#define AGJFJGEMIPB_NAIAMHOGCPH_OFFSET UNITYSDK_OFFSET(0x1264F6A0)
#define AGJFJGEMIPB_NDLEDFIDHOF_OFFSET UNITYSDK_OFFSET(0x126518E0)
#define AGJFJGEMIPB_NDMHBALAJEP_OFFSET UNITYSDK_OFFSET(0x1264F550)
#define AGJFJGEMIPB_NILHEMJMBEC_OFFSET UNITYSDK_OFFSET(0x12650990)
#define AGJFJGEMIPB_NJPBGPOAAHN_OFFSET UNITYSDK_OFFSET(0x12653950)
#define AGJFJGEMIPB_NNGDGGALKBI_OFFSET UNITYSDK_OFFSET(0x1264FE50)
#define AGJFJGEMIPB_OJEJBENJLFN_OFFSET UNITYSDK_OFFSET(0x12654270)
#define AGJFJGEMIPB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1264CC20)
#define AGJFJGEMIPB_PFJMIICDAPH_OFFSET UNITYSDK_OFFSET(0x12654460)
#define AGJFJGEMIPB_PHGHEAAIFMC_OFFSET UNITYSDK_OFFSET(0x12654060)
#define AGJFJGEMIPB_PHLMFGKBHJE_OFFSET UNITYSDK_OFFSET(0x1264E180)
#define AGJFJGEMIPB_PIDOCEGDPLO_OFFSET UNITYSDK_OFFSET(0x12654480)
#define AGJFJGEMIPB_PIPNBJDEDOE_OFFSET UNITYSDK_OFFSET(0x12654920)
#define AGJFJGEMIPB_PJDNMLEKCLK_OFFSET UNITYSDK_OFFSET(0x12654E40)
#define AGJFJGEMIPB_PMLFLMGCFOB_OFFSET UNITYSDK_OFFSET(0x12653DA0)
#define AGJFJGEMIPB_PPKFPKPHAAG_OFFSET UNITYSDK_OFFSET(0x12650D30)
#define AGJFJGEMIPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1264E440)
#define AGJFJGEMIPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1264E540)

inline static constexpr unsigned int AGJFJGEMIPB_TypeDefinitionIndex = 91422;

class AGJFJGEMIPB : public ::MJHDNMKGLBJ
{
public:
	static ::System::Text::StringBuilder** StaticGet_DOCDCIGOKLJ()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(AGJFJGEMIPB_TypeDefinitionIndex)->GetStaticField(0x30A60);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x47; // 0x0
	::System::Collections::Generic::IReadOnlyDictionary_2<::Share::EItemType, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*>* BDFGJIGEKCE; // 0x48
	::System::Type* DDIGLNANDKK; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JJFFDGFKJAP*>* HAMJALPOPFH; // 0x58
	::System::Collections::Generic::List_1<::KGOEPEBCOOB>* PFJPBCKHBAF; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AGJFDPBLDDF*>* IJACKGKCEGE; // 0x68
	::System::Collections::Generic::Dictionary_2<::FNLJPBBJIKB, ::System::Collections::Generic::List_1<::AJPBNIJDOEJ>*>* PDGGMAPMEOH; // 0x70
	::GAKAEKHONIN MPJMOMDCKCJ; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* _PNLDFILODPA_k__BackingField; // 0xB0
	::System::Collections::Generic::Dictionary_2<::HGAJKHIMKJP*, ::System::Collections::Generic::List_1<::KGOEPEBCOOB>*>* PFADGIGINGJ; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _KMLMDPOAIEN_k__BackingField; // 0xC0
	::System::Collections::Generic::List_1<::System::Int32>* PNBPGPBJNCO; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>*>* FJLACNBJHKG; // 0xD0
	::EELOMMHDNHK* FDDCNAAOPJI; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* DDCCCIJIEAG; // 0xE0
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralNewsBubbleRowWidgetController*>* AIJFKBBCHLI; // 0xE8
	::GAKAEKHONIN LLBONOJLEGM; // 0xF0
	::System::Collections::Generic::List_1<::DEJDAODMJDJ>* PJEMDPHHBCN; // 0x128
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* PBNOKOPNDIG; // 0x130
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NMEBHFLEBPD; // 0x138
	::AGJFDPBLDDF* BGPPAOJOEDA; // 0x140
	::System::Type* LOIKFNOCFPJ; // 0x148
	::System::Collections::Generic::List_1<::System::Int32>* ODKGGONOCEF; // 0x150
	::System::Collections::Generic::List_1<::PGHPGEANHGL*>* PFKGKMDFMMH; // 0x158
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* AEBCPBOBBPK; // 0x160
	::AGJFJGEMIPB_JLDJPIALOLL OGAOKNFMFLJ; // 0x168
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* PLGKDOHJHMG; // 0x190
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::Ability::InLevelAbilityTargetMask>>* AALAONOKPKE; // 0x198
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* ANLNBBELHKB; // 0x1A0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::KMMOLFIBFPK*>* IFALCPJIBIA; // 0x1A8
	::AGJFDPBLDDF* DNABOIOHGMA; // 0x1B0
	::System::Collections::Generic::List_1<::System::String*>* IGHPDFPBBCP; // 0x1B8
	::AGJFDPBLDDF* HBDJMGJEBFL; // 0x1C0
	::MoleMole::Config::StageEntry* HNMINGJFFPA; // 0x1C8
	::AGJFJGEMIPB_JDAJAJNPCGG _PPEPOPADPDH_k__BackingField; // 0x1D0
	::System::Collections::Generic::List_1<::System::IDisposable*>* IGDBLLPHINL; // 0x1E8
	::NFPJHHNGFEF BHFLGFNNEKD; // 0x1F0
	::System::Collections::Generic::List_1<::System::String*>* OKNFOEFCDGP; // 0x210
	::GAKAEKHONIN FKANGBGKAPB; // 0x218
	::System::Collections::Generic::Dictionary_2<::EPEEDOJEBCK, ::System::Collections::Generic::List_1<::GGBKALNONBN>*>* PILDIPNJBJH; // 0x250
	::System::Collections::Generic::List_1<::AGJFDPBLDDF*>* JFPBBFPKDDE; // 0x258
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* NOFGFJNNMCL; // 0x260
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ODLPKOBFHDC; // 0x268
	::System::String* DGMFBMPDLEE; // 0x270
	::OGJNHDLJIBM* OAABADJPEJG; // 0x278
	::System::Collections::Generic::HashSet_1<::System::Int32>* PPBCLEOHNII; // 0x280
	::System::Collections::Generic::List_1<::System::String*>* JOFKHHMHHAC; // 0x288
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* EANOEKBJMAN; // 0x290
	::System::Collections::Generic::List_1<::System::String*>* HCOPJJOMMGE; // 0x298
	::System::Collections::Generic::List_1<::System::Int32>* KMPHAGENAOD; // 0x2A0
	::MoleMole::EntityHandle AHGONDBIOCG; // 0x2A8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* KJNLIDPMPNA; // 0x2B8
	::System::Object* LOEAEJFCBBL; // 0x2C0
	::GAKAEKHONIN DMPJPBEAEAP; // 0x2C8
	::System::Collections::Generic::List_1<::System::Object*>* FOCALCOGDOE; // 0x300
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* BDLJJOBEBGH; // 0x308
	::AGJFJGEMIPB_IJGJFOLIMAH KNEEJGMEHIM; // 0x310
	::PGNFPEFOACA_FACCPCCIGHK _CCDMDAKNMLL_k__BackingField; // 0x340
	::System::Single BEBLMEPFDOP; // 0x344
	::System::Int32 MCMJEPIKAHK; // 0x348
	::System::Boolean MLGNGHJKIAO; // 0x34C
	::System::Boolean _LMKCNIICGGF_k__BackingField; // 0x34D
	::System::Boolean _CNEFDAAMGAJ_k__BackingField; // 0x34E
	::System::Boolean MLHHMFOODBE; // 0x34F
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType DKMCFPMINME; // 0x350
	::MoleMole::Config::LevelEndType MNNNBPAKECD; // 0x354
	::Foundation::Coroutine::CoroutineHandle DMCAIKPDBAA; // 0x358
	::System::UInt32 CBKIMLFKCAA; // 0x35C
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType JPOOMKIJLFK; // 0x360
	::UnityEngine::Vector3 LOKIONFHBFG; // 0x364
	::System::Int32 IAJPGAJFJMO; // 0x370
	::System::Single BJILCIJCDMK; // 0x374
	::DDJHPJHDLKG LLADKKJPIHB; // 0x378
	::System::Boolean BEJGELHEPKH; // 0x37C
	::System::Boolean NIEGFKDJCOA; // 0x37D
	::System::Boolean LFLMGBMAIBE; // 0x37E
	::System::Byte _padding0[0x1];
	::MoleMole::FlowCanvas::Nodes::EntityDieCheckType ENFAMIIKNBE; // 0x380
	::System::Int32 CLKEOHNGIIA; // 0x384
	::System::Boolean LPBJMAFKJGC; // 0x388
	::System::Boolean AHAFCNECDGB; // 0x389
	::System::Byte _padding1[0x2];
	::System::Int32 CCJFLNEDHLI; // 0x38C
	::System::Boolean _JCLBDABJJMJ_k__BackingField; // 0x390
	::System::Boolean _KABEEENKDKC_k__BackingField; // 0x391
	::System::Boolean MPKFKCNNBMJ; // 0x392
	::System::Boolean ELOAPFFHMPK; // 0x393
	::System::Int32 BFGNFCMPHMG; // 0x394
	::System::Boolean _PPABFMIHCBC_k__BackingField; // 0x398
	::System::Boolean CDGNHBHOLCO; // 0x399
	::System::Boolean _BFECNNFHEDB_k__BackingField; // 0x39A
	::System::Boolean LKJAGLODDKA; // 0x39B
	::System::Int32 IJGOBHJIBHJ; // 0x39C
	::UnityEngine::Vector3 OBIMOIEPCLP; // 0x3A0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGJFJGEMIPB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_GETCLASSID_OFFSET))(this);
	}

	::System::Void BKOBNNDEHGL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_BKOBNNDEHGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LMCINGKIBHC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_LMCINGKIBHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IOBCJMCLPFF(::System::UInt32 NJNCGJLHLKC, ::AGJFJGEMIPB_HGFBJALPMJA HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AGJFJGEMIPB_HGFBJALPMJA))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IOBCJMCLPFF_OFFSET))(this, NJNCGJLHLKC, HMMMOCJAEOA);
	}

	::NFPJHHNGFEF HHDMABAPIHG()
	{
		return ((::NFPJHHNGFEF(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_HHDMABAPIHG_OFFSET))(this);
	}

	::AGJFJGEMIPB_JDAJAJNPCGG NDMHBALAJEP()
	{
		return ((::AGJFJGEMIPB_JDAJAJNPCGG(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_NDMHBALAJEP_OFFSET))(this);
	}

	::System::Boolean CLNNAOEOLMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_CLNNAOEOLMJ_OFFSET))(this);
	}

	::System::Void KJIELPBKLAC(::AGJFJGEMIPB_JDAJAJNPCGG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AGJFJGEMIPB_JDAJAJNPCGG))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_KJIELPBKLAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HGPMBHNAMAI(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_HGPMBHNAMAI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JELHFOMHBDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JELHFOMHBDK_OFFSET))(this);
	}

	::System::Void NAIAMHOGCPH(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_NAIAMHOGCPH_OFFSET))(this, HFMHOELKCAJ);
	}

	::AGJFJGEMIPB_ABMKPFAONMD* NNGDGGALKBI(::System::String* MCOHLHMKLIP, ::System::Boolean& LGCMBHEIMCM, ::System::Boolean DCFANHOIMOB, ::System::Single FJEMFCOPBCA)
	{
		return ((::AGJFJGEMIPB_ABMKPFAONMD*(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_NNGDGGALKBI_OFFSET))(this, MCOHLHMKLIP, LGCMBHEIMCM, DCFANHOIMOB, FJEMFCOPBCA);
	}

	::System::Boolean MEPGEHOLFMG(::FNKOPDEKLKG PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_MEPGEHOLFMG_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean ILHILJKBDEB(::System::Collections::Generic::List_1<::System::String*>* INMFBLMHHCM, ::System::Collections::Generic::List_1<::System::String*>* DGAKBLMALFI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_ILHILJKBDEB_OFFSET))(this, INMFBLMHHCM, DGAKBLMALFI);
	}

	::System::Void JFHKIMELOIG(::System::Boolean NCIPNKHPOFC, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JFHKIMELOIG_OFFSET))(this, NCIPNKHPOFC, MDPPNMIPDMP);
	}

	static ::AGJFJGEMIPB* JFDOOELFAOA()
	{
		return ((::AGJFJGEMIPB*(*)())((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BOMKAAJLDHJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_BOMKAAJLDHJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IHCLICGAGCA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IHCLICGAGCA_OFFSET))(this, EGEGIMGMJHN);
	}

	::FNKOPDEKLKG IHHCDKEOAGN(::System::Collections::Generic::List_1<::System::String*>* NGFEFHPLMHK, ::System::String* LDLLELFJHPG)
	{
		return ((::FNKOPDEKLKG(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IHHCDKEOAGN_OFFSET))(this, NGFEFHPLMHK, LDLLELFJHPG);
	}

	::System::Void IEGPEFGJPCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IEGPEFGJPCP_OFFSET))(this);
	}

	::System::Void HJCCIGBLNOC(::KMMOLFIBFPK* HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::KMMOLFIBFPK*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_HJCCIGBLNOC_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void NILHEMJMBEC(::MHJDIPINMMF* DJPBCGFPJMG)
	{
		return ((::System::Void(*)(::PVOID, ::MHJDIPINMMF*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_NILHEMJMBEC_OFFSET))(this, DJPBCGFPJMG);
	}

	::System::Boolean MGBIPOMJBCM(::FNKOPDEKLKG PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_MGBIPOMJBCM_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void DPOLLCPMKGK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_DPOLLCPMKGK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* IBHPHCODALB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IBHPHCODALB_OFFSET))(this);
	}

	::System::Boolean MONMEPFGEOD(::FNKOPDEKLKG PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_MONMEPFGEOD_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean IALJALLEAMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IALJALLEAMN_OFFSET))(this);
	}

	::System::Void PHLMFGKBHJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_PHLMFGKBHJE_OFFSET))(this);
	}

	::System::Boolean DEEAIPGHBOM(::FNKOPDEKLKG PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_DEEAIPGHBOM_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void PPKFPKPHAAG(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_PPKFPKPHAAG_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Boolean DKOIKPKMCNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_DKOIKPKMCNJ_OFFSET))(this);
	}

	::System::Boolean MIDBIOMMEBH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_MIDBIOMMEBH_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean NDLEDFIDHOF(::System::Int32 FPNGKOFOFNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_NDLEDFIDHOF_OFFSET))(this, FPNGKOFOFNO);
	}

	::PGNFPEFOACA_FACCPCCIGHK KCDCBNNNDCD()
	{
		return ((::PGNFPEFOACA_FACCPCCIGHK(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_KCDCBNNNDCD_OFFSET))(this);
	}

	::System::Void FIFMDOOPJIC(::MoleMole::Config::StageEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_FIFMDOOPJIC_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Boolean AILJLEPMALO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_AILJLEPMALO_OFFSET))(this);
	}

	::FNLJPBBJIKB BAFIKGPAAEB()
	{
		return ((::FNLJPBBJIKB(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_BAFIKGPAAEB_OFFSET))(this);
	}

	::System::Void EJOBLEDGPDC(::HGAJKHIMKJP* PMHJBOFDPEJ)
	{
		return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_EJOBLEDGPDC_OFFSET))(this, PMHJBOFDPEJ);
	}

	::System::Void PMLFLMGCFOB(::PGNFPEFOACA_FACCPCCIGHK EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PGNFPEFOACA_FACCPCCIGHK))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_PMLFLMGCFOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IDJNCJCMCHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IDJNCJCMCHD_OFFSET))(this);
	}

	::MoleMole::EntityHandle CFPABNLFNKA()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_CFPABNLFNKA_OFFSET))(this);
	}

	::AGJFJGEMIPB_ABMKPFAONMD* FGBBMNBOMEO(::System::String* MCOHLHMKLIP, ::System::Boolean NOLBECKFLEK)
	{
		return ((::AGJFJGEMIPB_ABMKPFAONMD*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_FGBBMNBOMEO_OFFSET))(this, MCOHLHMKLIP, NOLBECKFLEK);
	}

	::System::Void PHGHEAAIFMC(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_PHGHEAAIFMC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* LOCPDKNNCDB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_LOCPDKNNCDB_OFFSET))(this);
	}

	::System::String* CIMJKGBKLLG(::System::Int32 JACODLHIJDO)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_CIMJKGBKLLG_OFFSET))(this, JACODLHIJDO);
	}

	::AGJFDPBLDDF* OJEJBENJLFN()
	{
		return ((::AGJFDPBLDDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_OJEJBENJLFN_OFFSET))(this);
	}

	::HGAJKHIMKJP* MIABHCDKDHB(::System::Int32 MGMDLMBEDJF, ::Share::EItemType JCHOHDBNCKJ)
	{
		return ((::HGAJKHIMKJP*(*)(::PVOID, ::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_MIABHCDKDHB_OFFSET))(this, MGMDLMBEDJF, JCHOHDBNCKJ);
	}

	::System::Boolean PFJMIICDAPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_PFJMIICDAPH_OFFSET))(this);
	}

	::System::Void JFAHCOGLMKC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JFAHCOGLMKC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PIDOCEGDPLO(::System::String* NNDPEENOBEO, ::System::Int32 GJMLMHNLHAA, ::System::Collections::Generic::HashSet_1<::System::String*>*& CKOAEGOCEIK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_PIDOCEGDPLO_OFFSET))(this, NNDPEENOBEO, GJMLMHNLHAA, CKOAEGOCEIK);
	}

	::System::Void JGEDKODJFIO(::System::String* NNDPEENOBEO, ::System::Int32 GJMLMHNLHAA, ::System::String* DFCJFPNCLEO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JGEDKODJFIO_OFFSET))(this, NNDPEENOBEO, GJMLMHNLHAA, DFCJFPNCLEO);
	}

	::System::Boolean PIPNBJDEDOE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_PIPNBJDEDOE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void JLOEOIMCGFJ(::System::String* BNIHCAJECFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JLOEOIMCGFJ_OFFSET))(this, BNIHCAJECFH);
	}

	::System::Boolean IBEGAHEIHPJ(::System::String* BNIHCAJECFH, ::System::Single AHGHAOMECAA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_IBEGAHEIHPJ_OFFSET))(this, BNIHCAJECFH, AHGHAOMECAA);
	}

	::System::Boolean KKMBAPLELNC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_KKMBAPLELNC_OFFSET))(this);
	}

	::System::String* BDPODILIKLJ(::System::String* NNDPEENOBEO, ::System::Int32 GJMLMHNLHAA)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_BDPODILIKLJ_OFFSET))(this, NNDPEENOBEO, GJMLMHNLHAA);
	}

	::System::Boolean HBEDNICOMBP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_HBEDNICOMBP_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* PJDNMLEKCLK()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_PJDNMLEKCLK_OFFSET))(this);
	}

	::System::Boolean AFBHLADANMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_AFBHLADANMG_OFFSET))(this);
	}

	::FNKOPDEKLKG BIEFMEBEJBN(::System::String* AELLPLBJELA)
	{
		return ((::FNKOPDEKLKG(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_BIEFMEBEJBN_OFFSET))(this, AELLPLBJELA);
	}

	::FNKOPDEKLKG BFBABENFMEB(::System::String* AELLPLBJELA, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::FNKOPDEKLKG(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_BFBABENFMEB_OFFSET))(this, AELLPLBJELA, DKOFFFNEFJC);
	}

	::System::Boolean BFLDJGMBHCN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_BFLDJGMBHCN_OFFSET))(this);
	}

	::System::Boolean AEDOHCBFFMN(::System::String* MCOHLHMKLIP, ::AGJFJGEMIPB_ABMKPFAONMD*& JCADOOMFONN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::AGJFJGEMIPB_ABMKPFAONMD*&))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_AEDOHCBFFMN_OFFSET))(this, MCOHLHMKLIP, JCADOOMFONN);
	}

	::System::Void NJPBGPOAAHN(::System::Collections::Generic::List_1<::System::Int32>* PGEOBEDMIKI, ::System::Int32 LFPJEDNCCGC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_NJPBGPOAAHN_OFFSET))(this, PGEOBEDMIKI, LFPJEDNCCGC);
	}

	::FNKOPDEKLKG ABBPHLLPIJC(::System::Collections::Generic::List_1<::System::String*>* NGFEFHPLMHK, ::System::String* LDLLELFJHPG)
	{
		return ((::FNKOPDEKLKG(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_ABBPHLLPIJC_OFFSET))(this, NGFEFHPLMHK, LDLLELFJHPG);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* MHDBCIHKPIL()
	{
		return ((::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_MHDBCIHKPIL_OFFSET))(this);
	}

	::System::Boolean CHPNBDMGLJB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_CHPNBDMGLJB_OFFSET))(this);
	}

	::KMMOLFIBFPK* KKENNJGJEOD(::System::String* AELLPLBJELA, ::System::Single EFEOJABEDMO)
	{
		return ((::KMMOLFIBFPK*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_KKENNJGJEOD_OFFSET))(this, AELLPLBJELA, EFEOJABEDMO);
	}
};
