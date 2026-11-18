#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/PKEIFNDNBPK.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/Foundation/Variable_1.h"

class HKIEGMKBDMH;
class JMNOLMMPKNL;
class PAEHHFFGHEA;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ForwardRenderer; }

#define HMAEHPMINOH_AACLADEFICD_OFFSET UNITYSDK_OFFSET(0x17E68770)
#define HMAEHPMINOH_AHBFAEPBDAL_OFFSET UNITYSDK_OFFSET(0xE9F5060)
#define HMAEHPMINOH_AHDAFACOLJB_OFFSET UNITYSDK_OFFSET(0x17E739F0)
#define HMAEHPMINOH_AIIHKEIPBIB_1_OFFSET UNITYSDK_OFFSET(0xE9F5980)
#define HMAEHPMINOH_AIIHKEIPBIB_OFFSET UNITYSDK_OFFSET(0xE9F26D0)
#define HMAEHPMINOH_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x17E749A0)
#define HMAEHPMINOH_BAFHJNOJDMH_OFFSET UNITYSDK_OFFSET(0x17E656C0)
#define HMAEHPMINOH_BCFEDEMJHLE_OFFSET UNITYSDK_OFFSET(0x17E70560)
#define HMAEHPMINOH_BFAHHLGNFGE_OFFSET UNITYSDK_OFFSET(0x17E6A970)
#define HMAEHPMINOH_BGJELFNCLII_OFFSET UNITYSDK_OFFSET(0xE9EF430)
#define HMAEHPMINOH_BKNJKALHEDJ_OFFSET UNITYSDK_OFFSET(0xE9F10B0)
#define HMAEHPMINOH_BNFKPPIDALF_OFFSET UNITYSDK_OFFSET(0x17E674D0)
#define HMAEHPMINOH_CDAONOPBGIO_OFFSET UNITYSDK_OFFSET(0xE9F1D40)
#define HMAEHPMINOH_CFKHJPGDPEE_OFFSET UNITYSDK_OFFSET(0xE9F2BD0)
#define HMAEHPMINOH_CKIHHFFGDJN_OFFSET UNITYSDK_OFFSET(0x17E60FC0)
#define HMAEHPMINOH_CKJFHDBPMJJ_OFFSET UNITYSDK_OFFSET(0xE9F9190)
#define HMAEHPMINOH_CLJCCMLMMBG_OFFSET UNITYSDK_OFFSET(0x17E72160)
#define HMAEHPMINOH_COIOBBJKKOO_OFFSET UNITYSDK_OFFSET(0xE9F9AB0)
#define HMAEHPMINOH_CPEAOLCDJOK_OFFSET UNITYSDK_OFFSET(0xE9EEB10)
#define HMAEHPMINOH_CPEBCDLFJCH_OFFSET UNITYSDK_OFFSET(0x17E63340)
#define HMAEHPMINOH_DAILCECPHAO_OFFSET UNITYSDK_OFFSET(0x17E63DB0)
#define HMAEHPMINOH_DDBANKBMBLI_1_OFFSET UNITYSDK_OFFSET(0xE9F0670)
#define HMAEHPMINOH_DDBANKBMBLI_OFFSET UNITYSDK_OFFSET(0x17E77870)
#define HMAEHPMINOH_DEPOEEFCBFL_OFFSET UNITYSDK_OFFSET(0xE9FACF0)
#define HMAEHPMINOH_DHMOBAOABHE_OFFSET UNITYSDK_OFFSET(0xE9F4740)
#define HMAEHPMINOH_DIOOHGLGBIF_OFFSET UNITYSDK_OFFSET(0x17E74B50)
#define HMAEHPMINOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E603B0)
#define HMAEHPMINOH_DKAHAPOBJIL_OFFSET UNITYSDK_OFFSET(0x17E76A30)
#define HMAEHPMINOH_DMIEGNHGKIL_OFFSET UNITYSDK_OFFSET(0x17E61C30)
#define HMAEHPMINOH_EAAHJONOIKI_OFFSET UNITYSDK_OFFSET(0x17E6E470)
#define HMAEHPMINOH_EBFACACPHOG_OFFSET UNITYSDK_OFFSET(0x17E65A80)
#define HMAEHPMINOH_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x17E77720)
#define HMAEHPMINOH_EDNLPCEIFJG_OFFSET UNITYSDK_OFFSET(0xE9F7F40)
#define HMAEHPMINOH_EEHBFBNFCMA_OFFSET UNITYSDK_OFFSET(0x17E66BB0)
#define HMAEHPMINOH_ELLBBNOKOLB_OFFSET UNITYSDK_OFFSET(0x17E64E20)
#define HMAEHPMINOH_ELLGMMEIDLF_OFFSET UNITYSDK_OFFSET(0x17E63490)
#define HMAEHPMINOH_ELOOOHGHEGP_OFFSET UNITYSDK_OFFSET(0x17E6C4D0)
#define HMAEHPMINOH_EMCNLDEEJMN_OFFSET UNITYSDK_OFFSET(0x17E66290)
#define HMAEHPMINOH_EMENFAGHCDO_OFFSET UNITYSDK_OFFSET(0x17E69A30)
#define HMAEHPMINOH_EMJPALNJFOF_OFFSET UNITYSDK_OFFSET(0xE9EE080)
#define HMAEHPMINOH_ENPIHMJBIHP_OFFSET UNITYSDK_OFFSET(0xE9FBDC0)
#define HMAEHPMINOH_EONNLHLLHHI_OFFSET UNITYSDK_OFFSET(0x17E74900)
#define HMAEHPMINOH_FDIPIBALKFD_OFFSET UNITYSDK_OFFSET(0xE9F8870)
#define HMAEHPMINOH_FIIPHLBCDMA_OFFSET UNITYSDK_OFFSET(0x17E654C0)
#define HMAEHPMINOH_FJCALAADBBE_OFFSET UNITYSDK_OFFSET(0x17E64090)
#define HMAEHPMINOH_FLJNMEBKBFC_OFFSET UNITYSDK_OFFSET(0x17E726A0)
#define HMAEHPMINOH_FNBOPIPBICJ_OFFSET UNITYSDK_OFFSET(0xE9FB1B0)
#define HMAEHPMINOH_GENILCJAIHH_OFFSET UNITYSDK_OFFSET(0x17E70EE0)
#define HMAEHPMINOH_GFOPBOALAEE_OFFSET UNITYSDK_OFFSET(0x17E75690)
#define HMAEHPMINOH_GIKEHPBELHD_OFFSET UNITYSDK_OFFSET(0xE9F6CA0)
#define HMAEHPMINOH_GMGMACGHNOF_OFFSET UNITYSDK_OFFSET(0x17E726E0)
#define HMAEHPMINOH_GPBMCEDOIOE_OFFSET UNITYSDK_OFFSET(0x17E631A0)
#define HMAEHPMINOH_GPMKLDJKFIF_OFFSET UNITYSDK_OFFSET(0x17E75510)
#define HMAEHPMINOH_HCIGPHDOOBH_OFFSET UNITYSDK_OFFSET(0x17E67DF0)
#define HMAEHPMINOH_HFHKMGHGGJL_OFFSET UNITYSDK_OFFSET(0x17E66A50)
#define HMAEHPMINOH_HIOABJCNCHN_OFFSET UNITYSDK_OFFSET(0xE9ED760)
#define HMAEHPMINOH_HOOMDCIKMKP_OFFSET UNITYSDK_OFFSET(0x17E75470)
#define HMAEHPMINOH_IBILMDCMLLE_OFFSET UNITYSDK_OFFSET(0x17E651E0)
#define HMAEHPMINOH_IDOOGEMAGGO_OFFSET UNITYSDK_OFFSET(0xE9F6380)
#define HMAEHPMINOH_IEIMJBMAAFN_OFFSET UNITYSDK_OFFSET(0x17E69B00)
#define HMAEHPMINOH_IEJHHKCJKJH_OFFSET UNITYSDK_OFFSET(0x17E6E4C0)
#define HMAEHPMINOH_IFIKJIMLPHE_OFFSET UNITYSDK_OFFSET(0x17E63480)
#define HMAEHPMINOH_IGDCCNKNKHD_OFFSET UNITYSDK_OFFSET(0x17E76110)
#define HMAEHPMINOH_IGFDCGFONMF_OFFSET UNITYSDK_OFFSET(0x17E65DE0)
#define HMAEHPMINOH_IHDBEEPILGH_OFFSET UNITYSDK_OFFSET(0x17E70F20)
#define HMAEHPMINOH_IKBAMBHCLFM_OFFSET UNITYSDK_OFFSET(0xE9F0E00)
#define HMAEHPMINOH_IMNNALBDNIO_OFFSET UNITYSDK_OFFSET(0x17E6BBB0)
#define HMAEHPMINOH_IOACMEHNMHJ_OFFSET UNITYSDK_OFFSET(0xE9F5A60)
#define HMAEHPMINOH_JBIJKONCLCK_OFFSET UNITYSDK_OFFSET(0xE9EFD50)
#define HMAEHPMINOH_JBPKMAPBFPF_OFFSET UNITYSDK_OFFSET(0x17E606A0)
#define HMAEHPMINOH_JCADANGJAFJ_OFFSET UNITYSDK_OFFSET(0x17E6D990)
#define HMAEHPMINOH_JEDBLHEJKDI_OFFSET UNITYSDK_OFFSET(0x17E62550)
#define HMAEHPMINOH_JHOJJECIIFL_OFFSET UNITYSDK_OFFSET(0x17E699B0)
#define HMAEHPMINOH_JMGLFBPELLM_OFFSET UNITYSDK_OFFSET(0x17E6A430)
#define HMAEHPMINOH_JNKMMMANHNI_OFFSET UNITYSDK_OFFSET(0x17E6B290)
#define HMAEHPMINOH_JOEACHMLLEB_OFFSET UNITYSDK_OFFSET(0x17E61150)
#define HMAEHPMINOH_JPPOLGLDDAE_OFFSET UNITYSDK_OFFSET(0xE9F7F50)
#define HMAEHPMINOH_KIHBOCAEDNF_OFFSET UNITYSDK_OFFSET(0x17E60070)
#define HMAEHPMINOH_KOJNPHHCGBB_OFFSET UNITYSDK_OFFSET(0x17E6CDF0)
#define HMAEHPMINOH_KPKDIDNKHKO_OFFSET UNITYSDK_OFFSET(0x17E66A40)
#define HMAEHPMINOH_LLLPFCHAOBM_OFFSET UNITYSDK_OFFSET(0x17E757F0)
#define HMAEHPMINOH_LNMKBLAIDNH_OFFSET UNITYSDK_OFFSET(0x17E72370)
#define HMAEHPMINOH_LOOMLNEJFPK_OFFSET UNITYSDK_OFFSET(0xE9F1B30)
#define HMAEHPMINOH_MCEBGBNCBIF_OFFSET UNITYSDK_OFFSET(0xE9F1DB0)
#define HMAEHPMINOH_MHBCGDIPIPK_OFFSET UNITYSDK_OFFSET(0xE9F75C0)
#define HMAEHPMINOH_MPGIHOHKLAB_1_OFFSET UNITYSDK_OFFSET(0x17E74720)
#define HMAEHPMINOH_MPGIHOHKLAB_OFFSET UNITYSDK_OFFSET(0x17E61A70)
#define HMAEHPMINOH_NFJGLMHOMFE_OFFSET UNITYSDK_OFFSET(0x17E70340)
#define HMAEHPMINOH_NGFFMGLGCBG_OFFSET UNITYSDK_OFFSET(0xE9F0850)
#define HMAEHPMINOH_NGGCIBEIPCO_OFFSET UNITYSDK_OFFSET(0xE9FB250)
#define HMAEHPMINOH_NLFMMAFPBKJ_OFFSET UNITYSDK_OFFSET(0x17E62E70)
#define HMAEHPMINOH_NNOBFCBBGLG_OFFSET UNITYSDK_OFFSET(0x17E73BE0)
#define HMAEHPMINOH_NPGMNBJKPDM_OFFSET UNITYSDK_OFFSET(0xE9FA3D0)
#define HMAEHPMINOH_OIEMMOBPEED_OFFSET UNITYSDK_OFFSET(0x17E6D070)
#define HMAEHPMINOH_OKIKANMEGJM_OFFSET UNITYSDK_OFFSET(0x17E69B10)
#define HMAEHPMINOH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xE9FAF90)
#define HMAEHPMINOH_OKMPCINHKPN_OFFSET UNITYSDK_OFFSET(0x17E6EDE0)
#define HMAEHPMINOH_ONCREATE_OFFSET UNITYSDK_OFFSET(0x17E5FF20)
#define HMAEHPMINOH_ONSTART_OFFSET UNITYSDK_OFFSET(0x17E60250)
#define HMAEHPMINOH_OONELLLPFIA_OFFSET UNITYSDK_OFFSET(0xE9F19D0)
#define HMAEHPMINOH_OOPNDMOMPCC_OFFSET UNITYSDK_OFFSET(0xE9F3E20)
#define HMAEHPMINOH_OPAEHOCKEIM_OFFSET UNITYSDK_OFFSET(0x17E69AF0)
#define HMAEHPMINOH_PBDMOCMBCGO_OFFSET UNITYSDK_OFFSET(0x17E64500)
#define HMAEHPMINOH_PEGKMHKGDAL_OFFSET UNITYSDK_OFFSET(0x17E69090)
#define HMAEHPMINOH_PFGONJJLDBP_OFFSET UNITYSDK_OFFSET(0x17E71840)
#define HMAEHPMINOH_PHEMEADHKNP_OFFSET UNITYSDK_OFFSET(0x17E730D0)
#define HMAEHPMINOH_PJFHINBHOEI_OFFSET UNITYSDK_OFFSET(0xE9EE1F0)
#define HMAEHPMINOH_PMIECIFGNPK_OFFSET UNITYSDK_OFFSET(0xE9FB810)
#define HMAEHPMINOH_POJKCNIGHMH_OFFSET UNITYSDK_OFFSET(0x17E74360)
#define HMAEHPMINOH_PPHCBCOLFKO_OFFSET UNITYSDK_OFFSET(0x17E6E2B0)
#define HMAEHPMINOH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E60400)
#define HMAEHPMINOH__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5FBD0)

inline static constexpr unsigned int HMAEHPMINOH_TypeDefinitionIndex = 79155;

class HMAEHPMINOH
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::System::String*>** StaticGet_PJFANEJMJJB()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HMAEHPMINOH_TypeDefinitionIndex)->GetStaticField(0x464F0);
	}
	static ::System::Boolean* StaticGet_GIGCNLBDAHM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HMAEHPMINOH_TypeDefinitionIndex)->GetStaticField(0x10370);
	}
	static ::System::Boolean* StaticGet_BCIDDMMFGPL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HMAEHPMINOH_TypeDefinitionIndex)->GetStaticField(0x10371);
	}
	::System::Collections::Generic::List_1<::System::Int32>* MHKIKHMFJOM; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>* OAMLBALIBGF; // 0x18
	::System::Collections::Generic::List_1<::HKIEGMKBDMH*>* HLLKAHILJCB; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PAEHHFFGHEA*>* OPBKKGFFCLB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* IFJPLGHALOC; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*>* DKOJMPECKGA; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Int32>*>* NHCACJIBKEA; // 0x40
	::System::Collections::Generic::HashSet_1<::System::String*>* GEDBCOKEJKD; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* CFNGJCBELDO; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* JPIIADFKJHJ; // 0x58
	::System::Action_1<::System::Boolean>* GAPNNNLACAC; // 0x60
	::System::Int32 BDBLNOHHFAO; // 0x68
	::System::Boolean MFINNGABGFM; // 0x6C
	::System::Boolean _DPPOMACJOJF_k__BackingField; // 0x6D
	::System::Boolean ECCBCDGPBCK; // 0x6E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMAEHPMINOH__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DISPOSE_OFFSET))(this);
	}

	::System::Boolean JBPKMAPBFPF(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JBPKMAPBFPF_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean JOEACHMLLEB(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JOEACHMLLEB_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean MPGIHOHKLAB(::System::Type* OBNIAHNMHPF, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32&))((::PBYTE)hIl2Cpp + HMAEHPMINOH_MPGIHOHKLAB_OFFSET))(this, OBNIAHNMHPF, ABHBKFJKINO);
	}

	::System::Boolean DMIEGNHGKIL(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DMIEGNHGKIL_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean JEDBLHEJKDI(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JEDBLHEJKDI_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void NLFMMAFPBKJ(::MoleMole::Config::ShaderCustomType ABIEPJBODMH, ::System::String* MCOHLHMKLIP, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ShaderCustomType, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_NLFMMAFPBKJ_OFFSET))(this, ABIEPJBODMH, MCOHLHMKLIP, NGODDCIOJDP);
	}

	::System::Void GPBMCEDOIOE(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMAEHPMINOH_GPBMCEDOIOE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CPEBCDLFJCH(::System::UInt32 EGKGLCIDEHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMAEHPMINOH_CPEBCDLFJCH_OFFSET))(this, EGKGLCIDEHC);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>* IFIKJIMLPHE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IFIKJIMLPHE_OFFSET))(this);
	}

	::System::Boolean ELLGMMEIDLF(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_ELLGMMEIDLF_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean DAILCECPHAO(::System::Type* OBNIAHNMHPF, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Rendering::Volume*, ::System::Int32&))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DAILCECPHAO_OFFSET))(this, OBNIAHNMHPF, PHLFMCCNEGD, ABHBKFJKINO);
	}

	::System::Void FJCALAADBBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_FJCALAADBBE_OFFSET))(this);
	}

	::System::Boolean PBDMOCMBCGO(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_PBDMOCMBCGO_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void ELLBBNOKOLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_ELLBBNOKOLB_OFFSET))(this);
	}

	::System::Void IBILMDCMLLE(::HKIEGMKBDMH* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::HKIEGMKBDMH*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IBILMDCMLLE_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void FIIPHLBCDMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_FIIPHLBCDMA_OFFSET))(this);
	}

	::System::Void EBFACACPHOG(::System::Boolean CDHNACGKAGI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMAEHPMINOH_EBFACACPHOG_OFFSET))(this, CDHNACGKAGI);
	}

	::System::Void IGFDCGFONMF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IGFDCGFONMF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean KPKDIDNKHKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_KPKDIDNKHKO_OFFSET))(this);
	}

	::System::Void HFHKMGHGGJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_HFHKMGHGGJL_OFFSET))(this);
	}

	::System::Boolean EEHBFBNFCMA(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_EEHBFBNFCMA_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void BAFHJNOJDMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_BAFHJNOJDMH_OFFSET))(this);
	}

	::System::Boolean BNFKPPIDALF(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_BNFKPPIDALF_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean HCIGPHDOOBH(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_HCIGPHDOOBH_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean AACLADEFICD(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_AACLADEFICD_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean PEGKMHKGDAL(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_PEGKMHKGDAL_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void JHOJJECIIFL(::System::Boolean GFMEIOHBILD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JHOJJECIIFL_OFFSET))(this, GFMEIOHBILD);
	}

	::System::Boolean OPAEHOCKEIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_OPAEHOCKEIM_OFFSET))(this);
	}

	::System::Boolean CKIHHFFGDJN(::System::Type* OBNIAHNMHPF, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32&))((::PBYTE)hIl2Cpp + HMAEHPMINOH_CKIHHFFGDJN_OFFSET))(this, OBNIAHNMHPF, ABHBKFJKINO);
	}

	::System::Collections::Generic::List_1<::HKIEGMKBDMH*>* IEIMJBMAAFN()
	{
		return ((::System::Collections::Generic::List_1<::HKIEGMKBDMH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IEIMJBMAAFN_OFFSET))(this);
	}

	::System::Boolean OKIKANMEGJM(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_OKIKANMEGJM_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void JMGLFBPELLM(::System::String* FDKHOKEBIKP, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JMGLFBPELLM_OFFSET))(this, FDKHOKEBIKP, NGODDCIOJDP);
	}

	::System::Boolean BFAHHLGNFGE(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_BFAHHLGNFGE_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean JNKMMMANHNI(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JNKMMMANHNI_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean IMNNALBDNIO(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IMNNALBDNIO_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean ELOOOHGHEGP(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_ELOOOHGHEGP_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void KOJNPHHCGBB(::MoleMole::Config::ShaderCustomType ABIEPJBODMH, ::System::String* MCOHLHMKLIP, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ShaderCustomType, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_KOJNPHHCGBB_OFFSET))(this, ABIEPJBODMH, MCOHLHMKLIP, NGODDCIOJDP);
	}

	::System::Boolean OIEMMOBPEED(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_OIEMMOBPEED_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean JCADANGJAFJ(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JCADANGJAFJ_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void EMENFAGHCDO(::System::Boolean GFMEIOHBILD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMAEHPMINOH_EMENFAGHCDO_OFFSET))(this, GFMEIOHBILD);
	}

	::System::Void PPHCBCOLFKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_PPHCBCOLFKO_OFFSET))(this);
	}

	::System::Void EAAHJONOIKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_EAAHJONOIKI_OFFSET))(this);
	}

	::System::Boolean IEJHHKCJKJH(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IEJHHKCJKJH_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void OKMPCINHKPN(::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_OKMPCINHKPN_OFFSET))(this, IHIMDLELPAG, PHLFMCCNEGD);
	}

	::System::Void NFJGLMHOMFE(::System::Int32 ABHBKFJKINO, ::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HMAEHPMINOH_NFJGLMHOMFE_OFFSET))(this, ABHBKFJKINO, DEBGKPLOPCG);
	}

	::System::Boolean BCFEDEMJHLE(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_BCFEDEMJHLE_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void GENILCJAIHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_GENILCJAIHH_OFFSET))(this);
	}

	::System::Boolean IHDBEEPILGH(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IHDBEEPILGH_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean PFGONJJLDBP(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_PFGONJJLDBP_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void CLJCCMLMMBG(::System::UInt32 EGKGLCIDEHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMAEHPMINOH_CLJCCMLMMBG_OFFSET))(this, EGKGLCIDEHC);
	}

	::UnityEngine::Rendering::Universal::ForwardRenderer* LNMKBLAIDNH()
	{
		return ((::UnityEngine::Rendering::Universal::ForwardRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_LNMKBLAIDNH_OFFSET))(this);
	}

	static ::System::Void FLJNMEBKBFC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMAEHPMINOH_FLJNMEBKBFC_OFFSET))();
	}

	::System::Void GMGMACGHNOF(::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_GMGMACGHNOF_OFFSET))(this, IHIMDLELPAG, PHLFMCCNEGD);
	}

	::System::Boolean PHEMEADHKNP(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_PHEMEADHKNP_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	static ::System::Void AHDAFACOLJB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMAEHPMINOH_AHDAFACOLJB_OFFSET))();
	}

	::System::Void POJKCNIGHMH(::System::String* FDKHOKEBIKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_POJKCNIGHMH_OFFSET))(this, FDKHOKEBIKP);
	}

	::System::Boolean MPGIHOHKLAB_1(::System::Type* OBNIAHNMHPF, ::System::Int32 GBIEHLHBKLG, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HMAEHPMINOH_MPGIHOHKLAB_1_OFFSET))(this, OBNIAHNMHPF, GBIEHLHBKLG, ABHBKFJKINO);
	}

	static ::System::Boolean EONNLHLLHHI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMAEHPMINOH_EONNLHLLHHI_OFFSET))();
	}

	::System::Void APAGIJMHEAK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean DIOOHGLGBIF(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DIOOHGLGBIF_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	static ::System::Void NNOBFCBBGLG(::System::String* APJPDNFFOIJ)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_NNOBFCBBGLG_OFFSET))(APJPDNFFOIJ);
	}

	::System::Void HOOMDCIKMKP(::System::String* AELLPLBJELA, ::System::Boolean OFMNAICAALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMAEHPMINOH_HOOMDCIKMKP_OFFSET))(this, AELLPLBJELA, OFMNAICAALJ);
	}

	::System::Void GPMKLDJKFIF(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_GPMKLDJKFIF_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void GFOPBOALAEE(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMAEHPMINOH_GFOPBOALAEE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean LLLPFCHAOBM(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_LLLPFCHAOBM_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean IGDCCNKNKHD(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IGDCCNKNKHD_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void DKAHAPOBJIL(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* HPDHICHHKFJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DKAHAPOBJIL_OFFSET))(this, HPDHICHHKFJ);
	}

	::System::Void KIHBOCAEDNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_KIHBOCAEDNF_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN(::System::String* AELLPLBJELA, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMAEHPMINOH_ECEBDPJEKNN_OFFSET))(this, AELLPLBJELA, EGEGIMGMJHN);
	}

	::System::Void EMCNLDEEJMN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMAEHPMINOH_EMCNLDEEJMN_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void DDBANKBMBLI(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* HPDHICHHKFJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DDBANKBMBLI_OFFSET))(this, HPDHICHHKFJ);
	}

	::System::Boolean HIOABJCNCHN(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_HIOABJCNCHN_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean PJFHINBHOEI(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_PJFHINBHOEI_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean CPEAOLCDJOK(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_CPEAOLCDJOK_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean BGJELFNCLII(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_BGJELFNCLII_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean JBIJKONCLCK(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JBIJKONCLCK_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void DDBANKBMBLI_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DDBANKBMBLI_1_OFFSET))(this);
	}

	::System::Void NGFFMGLGCBG(::UnityEngine::Rendering::Volume* PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_NGFFMGLGCBG_OFFSET))(this, PHLFMCCNEGD);
	}

	::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* IKBAMBHCLFM(::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IKBAMBHCLFM_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean BKNJKALHEDJ(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_BKNJKALHEDJ_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void OONELLLPFIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_OONELLLPFIA_OFFSET))(this);
	}

	::System::Void LOOMLNEJFPK(::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_LOOMLNEJFPK_OFFSET))(this, IHIMDLELPAG, NGODDCIOJDP);
	}

	::System::Boolean MCEBGBNCBIF(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_MCEBGBNCBIF_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void AIIHKEIPBIB(::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Boolean HLNFJAOFLOP, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::System::Boolean, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_AIIHKEIPBIB_OFFSET))(this, IHIMDLELPAG, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, HLNFJAOFLOP, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean OOPNDMOMPCC(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_OOPNDMOMPCC_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean DHMOBAOABHE(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DHMOBAOABHE_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean AHBFAEPBDAL(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_AHBFAEPBDAL_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void AIIHKEIPBIB_1(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_AIIHKEIPBIB_1_OFFSET))(this, PHLFMCCNEGD, IHIMDLELPAG, MCOHLHMKLIP);
	}

	::System::Boolean IOACMEHNMHJ(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IOACMEHNMHJ_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean IDOOGEMAGGO(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_IDOOGEMAGGO_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean GIKEHPBELHD(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_GIKEHPBELHD_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean MHBCGDIPIPK(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_MHBCGDIPIPK_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void EDNLPCEIFJG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMAEHPMINOH_EDNLPCEIFJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CFKHJPGDPEE(::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_CFKHJPGDPEE_OFFSET))(this, IHIMDLELPAG, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Boolean NPGMNBJKPDM(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_NPGMNBJKPDM_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void DEPOEEFCBFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_DEPOEEFCBFL_OFFSET))(this);
	}

	::System::Boolean COIOBBJKKOO(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_COIOBBJKKOO_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMAEHPMINOH_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EMJPALNJFOF(::System::Type* OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_EMJPALNJFOF_OFFSET))(this, OBNIAHNMHPF);
	}

	::UnityEngine::NAPRenderPipeline0::VolumeComponent* FNBOPIPBICJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMAEHPMINOH_FNBOPIPBICJ_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NGGCIBEIPCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_NGGCIBEIPCO_OFFSET))(this);
	}

	::System::Boolean JPPOLGLDDAE(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_JPPOLGLDDAE_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void PMIECIFGNPK(::UnityEngine::Rendering::Volume* PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_PMIECIFGNPK_OFFSET))(this, PHLFMCCNEGD);
	}

	::System::Boolean CKJFHDBPMJJ(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_CKJFHDBPMJJ_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}

	::System::Void CDAONOPBGIO(::MoleMole::Config::ScreenEffectType IHIMDLELPAG, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_CDAONOPBGIO_OFFSET))(this, IHIMDLELPAG, PHLFMCCNEGD);
	}

	::System::Boolean ENPIHMJBIHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAEHPMINOH_ENPIHMJBIHP_OFFSET))(this);
	}

	::System::Boolean FDIPIBALKFD(::System::String* MCOHLHMKLIP, ::System::Single BLGEFGEFNGE, ::System::Action* LOFKGFHKCMB, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Boolean CHPGCOHOAOD, ::System::String* KMJHNJMAKOA, ::MoleMole::Config::ConfigPosRot* HJOAANGLGMN, ::System::Boolean ELFMEICFCLL, ::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::Foundation::Variable_1<::System::Single> POIAJCEKIHL, ::PKEIFNDNBPK ONHLHFCHNEA, ::JMNOLMMPKNL* BCNGPJIGAIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::PKEIFNDNBPK, ::JMNOLMMPKNL*))((::PBYTE)hIl2Cpp + HMAEHPMINOH_FDIPIBALKFD_OFFSET))(this, MCOHLHMKLIP, BLGEFGEFNGE, LOFKGFHKCMB, NGODDCIOJDP, CHPGCOHOAOD, KMJHNJMAKOA, HJOAANGLGMN, ELFMEICFCLL, PHLFMCCNEGD, POIAJCEKIHL, ONHLHFCHNEA, BCNGPJIGAIG);
	}
};
