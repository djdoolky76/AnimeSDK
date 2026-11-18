#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLEEAOKBGHG.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class AEMCAOEICDG;
class ALMMGOFACDF;
class EHKKPCGAJHO;
class ENGKPGFGGLM;
class GOHCHNNDBDP;
class KCAGFFJBMPE;
class LKEOMDKHKJE;
class PLNFNMOHHLI;
namespace MoleMole { class MonoEffectPluginTransform; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { template <typename T1, typename T2> class IndexedList_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GLNMJDGLJAI_ABGFAFPEICH_OFFSET UNITYSDK_OFFSET(0x149EABA0)
#define GLNMJDGLJAI_ACJAJDBHJEM_OFFSET UNITYSDK_OFFSET(0x149EC9D0)
#define GLNMJDGLJAI_AEAHBHHMHLA_OFFSET UNITYSDK_OFFSET(0x149E7760)
#define GLNMJDGLJAI_AODOOJCIPDJ_OFFSET UNITYSDK_OFFSET(0x149E3300)
#define GLNMJDGLJAI_AONIBJBNGJO_OFFSET UNITYSDK_OFFSET(0x149E85B0)
#define GLNMJDGLJAI_APNMKHJNJEE_OFFSET UNITYSDK_OFFSET(0x149ECB30)
#define GLNMJDGLJAI_BABDIBOGANH_OFFSET UNITYSDK_OFFSET(0x149E4080)
#define GLNMJDGLJAI_BEBHGEBMMOL_OFFSET UNITYSDK_OFFSET(0x149E75F0)
#define GLNMJDGLJAI_BGGGGHGIBOD_OFFSET UNITYSDK_OFFSET(0x149EC5B0)
#define GLNMJDGLJAI_BKADFCLBICC_OFFSET UNITYSDK_OFFSET(0x149EBFA0)
#define GLNMJDGLJAI_BOJBMKNFBFK_OFFSET UNITYSDK_OFFSET(0x149E4230)
#define GLNMJDGLJAI_BPKBOJFINMB_OFFSET UNITYSDK_OFFSET(0x149E47A0)
#define GLNMJDGLJAI_CDAPPMFMMHA_OFFSET UNITYSDK_OFFSET(0x149EB400)
#define GLNMJDGLJAI_CDFIMHMCJFG_OFFSET UNITYSDK_OFFSET(0x149E3C70)
#define GLNMJDGLJAI_CFKFKLEOMKH_OFFSET UNITYSDK_OFFSET(0x149E2070)
#define GLNMJDGLJAI_CJFIIIJHPGJ_OFFSET UNITYSDK_OFFSET(0x149E53A0)
#define GLNMJDGLJAI_CNOGELAHPMD_OFFSET UNITYSDK_OFFSET(0x149E7B20)
#define GLNMJDGLJAI_DALBBFOJFMK_OFFSET UNITYSDK_OFFSET(0x149E3360)
#define GLNMJDGLJAI_DGANLFNHIGD_OFFSET UNITYSDK_OFFSET(0x149EC6C0)
#define GLNMJDGLJAI_DIIIGGGOMOM_OFFSET UNITYSDK_OFFSET(0x149E3AB0)
#define GLNMJDGLJAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149E1740)
#define GLNMJDGLJAI_DJBLGGFEKJM_OFFSET UNITYSDK_OFFSET(0x149EACA0)
#define GLNMJDGLJAI_DJJALECKFPN_OFFSET UNITYSDK_OFFSET(0x149EBC10)
#define GLNMJDGLJAI_DKAPLIBIIGL_OFFSET UNITYSDK_OFFSET(0x149EAF10)
#define GLNMJDGLJAI_DLCAIDMHOFL_OFFSET UNITYSDK_OFFSET(0x149ECDD0)
#define GLNMJDGLJAI_DMCJHLOAAIE_OFFSET UNITYSDK_OFFSET(0x149E4A20)
#define GLNMJDGLJAI_DMJPJOEPFCA_OFFSET UNITYSDK_OFFSET(0x149E9070)
#define GLNMJDGLJAI_EFLLHKPGBJC_OFFSET UNITYSDK_OFFSET(0x149EC000)
#define GLNMJDGLJAI_EMKACGIEJAN_OFFSET UNITYSDK_OFFSET(0x149E3A40)
#define GLNMJDGLJAI_EMOIEIKIJEA_OFFSET UNITYSDK_OFFSET(0x149E8F00)
#define GLNMJDGLJAI_ENGIGDOGOHP_OFFSET UNITYSDK_OFFSET(0x149E8DD0)
#define GLNMJDGLJAI_EOBHJMLOMOB_OFFSET UNITYSDK_OFFSET(0x149E6090)
#define GLNMJDGLJAI_EOGLBILKEPA_OFFSET UNITYSDK_OFFSET(0x149E5810)
#define GLNMJDGLJAI_EONLKHBAMMP_OFFSET UNITYSDK_OFFSET(0x149EC720)
#define GLNMJDGLJAI_FBALHHGOHCC_OFFSET UNITYSDK_OFFSET(0x149E8640)
#define GLNMJDGLJAI_FBFEOFJPDOB_OFFSET UNITYSDK_OFFSET(0x149EC3D0)
#define GLNMJDGLJAI_FDEOGJBIGKG_OFFSET UNITYSDK_OFFSET(0x149E3B70)
#define GLNMJDGLJAI_FEPMNINDJEF_OFFSET UNITYSDK_OFFSET(0x149EC780)
#define GLNMJDGLJAI_FFBPIEFBOOG_OFFSET UNITYSDK_OFFSET(0x149E3E20)
#define GLNMJDGLJAI_FHCLONABABF_OFFSET UNITYSDK_OFFSET(0x149E1E70)
#define GLNMJDGLJAI_FJLELLBKFLA_OFFSET UNITYSDK_OFFSET(0x149E1360)
#define GLNMJDGLJAI_FPJPFAAKKCE_OFFSET UNITYSDK_OFFSET(0x149EBE00)
#define GLNMJDGLJAI_FPKKAGJCFEC_OFFSET UNITYSDK_OFFSET(0x149E3B10)
#define GLNMJDGLJAI_GEPBJAFGFHC_OFFSET UNITYSDK_OFFSET(0x149E6030)
#define GLNMJDGLJAI_GJCHELMIIDI_OFFSET UNITYSDK_OFFSET(0x149E8870)
#define GLNMJDGLJAI_GKDCJMMCDOF_OFFSET UNITYSDK_OFFSET(0x149E7FE0)
#define GLNMJDGLJAI_GLAAKPGEOFI_OFFSET UNITYSDK_OFFSET(0x149E6330)
#define GLNMJDGLJAI_GLEKAOGHMNC_OFFSET UNITYSDK_OFFSET(0x149E3BD0)
#define GLNMJDGLJAI_GOANELDCICD_OFFSET UNITYSDK_OFFSET(0x149E8700)
#define GLNMJDGLJAI_GOHIFHLALOD_OFFSET UNITYSDK_OFFSET(0x149E6BB0)
#define GLNMJDGLJAI_HINIHDECMOM_OFFSET UNITYSDK_OFFSET(0x149E5870)
#define GLNMJDGLJAI_HOLNEGHODAG_OFFSET UNITYSDK_OFFSET(0x149EB510)
#define GLNMJDGLJAI_IBFNOAIAOGN_OFFSET UNITYSDK_OFFSET(0x149ECAD0)
#define GLNMJDGLJAI_ICBKKGKLCIC_1_OFFSET UNITYSDK_OFFSET(0x149E4FA0)
#define GLNMJDGLJAI_ICBKKGKLCIC_OFFSET UNITYSDK_OFFSET(0x149E4F30)
#define GLNMJDGLJAI_IFIOKMKKFEP_OFFSET UNITYSDK_OFFSET(0x149EB5A0)
#define GLNMJDGLJAI_IFKIEEFNDLB_OFFSET UNITYSDK_OFFSET(0x149E33C0)
#define GLNMJDGLJAI_IIPCDLDPLDI_OFFSET UNITYSDK_OFFSET(0x149EBEE0)
#define GLNMJDGLJAI_IJMJEKJCLGI_OFFSET UNITYSDK_OFFSET(0x149E48E0)
#define GLNMJDGLJAI_IJPHOOOBCOF_OFFSET UNITYSDK_OFFSET(0x149E7650)
#define GLNMJDGLJAI_ILOPFPEJCDK_OFFSET UNITYSDK_OFFSET(0x149E9250)
#define GLNMJDGLJAI_IMDDCEKKLHP_OFFSET UNITYSDK_OFFSET(0x149EB660)
#define GLNMJDGLJAI_IOEDDBKGAHA_OFFSET UNITYSDK_OFFSET(0x149E6690)
#define GLNMJDGLJAI_JDDAMEKMCMG_OFFSET UNITYSDK_OFFSET(0x149EB9F0)
#define GLNMJDGLJAI_JFLAPGJIAHJ_OFFSET UNITYSDK_OFFSET(0x149E7F90)
#define GLNMJDGLJAI_JLGHOAGJKKP_OFFSET UNITYSDK_OFFSET(0x149E4AE0)
#define GLNMJDGLJAI_JOKNIANOGON_OFFSET UNITYSDK_OFFSET(0x149E69F0)
#define GLNMJDGLJAI_KEEBPIHLOBH_OFFSET UNITYSDK_OFFSET(0x149EBE60)
#define GLNMJDGLJAI_KKILPOGFLKO_OFFSET UNITYSDK_OFFSET(0x149E4A80)
#define GLNMJDGLJAI_KKPOCDOFJKB_OFFSET UNITYSDK_OFFSET(0x149E1850)
#define GLNMJDGLJAI_KLBPFEKMABH_OFFSET UNITYSDK_OFFSET(0x149E6E50)
#define GLNMJDGLJAI_KMGBDHIHGFD_OFFSET UNITYSDK_OFFSET(0x149E8E30)
#define GLNMJDGLJAI_KPGDNIBCNIA_OFFSET UNITYSDK_OFFSET(0x149E91F0)
#define GLNMJDGLJAI_LCGLNLHNPPF_OFFSET UNITYSDK_OFFSET(0x149E5E80)
#define GLNMJDGLJAI_LFIADHMFEMK_OFFSET UNITYSDK_OFFSET(0x149EAC40)
#define GLNMJDGLJAI_LHJAJADBEOL_OFFSET UNITYSDK_OFFSET(0x149E6DF0)
#define GLNMJDGLJAI_LILEKNHDFEO_OFFSET UNITYSDK_OFFSET(0x149E8D40)
#define GLNMJDGLJAI_LKANEODLJIM_OFFSET UNITYSDK_OFFSET(0x149E4800)
#define GLNMJDGLJAI_LONKDGIFHEC_OFFSET UNITYSDK_OFFSET(0x149E4C20)
#define GLNMJDGLJAI_LPJKABKJENH_OFFSET UNITYSDK_OFFSET(0x149E57B0)
#define GLNMJDGLJAI_MCCOOPNDOFJ_OFFSET UNITYSDK_OFFSET(0x149E6270)
#define GLNMJDGLJAI_MDBCLMBMINE_OFFSET UNITYSDK_OFFSET(0x149E5940)
#define GLNMJDGLJAI_MDDNNACPHED_OFFSET UNITYSDK_OFFSET(0x149E3E30)
#define GLNMJDGLJAI_MFKOMJHAGBF_OFFSET UNITYSDK_OFFSET(0x149EA6B0)
#define GLNMJDGLJAI_MJLAPCGNMAM_OFFSET UNITYSDK_OFFSET(0x149EC060)
#define GLNMJDGLJAI_MLEMMOIPEGA_OFFSET UNITYSDK_OFFSET(0x149EB6C0)
#define GLNMJDGLJAI_MMPGDCPFNEA_OFFSET UNITYSDK_OFFSET(0x149E4740)
#define GLNMJDGLJAI_MOHCGKMNHND_OFFSET UNITYSDK_OFFSET(0x149E5C20)
#define GLNMJDGLJAI_NAJABGOLIEC_OFFSET UNITYSDK_OFFSET(0x149E3420)
#define GLNMJDGLJAI_NAPOKNIIKPP_OFFSET UNITYSDK_OFFSET(0x149E7A10)
#define GLNMJDGLJAI_NMCDMHALHMA_OFFSET UNITYSDK_OFFSET(0x149E66F0)
#define GLNMJDGLJAI_NMILHOABKHD_OFFSET UNITYSDK_OFFSET(0x149E4E90)
#define GLNMJDGLJAI_OAGBJFPPKMI_OFFSET UNITYSDK_OFFSET(0x149E8760)
#define GLNMJDGLJAI_OFGBGAKBLHI_1_OFFSET UNITYSDK_OFFSET(0x149EBCD0)
#define GLNMJDGLJAI_OFGBGAKBLHI_OFFSET UNITYSDK_OFFSET(0x149E51F0)
#define GLNMJDGLJAI_OHGNBCKEJJJ_OFFSET UNITYSDK_OFFSET(0x149E7AC0)
#define GLNMJDGLJAI_OHPCPAPCFEE_OFFSET UNITYSDK_OFFSET(0x149E77C0)
#define GLNMJDGLJAI_OICLAHNPMCJ_OFFSET UNITYSDK_OFFSET(0x149E86A0)
#define GLNMJDGLJAI_OJFFOACMNGJ_OFFSET UNITYSDK_OFFSET(0x149E38C0)
#define GLNMJDGLJAI_OKLHPALLKED_OFFSET UNITYSDK_OFFSET(0x149E8040)
#define GLNMJDGLJAI_OLFFFJDCAFM_OFFSET UNITYSDK_OFFSET(0x149EA7F0)
#define GLNMJDGLJAI_ONCREATE_OFFSET UNITYSDK_OFFSET(0x149E12C0)
#define GLNMJDGLJAI_PAPGBGKDCLE_OFFSET UNITYSDK_OFFSET(0x149EBC70)
#define GLNMJDGLJAI_PDLDGCHDLPD_OFFSET UNITYSDK_OFFSET(0x149EB3A0)
#define GLNMJDGLJAI_PJCHEMNKCEB_OFFSET UNITYSDK_OFFSET(0x149E5340)
#define GLNMJDGLJAI_PLPDLCAFONO_OFFSET UNITYSDK_OFFSET(0x149E5A50)
#define GLNMJDGLJAI_PNNFHDPDOOJ_OFFSET UNITYSDK_OFFSET(0x149E18D0)
#define GLNMJDGLJAI_POIECNEMEAA_OFFSET UNITYSDK_OFFSET(0x149E62D0)
#define GLNMJDGLJAI_POOMDFNILAH_OFFSET UNITYSDK_OFFSET(0x149EBF40)
#define GLNMJDGLJAI_UPDATE_OFFSET UNITYSDK_OFFSET(0x149E1300)
#define GLNMJDGLJAI__CCTOR_OFFSET UNITYSDK_OFFSET(0x149E1DF0)
#define GLNMJDGLJAI__CTOR_OFFSET UNITYSDK_OFFSET(0x149E19B0)

inline static constexpr unsigned int GLNMJDGLJAI_TypeDefinitionIndex = 76796;

class GLNMJDGLJAI
{
public:
	static ::GOHCHNNDBDP** StaticGet_ODEDGHLLLJJ()
	{
		return (::GOHCHNNDBDP**)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0x31CD0);
	}
	static ::MoleMole::GameplayTag* StaticGet_IDPFIIAPNKG()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0x31CD8);
	}
	static ::System::Boolean* StaticGet__LPMMLFKMAOK_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B0);
	}
	static ::System::Boolean* StaticGet__EFINJNDANJD_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B1);
	}
	static ::System::Boolean* StaticGet__LIGNIKEDAAJ_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B2);
	}
	static ::System::Boolean* StaticGet__FPEHCBFKPMI_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B3);
	}
	static ::System::Boolean* StaticGet__LDODFKIAJDO_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B4);
	}
	static ::System::Boolean* StaticGet_IGENIOMKKEG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B5);
	}
	static ::System::Boolean* StaticGet__FKCJDPHFIBK_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B6);
	}
	static ::System::Boolean* StaticGet__KCJAFALILBI_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B7);
	}
	static ::System::Boolean* StaticGet__CBKAAMIADNL_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B8);
	}
	static ::System::Boolean* StaticGet__DJNEANBLHGI_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8B9);
	}
	static ::System::Boolean* StaticGet_FAPEODDOMCE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8BA);
	}
	static ::System::Boolean* StaticGet__IMGNMICIAHM_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8BB);
	}
	static ::System::Boolean* StaticGet__KPCGKPOOEHB_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8BC);
	}
	static ::System::Boolean* StaticGet__NIJFCGAAGKE_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8BD);
	}
	static ::System::Boolean* StaticGet__KKECKJIEBJL_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8BE);
	}
	static ::System::Boolean* StaticGet__DEBCPHJBDOC_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8BF);
	}
	static ::System::Boolean* StaticGet__BBIKKGEHJHB_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8C0);
	}
	static ::System::Boolean* StaticGet__PAPDDANDOGA_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8C1);
	}
	static ::System::Single* StaticGet_MNJOIFCEPNB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8C4);
	}
	static ::System::Boolean* StaticGet__NHFENMDMBLA_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8C8);
	}
	static ::System::Boolean* StaticGet__LGOOEKNKBPF_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8C9);
	}
	static ::System::Boolean* StaticGet__CKBJOLBKAPB_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8CA);
	}
	static ::System::Boolean* StaticGet__KIEMAMKFFHA_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8CB);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_GBNFHLOKEMA()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(GLNMJDGLJAI_TypeDefinitionIndex)->GetStaticField(0xA8D0);
	}
	// static const ::System::String* NEAKMDMFDPJ; // 0x0
	::System::Collections::Generic::List_1<::GOHCHNNDBDP*>* JEEEBHOFEBC; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::KCAGFFJBMPE*>* CBIMJOLJOOE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* KCLENBPDJGN; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* MFHEKKCOKJC; // 0x28
	::System::Collections::Generic::List_1<::GLEEAOKBGHG>* LGFHODAPNGD; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* EHICAIDCMHG; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* KEBHEFEPDFC; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* DCNMMAIHIJH; // 0x48
	::Nap::NapECS::IndexedList_2<::MoleMole::MonoEffectPluginTransform*, ::System::Object*>* JGGBDEEAKCO; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* CFAEHOHDODP; // 0x58
	::System::Collections::Generic::Queue_1<::MoleMole::Battle::Entity*>* COIHPIODHDL; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* IOKMHDDHOIF; // 0x68
	::LKEOMDKHKJE* LFKCGEBJOOK; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* GGIKIJFKGIE; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* CENLJKPBGOH; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* NBJDEBMBPAF; // 0x88
	::System::String* HLDMDLMCCAO; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* MHAHOJMLJFJ; // 0x98
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* DMEAABJALKC; // 0xA0
	::System::Boolean NDAKMPNLNCO; // 0xA8
	::System::Boolean HFIAILNNCDB; // 0xA9
	::System::Boolean EPHIBCDHMCO; // 0xAA
	::System::Boolean DIECPIBKPJN; // 0xAB
	::System::Int32 CDHKKFGIDDA; // 0xAC
	::System::Int32 MDKMEMLADPC; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single NJLILJMLPFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_UPDATE_OFFSET))(this, NJLILJMLPFF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DISPOSE_OFFSET))(this);
	}

	::System::Void FHCLONABABF(::LKEOMDKHKJE* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::LKEOMDKHKJE*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FHCLONABABF_OFFSET))(this, FFNKDGGHBPP);
	}

	::GOHCHNNDBDP* CFKFKLEOMKH(::MoleMole::Battle::Entity* JMDHBJMNBCP, ::MoleMole::Battle::Entity* AMNIHACKELI, ::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD, ::System::Boolean BJJEMEIGJJC, ::System::Boolean PDLNCLINHEA, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* DDCCBACEPJP, ::System::Action_1<::MoleMole::Battle::Entity*>* PECNAJNPEKK, ::PLNFNMOHHLI* HGDMBHDKFPK)
	{
		return ((::GOHCHNNDBDP*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::PLNFNMOHHLI*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_CFKFKLEOMKH_OFFSET))(this, JMDHBJMNBCP, AMNIHACKELI, POBADKEDFOE, OHPJHPEOFLD, BJJEMEIGJJC, PDLNCLINHEA, DDCCBACEPJP, PECNAJNPEKK, HGDMBHDKFPK);
	}

	static ::System::Boolean AODOOJCIPDJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_AODOOJCIPDJ_OFFSET))();
	}

	static ::System::Void DALBBFOJFMK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DALBBFOJFMK_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean IFKIEEFNDLB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_IFKIEEFNDLB_OFFSET))();
	}

	::System::Void NAJABGOLIEC(::System::UInt32 BKLGNCBNEGM, ::ALMMGOFACDF* OOPHMBEDLBB, ::ALMMGOFACDF* CPIPLFFKGPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ALMMGOFACDF*, ::ALMMGOFACDF*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_NAJABGOLIEC_OFFSET))(this, BKLGNCBNEGM, OOPHMBEDLBB, CPIPLFFKGPN);
	}

	static ::System::Boolean OJFFOACMNGJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OJFFOACMNGJ_OFFSET))();
	}

	::System::Void EMKACGIEJAN(::MoleMole::Battle::Entity* MJPPILKEMBG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_EMKACGIEJAN_OFFSET))(this, MJPPILKEMBG);
	}

	static ::System::Boolean DIIIGGGOMOM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DIIIGGGOMOM_OFFSET))();
	}

	static ::System::Boolean FPKKAGJCFEC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FPKKAGJCFEC_OFFSET))();
	}

	static ::System::Void FDEOGJBIGKG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FDEOGJBIGKG_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void GLEKAOGHMNC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_GLEKAOGHMNC_OFFSET))();
	}

	static ::System::Boolean CDFIMHMCJFG()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_CDFIMHMCJFG_OFFSET))();
	}

	static ::System::Void MDDNNACPHED(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* IAOJCPHIMHJ, ::System::Boolean NPKIEIDCECJ)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_MDDNNACPHED_OFFSET))(OIIHCACKLHD, IAOJCPHIMHJ, NPKIEIDCECJ);
	}

	::System::Void BOJBMKNFBFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_BOJBMKNFBFK_OFFSET))(this);
	}

	static ::System::Void MMPGDCPFNEA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_MMPGDCPFNEA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean BPKBOJFINMB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_BPKBOJFINMB_OFFSET))();
	}

	::System::Void LKANEODLJIM(::MoleMole::Battle::Entity* MJPPILKEMBG, ::System::Single JOFGIANGHMK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_LKANEODLJIM_OFFSET))(this, MJPPILKEMBG, JOFGIANGHMK);
	}

	static ::System::Void DMCJHLOAAIE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DMCJHLOAAIE_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean KKILPOGFLKO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_KKILPOGFLKO_OFFSET))();
	}

	::System::Void JLGHOAGJKKP(::System::UInt32 KMCJLOBLEKG, ::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_JLGHOAGJKKP_OFFSET))(this, KMCJLOBLEKG, POBADKEDFOE);
	}

	::System::Void LONKDGIFHEC(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_LONKDGIFHEC_OFFSET))(this, JMDHBJMNBCP);
	}

	::System::Void ICBKKGKLCIC(::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_ICBKKGKLCIC_OFFSET))(this, NGODDCIOJDP, JMDHBJMNBCP);
	}

	::System::Void OFGBGAKBLHI(::System::UInt32 EGKGLCIDEHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OFGBGAKBLHI_OFFSET))(this, EGKGLCIDEHC);
	}

	static ::System::Boolean PJCHEMNKCEB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_PJCHEMNKCEB_OFFSET))();
	}

	::System::Boolean CJFIIIJHPGJ(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_CJFIIIJHPGJ_OFFSET))(this, JMDHBJMNBCP);
	}

	static ::System::Void LPJKABKJENH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_LPJKABKJENH_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean EOGLBILKEPA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_EOGLBILKEPA_OFFSET))();
	}

	static ::System::Boolean HINIHDECMOM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_HINIHDECMOM_OFFSET))();
	}

	static ::System::Boolean MDBCLMBMINE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_MDBCLMBMINE_OFFSET))();
	}

	::System::Void PLPDLCAFONO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_PLPDLCAFONO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void MOHCGKMNHND(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_MOHCGKMNHND_OFFSET))(this, AELLPLBJELA);
	}

	static ::System::Boolean FFBPIEFBOOG()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FFBPIEFBOOG_OFFSET))();
	}

	static ::System::Boolean GEPBJAFGFHC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_GEPBJAFGFHC_OFFSET))();
	}

	::System::Void EOBHJMLOMOB(::MoleMole::EntityHandle PHHDHIBOCKA, ::System::Boolean FMDGFHEIODJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_EOBHJMLOMOB_OFFSET))(this, PHHDHIBOCKA, FMDGFHEIODJ);
	}

	static ::System::Boolean MCCOOPNDOFJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_MCCOOPNDOFJ_OFFSET))();
	}

	static ::System::Boolean POIECNEMEAA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_POIECNEMEAA_OFFSET))();
	}

	::System::Void GLAAKPGEOFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_GLAAKPGEOFI_OFFSET))(this);
	}

	static ::System::Boolean IOEDDBKGAHA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_IOEDDBKGAHA_OFFSET))();
	}

	::System::Void NMCDMHALHMA(::MoleMole::EntityHandle HPADNAEINPK, ::System::Boolean JKBLDFBGBPK, ::System::Boolean KICLNPMPOEI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_NMCDMHALHMA_OFFSET))(this, HPADNAEINPK, JKBLDFBGBPK, KICLNPMPOEI);
	}

	::System::Void JOKNIANOGON(::System::UInt32 KMCJLOBLEKG, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_JOKNIANOGON_OFFSET))(this, KMCJLOBLEKG, BKLGNCBNEGM);
	}

	static ::System::Boolean GOHIFHLALOD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_GOHIFHLALOD_OFFSET))();
	}

	static ::System::Void LHJAJADBEOL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_LHJAJADBEOL_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void KLBPFEKMABH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_KLBPFEKMABH_OFFSET))(this);
	}

	static ::System::Void BEBHGEBMMOL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_BEBHGEBMMOL_OFFSET))(EGEGIMGMJHN);
	}

	::System::Int32 IJPHOOOBCOF(::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_IJPHOOOBCOF_OFFSET))(this, NGODDCIOJDP);
	}

	static ::System::Boolean AEAHBHHMHLA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_AEAHBHHMHLA_OFFSET))();
	}

	::System::Void KKPOCDOFJKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_KKPOCDOFJKB_OFFSET))(this);
	}

	::System::Void NAPOKNIIKPP(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_NAPOKNIIKPP_OFFSET))(this, FFNKDGGHBPP);
	}

	static ::System::Void OHGNBCKEJJJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OHGNBCKEJJJ_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void CNOGELAHPMD(::System::UInt32 KMCJLOBLEKG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_CNOGELAHPMD_OFFSET))(this, KMCJLOBLEKG);
	}

	::System::Void JFLAPGJIAHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_JFLAPGJIAHJ_OFFSET))(this);
	}

	static ::System::Boolean BABDIBOGANH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_BABDIBOGANH_OFFSET))();
	}

	static ::System::Void GKDCJMMCDOF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_GKDCJMMCDOF_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void OKLHPALLKED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OKLHPALLKED_OFFSET))(this);
	}

	::System::Void PNNFHDPDOOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_PNNFHDPDOOJ_OFFSET))(this);
	}

	::System::Void AONIBJBNGJO(::MoleMole::MonoEffectPluginTransform* CDBMHJGCCEB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_AONIBJBNGJO_OFFSET))(this, CDBMHJGCCEB);
	}

	static ::System::Boolean FBALHHGOHCC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FBALHHGOHCC_OFFSET))();
	}

	static ::System::Void OICLAHNPMCJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OICLAHNPMCJ_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void ICBKKGKLCIC_1(::System::UInt32 EGKGLCIDEHC, ::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_ICBKKGKLCIC_1_OFFSET))(this, EGKGLCIDEHC, JMDHBJMNBCP);
	}

	static ::System::Void GOANELDCICD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_GOANELDCICD_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void OAGBJFPPKMI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OAGBJFPPKMI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void GJCHELMIIDI(::System::String* AELLPLBJELA, ::MoleMole::EntityHandle AMNIHACKELI, ::System::Boolean ENBLDLNAEKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_GJCHELMIIDI_OFFSET))(this, AELLPLBJELA, AMNIHACKELI, ENBLDLNAEKM);
	}

	::System::Void LILEKNHDFEO(::MoleMole::MonoEffectPluginTransform* CDBMHJGCCEB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_LILEKNHDFEO_OFFSET))(this, CDBMHJGCCEB);
	}

	static ::System::Boolean ENGIGDOGOHP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_ENGIGDOGOHP_OFFSET))();
	}

	static ::System::Boolean KMGBDHIHGFD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_KMGBDHIHGFD_OFFSET))();
	}

	static ::System::Void EMOIEIKIJEA(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* IAOJCPHIMHJ, ::System::Boolean NPKIEIDCECJ)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_EMOIEIKIJEA_OFFSET))(OIIHCACKLHD, IAOJCPHIMHJ, NPKIEIDCECJ);
	}

	static ::System::Boolean DMJPJOEPFCA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DMJPJOEPFCA_OFFSET))();
	}

	static ::System::Boolean KPGDNIBCNIA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_KPGDNIBCNIA_OFFSET))();
	}

	::System::Void ILOPFPEJCDK(::GOHCHNNDBDP* JLDIAODBFEF, ::System::Boolean EGFGKCOMDKM)
	{
		return ((::System::Void(*)(::PVOID, ::GOHCHNNDBDP*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_ILOPFPEJCDK_OFFSET))(this, JLDIAODBFEF, EGFGKCOMDKM);
	}

	static ::System::Boolean LFIADHMFEMK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_LFIADHMFEMK_OFFSET))();
	}

	::System::Boolean DJBLGGFEKJM(::System::String* LCPALAHMDML, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*& OAJILAOAOLB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DJBLGGFEKJM_OFFSET))(this, LCPALAHMDML, OAJILAOAOLB);
	}

	::System::Void DKAPLIBIIGL(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DKAPLIBIIGL_OFFSET))(this, JMDHBJMNBCP);
	}

	::System::Void LCGLNLHNPPF(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_LCGLNLHNPPF_OFFSET))(this, JMDHBJMNBCP);
	}

	static ::System::Void PDLDGCHDLPD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_PDLDGCHDLPD_OFFSET))(EGEGIMGMJHN);
	}

	::System::Boolean CDAPPMFMMHA(::System::UInt32 EGKGLCIDEHC, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*& OAJILAOAOLB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_CDAPPMFMMHA_OFFSET))(this, EGKGLCIDEHC, OAJILAOAOLB);
	}

	::System::Void HOLNEGHODAG(::System::UInt32 INDIKIBIBIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_HOLNEGHODAG_OFFSET))(this, INDIKIBIBIC);
	}

	::System::Void IFIOKMKKFEP(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_IFIOKMKKFEP_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void IMDDCEKKLHP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_IMDDCEKKLHP_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void OLFFFJDCAFM(::MoleMole::Battle::Entity* JMDHBJMNBCP, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::String* AELLPLBJELA, ::System::Boolean BJJEMEIGJJC, ::System::Int32 MLKLCEKJGPE, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Int32, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OLFFFJDCAFM_OFFSET))(JMDHBJMNBCP, AMNIHACKELI, AELLPLBJELA, BJJEMEIGJJC, MLKLCEKJGPE, OHPJHPEOFLD);
	}

	::System::Void JDDAMEKMCMG(::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_JDDAMEKMCMG_OFFSET))(this, AELLPLBJELA, PILELGPBCLL);
	}

	static ::System::Void DJJALECKFPN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DJJALECKFPN_OFFSET))(EGEGIMGMJHN);
	}

	static ::UnityEngine::GameObject* MFKOMJHAGBF(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_MFKOMJHAGBF_OFFSET))(OIIHCACKLHD, JNLBPMKIFNK);
	}

	::System::Void FJLELLBKFLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FJLELLBKFLA_OFFSET))(this);
	}

	static ::System::Boolean PAPGBGKDCLE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_PAPGBGKDCLE_OFFSET))();
	}

	::System::Void OFGBGAKBLHI_1(::System::UInt32 EGKGLCIDEHC, ::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OFGBGAKBLHI_1_OFFSET))(this, EGKGLCIDEHC, JMDHBJMNBCP);
	}

	static ::System::Void FPJPFAAKKCE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FPJPFAAKKCE_OFFSET))(EGEGIMGMJHN);
	}

	::System::Boolean KEEBPIHLOBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_KEEBPIHLOBH_OFFSET))(this);
	}

	::System::Boolean ABGFAFPEICH(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_ABGFAFPEICH_OFFSET))(this, MOBNMDEDJIP);
	}

	static ::System::Boolean IIPCDLDPLDI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_IIPCDLDPLDI_OFFSET))();
	}

	static ::System::Void POOMDFNILAH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_POOMDFNILAH_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void MLEMMOIPEGA(::System::String* AELLPLBJELA, ::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_MLEMMOIPEGA_OFFSET))(this, AELLPLBJELA, JMDHBJMNBCP);
	}

	static ::System::Void BKADFCLBICC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_BKADFCLBICC_OFFSET))(EGEGIMGMJHN);
	}

	::System::Boolean NMILHOABKHD(::MoleMole::Battle::Entity* JMEJELKNNCE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_NMILHOABKHD_OFFSET))(this, JMEJELKNNCE);
	}

	static ::System::Void EFLLHKPGBJC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_EFLLHKPGBJC_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void MJLAPCGNMAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_MJLAPCGNMAM_OFFSET))(this);
	}

	::System::Void FBFEOFJPDOB(::MoleMole::Battle::Entity* JMDHBJMNBCP, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FBFEOFJPDOB_OFFSET))(this, JMDHBJMNBCP, AELLPLBJELA);
	}

	::System::Void IJMJEKJCLGI(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_IJMJEKJCLGI_OFFSET))(this, JMDHBJMNBCP);
	}

	static ::System::Boolean BGGGGHGIBOD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_BGGGGHGIBOD_OFFSET))();
	}

	static ::System::Boolean DGANLFNHIGD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DGANLFNHIGD_OFFSET))();
	}

	static ::System::Void EONLKHBAMMP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_EONLKHBAMMP_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void OHPCPAPCFEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_OHPCPAPCFEE_OFFSET))(this);
	}

	static ::System::Boolean FEPMNINDJEF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_FEPMNINDJEF_OFFSET))();
	}

	static ::System::Boolean ACJAJDBHJEM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_ACJAJDBHJEM_OFFSET))();
	}

	static ::System::Void IBFNOAIAOGN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_IBFNOAIAOGN_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean APNMKHJNJEE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLNMJDGLJAI_APNMKHJNJEE_OFFSET))();
	}

	::System::Void DLCAIDMHOFL(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLNMJDGLJAI_DLCAIDMHOFL_OFFSET))(this, JMDHBJMNBCP);
	}
};
