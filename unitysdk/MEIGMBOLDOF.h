#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroBlockDataTransProperty_BlockEnvDataStmState.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"
class BHMLMOOOGLK;
class DCJLBKKOHHC;
class DHBOGGBEMFF_FANENNLGHPH;
class MEIGMBOLDOF_IKJLBKBKMMP;
class MEIGMBOLDOF_LKPHHHLDJHB;
namespace ScenenLightManager { class BaseSceneLightExportData; }
namespace ScenenLightManager { class MinimalLightImportData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MEIGMBOLDOF_AGAKIGJCCGA_OFFSET UNITYSDK_OFFSET(0xC183850)
#define MEIGMBOLDOF_AKHFINEAGJN_OFFSET UNITYSDK_OFFSET(0xC182840)
#define MEIGMBOLDOF_ALDJGNGBLEK_OFFSET UNITYSDK_OFFSET(0xC184600)
#define MEIGMBOLDOF_BAPMOJJENKA_OFFSET UNITYSDK_OFFSET(0xC187BC0)
#define MEIGMBOLDOF_BDLDKOBJKDB_OFFSET UNITYSDK_OFFSET(0xC1842C0)
#define MEIGMBOLDOF_BEAPHCCJJLL_OFFSET UNITYSDK_OFFSET(0xC186690)
#define MEIGMBOLDOF_BKICLBHGEFE_OFFSET UNITYSDK_OFFSET(0xC1884B0)
#define MEIGMBOLDOF_BKKDENNICBG_OFFSET UNITYSDK_OFFSET(0xC183D40)
#define MEIGMBOLDOF_BPPOLKMLAME_OFFSET UNITYSDK_OFFSET(0xC183F00)
#define MEIGMBOLDOF_CBPKKFFOPIC_OFFSET UNITYSDK_OFFSET(0xC184D60)
#define MEIGMBOLDOF_CCTOR_OFFSET UNITYSDK_OFFSET(0xC189CF0)
#define MEIGMBOLDOF_CGFLEELEOCC_OFFSET UNITYSDK_OFFSET(0xC182090)
#define MEIGMBOLDOF_CJBMHKJLEFE_OFFSET UNITYSDK_OFFSET(0xC181E10)
#define MEIGMBOLDOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC189B50)
#define MEIGMBOLDOF_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC189C40)
#define MEIGMBOLDOF_CTOR_OFFSET UNITYSDK_OFFSET(0xC189A90)
#define MEIGMBOLDOF_DFBHHCNNDKC_OFFSET UNITYSDK_OFFSET(0xC187960)
#define MEIGMBOLDOF_DFBLGOKDAAF_OFFSET UNITYSDK_OFFSET(0xC187FF0)
#define MEIGMBOLDOF_DKICLKAAIMN_OFFSET UNITYSDK_OFFSET(0xC187970)
#define MEIGMBOLDOF_DLBFFHNFKLC_OFFSET UNITYSDK_OFFSET(0xC187010)
#define MEIGMBOLDOF_DMIAKCFEDKH_OFFSET UNITYSDK_OFFSET(0xC187530)
#define MEIGMBOLDOF_DOMDJDMCPAL_OFFSET UNITYSDK_OFFSET(0xC1824F0)
#define MEIGMBOLDOF_DPIOCGDOHGJ_OFFSET UNITYSDK_OFFSET(0xC184790)
#define MEIGMBOLDOF_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0xC187940)
#define MEIGMBOLDOF_ECBHEJKDEBB_OFFSET UNITYSDK_OFFSET(0xC181FE0)
#define MEIGMBOLDOF_EJLNOIGJOHK_OFFSET UNITYSDK_OFFSET(0xC1879E0)
#define MEIGMBOLDOF_ELBHDMAOPAO_OFFSET UNITYSDK_OFFSET(0xC187E00)
#define MEIGMBOLDOF_ENKHDGJIFJO_OFFSET UNITYSDK_OFFSET(0xC1824E0)
#define MEIGMBOLDOF_EOJKNKMNGJB_OFFSET UNITYSDK_OFFSET(0xC189A40)
#define MEIGMBOLDOF_FBAMLJKKHAC_OFFSET UNITYSDK_OFFSET(0xC187A40)
#define MEIGMBOLDOF_FFEJNODIFDI_OFFSET UNITYSDK_OFFSET(0xC188560)
#define MEIGMBOLDOF_GOAABKBMOAA_OFFSET UNITYSDK_OFFSET(0xC1851C0)
#define MEIGMBOLDOF_IHIAIPOICPI_OFFSET UNITYSDK_OFFSET(0xC187500)
#define MEIGMBOLDOF_IKPJHDOHHNA_OFFSET UNITYSDK_OFFSET(0xC182580)
#define MEIGMBOLDOF_ILKNGCODFMK_OFFSET UNITYSDK_OFFSET(0xC182780)
#define MEIGMBOLDOF_ILOPHIDKBKA_OFFSET UNITYSDK_OFFSET(0xC182AC0)
#define MEIGMBOLDOF_IOLGKDEMHJI_OFFSET UNITYSDK_OFFSET(0xC184B30)
#define MEIGMBOLDOF_JBANBIGBBBA_OFFSET UNITYSDK_OFFSET(0xC187210)
#define MEIGMBOLDOF_JJDJMCIGBDD_OFFSET UNITYSDK_OFFSET(0xC183110)
#define MEIGMBOLDOF_KGPHPJDJDLA_OFFSET UNITYSDK_OFFSET(0xC1857E0)
#define MEIGMBOLDOF_KHFKJHNHEAO_OFFSET UNITYSDK_OFFSET(0xC182510)
#define MEIGMBOLDOF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC1854D0)
#define MEIGMBOLDOF_KICOKCAGCGK_OFFSET UNITYSDK_OFFSET(0xC182610)
#define MEIGMBOLDOF_KJOCCFFILMA_OFFSET UNITYSDK_OFFSET(0xC187930)
#define MEIGMBOLDOF_KKPGFJGLAGC_OFFSET UNITYSDK_OFFSET(0xC181CE0)
#define MEIGMBOLDOF_KNCANJANNOD_OFFSET UNITYSDK_OFFSET(0xC183C00)
#define MEIGMBOLDOF_KNKKMNPDIOH_OFFSET UNITYSDK_OFFSET(0xC182770)
#define MEIGMBOLDOF_KOBJMOHIOHJ_OFFSET UNITYSDK_OFFSET(0xC1873C0)
#define MEIGMBOLDOF_LBANKOPJFLO_OFFSET UNITYSDK_OFFSET(0xC1838F0)
#define MEIGMBOLDOF_LDDBAPAINNN_OFFSET UNITYSDK_OFFSET(0xC183540)
#define MEIGMBOLDOF_LDGPHCAJNJE_OFFSET UNITYSDK_OFFSET(0xC187E60)
#define MEIGMBOLDOF_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0xC187920)
#define MEIGMBOLDOF_LFGPAMCBKAD_OFFSET UNITYSDK_OFFSET(0xC187910)
#define MEIGMBOLDOF_LFPIPCBIFKA_OFFSET UNITYSDK_OFFSET(0xC187950)
#define MEIGMBOLDOF_MDOGEEHIFOD_OFFSET UNITYSDK_OFFSET(0xC1879D0)
#define MEIGMBOLDOF_MLFEFMAGKKK_OFFSET UNITYSDK_OFFSET(0xC187F60)
#define MEIGMBOLDOF_NFGCEHMGLIC_OFFSET UNITYSDK_OFFSET(0xC1837F0)
#define MEIGMBOLDOF_NIFEFHJMMPC_OFFSET UNITYSDK_OFFSET(0xC182760)
#define MEIGMBOLDOF_NIGPCELLBCK_OFFSET UNITYSDK_OFFSET(0xC182300)
#define MEIGMBOLDOF_NMIDJDDFJOO_OFFSET UNITYSDK_OFFSET(0xC183660)
#define MEIGMBOLDOF_NPFPOGDFHGD_OFFSET UNITYSDK_OFFSET(0xC1826B0)
#define MEIGMBOLDOF_OFMKAMNKDCL_OFFSET UNITYSDK_OFFSET(0xC181E70)
#define MEIGMBOLDOF_OHJPCBNAFGG_OFFSET UNITYSDK_OFFSET(0xC182E80)
#define MEIGMBOLDOF_OPBJKOCMGNJ_OFFSET UNITYSDK_OFFSET(0xC184F50)
#define MEIGMBOLDOF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC186620)
#define MEIGMBOLDOF_PBJDMIOBDBN_OFFSET UNITYSDK_OFFSET(0xC182500)
#define MEIGMBOLDOF_PBPHKALHFDJ_OFFSET UNITYSDK_OFFSET(0xC184AC0)
#define MEIGMBOLDOF_PFMCBMIGNEP_OFFSET UNITYSDK_OFFSET(0xC186E90)
#define MEIGMBOLDOF_PJMDBGGOHFI_OFFSET UNITYSDK_OFFSET(0xC1843E0)
#define MEIGMBOLDOF_PLEAAKMAJLA_OFFSET UNITYSDK_OFFSET(0xC182750)
#define MEIGMBOLDOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC181CF0)

inline static constexpr unsigned int MEIGMBOLDOF_TypeDefinitionIndex = 50189;

	class MEIGMBOLDOF : public ::System::Object
	{
	public:
		::DHBOGGBEMFF_FANENNLGHPH* EDGECBAPJKL; // 0x10
		::UnityEngine::GameObject* EHJGKDIFINJ; // 0x18
		::System::Collections::Generic::List_1<::DCJLBKKOHHC*>* CNIHDDHLAAI; // 0x20
		::BHMLMOOOGLK* FDHMMFJLLPB; // 0x28
		::MEIGMBOLDOF_IKJLBKBKMMP* PPNHIKEOCOO; // 0x30
		::UnityEngine::GameObject* NGOPGBACPFM; // 0x38
		::System::Int32 CNKOAPOADAK; // 0x40
		::System::Int32 EIDGHEDBALA; // 0x44
		::System::Single FLJGBFNPAEI; // 0x48
		::System::Single HBMCBCNLHCK; // 0x4C
		::System::Boolean PNBGNCMBADH; // 0x50
		::System::Boolean IKFIPNHPMHG; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 IGCDCFGJMCL; // 0x54
		::System::Single HPFOKCLBMOG; // 0x58
		::EnviromentSystem::EnviroBlockDataTransProperty_BlockEnvDataStmState PFHNHNDFBHE; // 0x5C
		::ScenenLightManager::LightInstanceID CMKFCCBFMJL; // 0x60
		::System::Single PIJCCBBIKDF; // 0x68
		::System::Single HJMKPJNKOEF; // 0x6C
		::System::Int32 LHKNGNILNLO; // 0x70
		::ScenenLightManager::FadingState BILKLNOAFFI; // 0x74
		::ScenenLightManager::FadingState EBNGHBIBFPM; // 0x78
		::ScenenLightManager::FadingState MNCFAAFHAKM; // 0x7C
		::System::Int32 AIPNKAKKFBC; // 0x80
		::System::Single FOFNHNJJPCL; // 0x84
		static ::MEIGMBOLDOF_LKPHHHLDJHB** StaticGet_HKNEECIBEIA()
		{
			return (::MEIGMBOLDOF_LKPHHHLDJHB**)UnitySDK::FromName("", "MEIGMBOLDOF")->GetStaticField(0x72330);
		}

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::ScenenLightManager::MinimalLightImportData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::MinimalLightImportData*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_CTOR_2_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEIGMBOLDOF_CCTOR_OFFSET))();
		}

		::System::Boolean KKPGFJGLAGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KKPGFJGLAGC_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_TOSTRING_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter OFMKAMNKDCL()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_OFMKAMNKDCL_OFFSET))(this);
		}

		::System::Void ECBHEJKDEBB(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_ECBHEJKDEBB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CGFLEELEOCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_CGFLEELEOCC_OFFSET))(this);
		}

		::System::String* NIGPCELLBCK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_NIGPCELLBCK_OFFSET))(this);
		}

		::System::Int32 ENKHDGJIFJO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_ENKHDGJIFJO_OFFSET))(this);
		}

		::System::Single DOMDJDMCPAL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_DOMDJDMCPAL_OFFSET))(this);
		}

		::System::Single PBJDMIOBDBN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_PBJDMIOBDBN_OFFSET))(this);
		}

		::System::String* KHFKJHNHEAO(::ScenenLightManager::FadingState a1)
		{
			return ((::System::String*(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KHFKJHNHEAO_OFFSET))(this, a1);
		}

		::System::String* IKPJHDOHHNA(::EnviromentSystem::EnviroBlockDataTransProperty_BlockEnvDataStmState a1)
		{
			return ((::System::String*(*)(::PVOID, ::EnviromentSystem::EnviroBlockDataTransProperty_BlockEnvDataStmState))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_IKPJHDOHHNA_OFFSET))(this, a1);
		}

		::System::String* KICOKCAGCGK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KICOKCAGCGK_OFFSET))(this);
		}

		::System::String* NPFPOGDFHGD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_NPFPOGDFHGD_OFFSET))(this);
		}

		::ScenenLightManager::FadingState PLEAAKMAJLA()
		{
			return ((::ScenenLightManager::FadingState(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_PLEAAKMAJLA_OFFSET))(this);
		}

		::ScenenLightManager::FadingState NIFEFHJMMPC()
		{
			return ((::ScenenLightManager::FadingState(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_NIFEFHJMMPC_OFFSET))(this);
		}

		::EnviromentSystem::EnviroBlockDataTransProperty_BlockEnvDataStmState KNKKMNPDIOH()
		{
			return ((::EnviromentSystem::EnviroBlockDataTransProperty_BlockEnvDataStmState(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KNKKMNPDIOH_OFFSET))(this);
		}

		::System::String* ILKNGCODFMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_ILKNGCODFMK_OFFSET))(this);
		}

		::System::Void AKHFINEAGJN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_AKHFINEAGJN_OFFSET))(this, a1);
		}

		::System::Void ILOPHIDKBKA(::System::Int32 a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_ILOPHIDKBKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDDBAPAINNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LDDBAPAINNN_OFFSET))(this);
		}

		::System::Void NMIDJDDFJOO(::System::Int32 a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_NMIDJDDFJOO_OFFSET))(this, a1, a2);
		}

		::System::Void JJDJMCIGBDD(::ScenenLightManager::FadingState a1, ::DHBOGGBEMFF_FANENNLGHPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::DHBOGGBEMFF_FANENNLGHPH*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_JJDJMCIGBDD_OFFSET))(this, a1, a2);
		}

		::System::Void LBANKOPJFLO(::ScenenLightManager::FadingState a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LBANKOPJFLO_OFFSET))(this, a1, a2);
		}

		::System::Void KNCANJANNOD(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KNCANJANNOD_OFFSET))(this, a1);
		}

		::System::Void AGAKIGJCCGA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_AGAKIGJCCGA_OFFSET))(this, a1);
		}

		::System::Void BPPOLKMLAME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_BPPOLKMLAME_OFFSET))(this);
		}

		::System::Void ALDJGNGBLEK(::DHBOGGBEMFF_FANENNLGHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHBOGGBEMFF_FANENNLGHPH*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_ALDJGNGBLEK_OFFSET))(this, a1);
		}

		::System::Void CBPKKFFOPIC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_CBPKKFFOPIC_OFFSET))(this, a1);
		}

		::System::Void BDLDKOBJKDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_BDLDKOBJKDB_OFFSET))(this);
		}

		::System::Void PJMDBGGOHFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_PJMDBGGOHFI_OFFSET))(this);
		}

		::System::Void BKKDENNICBG(::System::Int32 a1, ::System::Boolean a2, ::DHBOGGBEMFF_FANENNLGHPH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::DHBOGGBEMFF_FANENNLGHPH*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_BKKDENNICBG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPBJKOCMGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_OPBJKOCMGNJ_OFFSET))(this);
		}

		::System::Void GOAABKBMOAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_GOAABKBMOAA_OFFSET))(this);
		}

		::System::Void KGPHPJDJDLA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KGPHPJDJDLA_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		static ::System::Void BEAPHCCJJLL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEIGMBOLDOF_BEAPHCCJJLL_OFFSET))();
		}

		static ::System::Void PFMCBMIGNEP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEIGMBOLDOF_PFMCBMIGNEP_OFFSET))();
		}

		static ::System::Void DLBFFHNFKLC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEIGMBOLDOF_DLBFFHNFKLC_OFFSET))();
		}

		static ::System::Int32 JBANBIGBBBA()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MEIGMBOLDOF_JBANBIGBBBA_OFFSET))();
		}

		static ::System::Int32 KOBJMOHIOHJ(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KOBJMOHIOHJ_OFFSET))(a1);
		}

		static ::MEIGMBOLDOF_LKPHHHLDJHB* IHIAIPOICPI()
		{
			return ((::MEIGMBOLDOF_LKPHHHLDJHB*(*)())((::PBYTE)hIl2Cpp + MEIGMBOLDOF_IHIAIPOICPI_OFFSET))();
		}

		::System::Double DMIAKCFEDKH()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_DMIAKCFEDKH_OFFSET))(this);
		}

		::BHMLMOOOGLK* LFGPAMCBKAD()
		{
			return ((::BHMLMOOOGLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LFGPAMCBKAD_OFFSET))(this);
		}

		::System::Boolean LEHKGLNGAGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LEHKGLNGAGF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DCJLBKKOHHC*>* KJOCCFFILMA()
		{
			return ((::System::Collections::Generic::List_1<::DCJLBKKOHHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KJOCCFFILMA_OFFSET))(this);
		}

		::UnityEngine::GameObject* EBHNJMPEILL()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_EBHNJMPEILL_OFFSET))(this);
		}

		::System::Int32 LFPIPCBIFKA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LFPIPCBIFKA_OFFSET))(this);
		}

		::System::Int32 DFBHHCNNDKC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_DFBHHCNNDKC_OFFSET))(this);
		}

		::System::Boolean DKICLKAAIMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_DKICLKAAIMN_OFFSET))(this);
		}

		::UnityEngine::GameObject* MDOGEEHIFOD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_MDOGEEHIFOD_OFFSET))(this);
		}

		::System::Int32 EJLNOIGJOHK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_EJLNOIGJOHK_OFFSET))(this);
		}

		::System::String* CJBMHKJLEFE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_CJBMHKJLEFE_OFFSET))(this);
		}

		::ScenenLightManager::LightInstanceID BAPMOJJENKA()
		{
			return ((::ScenenLightManager::LightInstanceID(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_BAPMOJJENKA_OFFSET))(this);
		}

		::UnityEngine::GameObject* ELBHDMAOPAO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_ELBHDMAOPAO_OFFSET))(this);
		}

		::System::Void FBAMLJKKHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_FBAMLJKKHAC_OFFSET))(this);
		}

		::System::Void LDGPHCAJNJE(::DCJLBKKOHHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJLBKKOHHC*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_LDGPHCAJNJE_OFFSET))(this, a1);
		}

		::System::Void NFGCEHMGLIC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_NFGCEHMGLIC_OFFSET))(this, a1);
		}

		::System::Void MLFEFMAGKKK(::System::Int32 a1, ::System::Int32 a2, ::ScenenLightManager::LightTypeID a3, ::BHMLMOOOGLK* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID, ::BHMLMOOOGLK*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_MLFEFMAGKKK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DFBLGOKDAAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_DFBLGOKDAAF_OFFSET))(this);
		}

		::System::Void DPIOCGDOHGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_DPIOCGDOHGJ_OFFSET))(this);
		}

		::DCJLBKKOHHC* BKICLBHGEFE()
		{
			return ((::DCJLBKKOHHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_BKICLBHGEFE_OFFSET))(this);
		}

		::System::Void FFEJNODIFDI(::ScenenLightManager::BaseSceneLightExportData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BaseSceneLightExportData*))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_FFEJNODIFDI_OFFSET))(this, a1);
		}

		::System::Void OHJPCBNAFGG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_OHJPCBNAFGG_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PBPHKALHFDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_PBPHKALHFDJ_OFFSET))(this);
		}

		::System::Void IOLGKDEMHJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_IOLGKDEMHJI_OFFSET))(this);
		}

		::System::Void EOJKNKMNGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGMBOLDOF_EOJKNKMNGJB_OFFSET))(this);
		}

	};
