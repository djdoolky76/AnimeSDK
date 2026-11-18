#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/ODHKALNGHOG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"

class ILLCEFBALCI;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Material; }

#define NOHOGHGPBAG_AALGHMMIAMI_OFFSET UNITYSDK_OFFSET(0x10680420)
#define NOHOGHGPBAG_ABPOPJGECKK_OFFSET UNITYSDK_OFFSET(0x1067CC20)
#define NOHOGHGPBAG_BEANFINDEJH_OFFSET UNITYSDK_OFFSET(0x1067D8C0)
#define NOHOGHGPBAG_BFFNMBMMLAA_OFFSET UNITYSDK_OFFSET(0x1067CF10)
#define NOHOGHGPBAG_BOEEGBFBOJF_OFFSET UNITYSDK_OFFSET(0x1067DB70)
#define NOHOGHGPBAG_BPCPBMEIAGM_OFFSET UNITYSDK_OFFSET(0x10680590)
#define NOHOGHGPBAG_CJDKFDJECJJ_OFFSET UNITYSDK_OFFSET(0x1067D840)
#define NOHOGHGPBAG_CJKBPGLNNDC_OFFSET UNITYSDK_OFFSET(0x10680430)
#define NOHOGHGPBAG_COJLPAEJLJD_OFFSET UNITYSDK_OFFSET(0x1067E0B0)
#define NOHOGHGPBAG_DAKFPCKBHOJ_OFFSET UNITYSDK_OFFSET(0x1067CE90)
#define NOHOGHGPBAG_DBBANBPGPAE_1_OFFSET UNITYSDK_OFFSET(0x1067CB50)
#define NOHOGHGPBAG_DBBANBPGPAE_2_OFFSET UNITYSDK_OFFSET(0x1067CBB0)
#define NOHOGHGPBAG_DBBANBPGPAE_3_OFFSET UNITYSDK_OFFSET(0x1067CC70)
#define NOHOGHGPBAG_DBBANBPGPAE_4_OFFSET UNITYSDK_OFFSET(0x1067CCE0)
#define NOHOGHGPBAG_DBBANBPGPAE_5_OFFSET UNITYSDK_OFFSET(0x1067CD40)
#define NOHOGHGPBAG_DBBANBPGPAE_6_OFFSET UNITYSDK_OFFSET(0x1067CDA0)
#define NOHOGHGPBAG_DBBANBPGPAE_OFFSET UNITYSDK_OFFSET(0x1067CAF0)
#define NOHOGHGPBAG_DDCDNCFANEO_OFFSET UNITYSDK_OFFSET(0x1067F6C0)
#define NOHOGHGPBAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1067CE40)
#define NOHOGHGPBAG_DMOGGBPECIO_OFFSET UNITYSDK_OFFSET(0x10680790)
#define NOHOGHGPBAG_EGDGHCKALKG_OFFSET UNITYSDK_OFFSET(0x1067D0F0)
#define NOHOGHGPBAG_FAAKDODJPCP_OFFSET UNITYSDK_OFFSET(0x1067DD20)
#define NOHOGHGPBAG_FCFDIFIAEPP_OFFSET UNITYSDK_OFFSET(0x106803E0)
#define NOHOGHGPBAG_FGOHNDJMCCG_OFFSET UNITYSDK_OFFSET(0x1067D7E0)
#define NOHOGHGPBAG_HHPAMHKEFAF_OFFSET UNITYSDK_OFFSET(0x1067CE00)
#define NOHOGHGPBAG_HNCNCLJMBOA_OFFSET UNITYSDK_OFFSET(0x1067CF50)
#define NOHOGHGPBAG_IFOLKPFPPMG_OFFSET UNITYSDK_OFFSET(0x1067D120)
#define NOHOGHGPBAG_INDNGAJMCCP_OFFSET UNITYSDK_OFFSET(0x10680780)
#define NOHOGHGPBAG_INEIEOCBKLF_OFFSET UNITYSDK_OFFSET(0x1067D110)
#define NOHOGHGPBAG_JLGBIJLHLBG_OFFSET UNITYSDK_OFFSET(0x1067CAB0)
#define NOHOGHGPBAG_JNGBDNBOGDJ_OFFSET UNITYSDK_OFFSET(0x1067CA70)
#define NOHOGHGPBAG_KCNJMMFHPCL_OFFSET UNITYSDK_OFFSET(0x1067F890)
#define NOHOGHGPBAG_KNJEOAJGBCA_OFFSET UNITYSDK_OFFSET(0x1067DBD0)
#define NOHOGHGPBAG_KOJBNICBDGN_OFFSET UNITYSDK_OFFSET(0x1067CE80)
#define NOHOGHGPBAG_LAHIFGCKDIJ_OFFSET UNITYSDK_OFFSET(0x1067F6B0)
#define NOHOGHGPBAG_LHKCLOIFBDK_OFFSET UNITYSDK_OFFSET(0x1067E150)
#define NOHOGHGPBAG_OJBHNACCKDJ_OFFSET UNITYSDK_OFFSET(0x1067DAF0)
#define NOHOGHGPBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1067CA10)

inline static constexpr unsigned int NOHOGHGPBAG_TypeDefinitionIndex = 45455;

class NOHOGHGPBAG : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_OFNOHDFIBKD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NOHOGHGPBAG_TypeDefinitionIndex)->GetStaticField(0xD080);
	}
	::System::Collections::Generic::HashSet_1<::System::Int32>* NEBNPIGKHKI; // 0x10
	::Il2CppArray<::UnityEngine::Material*>* CELOHMODLDM; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* KPJFJPCCKDI; // 0x20
	::ILLCEFBALCI* FEDOLIPHCJF; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* IBINNDOBPML; // 0x30
	::MoleMole::Config::MaterialPropertyType MCBIPACGFBD; // 0x38
	::ODHKALNGHOG CEONPBCNJHD; // 0x3C
	::System::Int32 _CAILBNCEDIM_k__BackingField; // 0x40
	::System::Boolean MIIMKJONLAF; // 0x44
	::System::Boolean OBBBBNKACLK; // 0x45
	::System::Boolean EOJEABJDOMC; // 0x46
	::System::Boolean HFJCAADDFKG; // 0x47

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG__CTOR_OFFSET))(this);
	}

	::System::Void JNGBDNBOGDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_JNGBDNBOGDJ_OFFSET))(this);
	}

	::System::Void JLGBIJLHLBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_JLGBIJLHLBG_OFFSET))(this);
	}

	::System::Boolean DBBANBPGPAE(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DBBANBPGPAE_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_1(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticTextureMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DBBANBPGPAE_1_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_2(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DBBANBPGPAE_2_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Void ABPOPJGECKK(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticVectorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Void(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_ABPOPJGECKK_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_3(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticColorMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DBBANBPGPAE_3_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_4(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticBoolMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DBBANBPGPAE_4_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_5(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DBBANBPGPAE_5_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Boolean DBBANBPGPAE_6(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::StaticKeywordFloatMaterialModifier& AOBNJBCBHAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DBBANBPGPAE_6_OFFSET))(this, MDLHJONGOPK, AOBNJBCBHAK);
	}

	::System::Void HHPAMHKEFAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_HHPAMHKEFAF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DISPOSE_OFFSET))(this);
	}

	::System::Boolean KOJBNICBDGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_KOJBNICBDGN_OFFSET))(this);
	}

	::System::Void DAKFPCKBHOJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DAKFPCKBHOJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HNCNCLJMBOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_HNCNCLJMBOA_OFFSET))(this);
	}

	::System::Int32 INEIEOCBKLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_INEIEOCBKLF_OFFSET))(this);
	}

	::System::Void IFOLKPFPPMG(::ILLCEFBALCI* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_IFOLKPFPPMG_OFFSET))(this, ECMMKCJLBMD);
	}

	::System::Boolean BEANFINDEJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_BEANFINDEJH_OFFSET))(this);
	}

	::System::Void OJBHNACCKDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_OJBHNACCKDJ_OFFSET))(this);
	}

	::MoleMole::MonoRenderHandler* FGOHNDJMCCG()
	{
		return ((::MoleMole::MonoRenderHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_FGOHNDJMCCG_OFFSET))(this);
	}

	::System::Int32 KNJEOAJGBCA(::MoleMole::Config::MaterialPropertyType MMEGJDHKIBP)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_KNJEOAJGBCA_OFFSET))(this, MMEGJDHKIBP);
	}

	::System::Void FAAKDODJPCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_FAAKDODJPCP_OFFSET))(this);
	}

	::System::Void COJLPAEJLJD(::System::Boolean HPOGEKKJDLP, ::ODHKALNGHOG FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ODHKALNGHOG))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_COJLPAEJLJD_OFFSET))(this, HPOGEKKJDLP, FKMHMOELCIO);
	}

	::System::Void BFFNMBMMLAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_BFFNMBMMLAA_OFFSET))(this);
	}

	::System::Void LHKCLOIFBDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_LHKCLOIFBDK_OFFSET))(this);
	}

	::System::Boolean DDCDNCFANEO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DDCDNCFANEO_OFFSET))(this);
	}

	::System::Void BOEEGBFBOJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_BOEEGBFBOJF_OFFSET))(this);
	}

	::System::Void CJDKFDJECJJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_CJDKFDJECJJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LAHIFGCKDIJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_LAHIFGCKDIJ_OFFSET))(this);
	}

	::ILLCEFBALCI* FCFDIFIAEPP()
	{
		return ((::ILLCEFBALCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_FCFDIFIAEPP_OFFSET))(this);
	}

	::System::Void KCNJMMFHPCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_KCNJMMFHPCL_OFFSET))(this);
	}

	::System::Boolean AALGHMMIAMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_AALGHMMIAMI_OFFSET))(this);
	}

	::System::Int32 CJKBPGLNNDC(::System::Collections::Generic::HashSet_1<::NOHOGHGPBAG*>* KMBFINGJGDN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::NOHOGHGPBAG*>*))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_CJKBPGLNNDC_OFFSET))(this, KMBFINGJGDN);
	}

	::System::Void BPCPBMEIAGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_BPCPBMEIAGM_OFFSET))(this);
	}

	::ODHKALNGHOG INDNGAJMCCP()
	{
		return ((::ODHKALNGHOG(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_INDNGAJMCCP_OFFSET))(this);
	}

	::System::String* EGDGHCKALKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_EGDGHCKALKG_OFFSET))(this);
	}

	::System::Void DMOGGBPECIO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOHOGHGPBAG_DMOGGBPECIO_OFFSET))(this, EGEGIMGMJHN);
	}
};
