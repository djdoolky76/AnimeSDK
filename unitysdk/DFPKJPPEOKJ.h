#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/UnloadPhase.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/PECFNJDKGGK.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace MoleMole { class NewAutoConfigMetaConfig; }
namespace MoleMole { class NewConfigMetaConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFPKJPPEOKJ_AADODDDIDMC_OFFSET UNITYSDK_OFFSET(0x12077990)
#define DFPKJPPEOKJ_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x12077880)
#define DFPKJPPEOKJ_ADANMCFGDIP_OFFSET UNITYSDK_OFFSET(0x1207AE40)
#define DFPKJPPEOKJ_AHBPJOJBNLC_OFFSET UNITYSDK_OFFSET(0x120780A0)
#define DFPKJPPEOKJ_ANHGIHIJJDI_OFFSET UNITYSDK_OFFSET(0x1207AA00)
#define DFPKJPPEOKJ_BBDMOJKLBFA_OFFSET UNITYSDK_OFFSET(0x12077F60)
#define DFPKJPPEOKJ_BNCEKPCNPGL_OFFSET UNITYSDK_OFFSET(0x120793F0)
#define DFPKJPPEOKJ_CDAPOBHHAOM_OFFSET UNITYSDK_OFFSET(0x120795E0)
#define DFPKJPPEOKJ_CEGLEMHALOI_OFFSET UNITYSDK_OFFSET(0x1207B350)
#define DFPKJPPEOKJ_CGABPJCFIIC_OFFSET UNITYSDK_OFFSET(0x120783B0)
#define DFPKJPPEOKJ_CLABPBMHEEN_OFFSET UNITYSDK_OFFSET(0x12078510)
#define DFPKJPPEOKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12077AA0)
#define DFPKJPPEOKJ_DKIDMNBIDCF_OFFSET UNITYSDK_OFFSET(0x1207B000)
#define DFPKJPPEOKJ_EAPNFHONJMN_OFFSET UNITYSDK_OFFSET(0x12078410)
#define DFPKJPPEOKJ_ECGEPEMJFKP_OFFSET UNITYSDK_OFFSET(0x1207A9A0)
#define DFPKJPPEOKJ_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x12077900)
#define DFPKJPPEOKJ_EFPOECBJIJF_OFFSET UNITYSDK_OFFSET(0x1207A8B0)
#define DFPKJPPEOKJ_FAKPENLBEBF_OFFSET UNITYSDK_OFFSET(0x1207B0C0)
#define DFPKJPPEOKJ_FCLGBNIGJJE_OFFSET UNITYSDK_OFFSET(0x1207AB50)
#define DFPKJPPEOKJ_FHJFLGJKLHC_OFFSET UNITYSDK_OFFSET(0x1207B3F0)
#define DFPKJPPEOKJ_FLHCILOGNED_OFFSET UNITYSDK_OFFSET(0x120798C0)
#define DFPKJPPEOKJ_FNHPCGEEOHA_OFFSET UNITYSDK_OFFSET(0x120793B0)
#define DFPKJPPEOKJ_GIBJNKKJDHI_OFFSET UNITYSDK_OFFSET(0x12079670)
#define DFPKJPPEOKJ_HEOGFKLNJAN_OFFSET UNITYSDK_OFFSET(0x1207B170)
#define DFPKJPPEOKJ_HFFPBHLALLI_OFFSET UNITYSDK_OFFSET(0x12078720)
#define DFPKJPPEOKJ_HKDLABKCNHD_OFFSET UNITYSDK_OFFSET(0x12043F30)
#define DFPKJPPEOKJ_HLFDMJNBKAC_OFFSET UNITYSDK_OFFSET(0x1207AEA0)
#define DFPKJPPEOKJ_IBJJOPOPOAH_OFFSET UNITYSDK_OFFSET(0x1207A440)
#define DFPKJPPEOKJ_IEAMNLENIHG_OFFSET UNITYSDK_OFFSET(0x12079330)
#define DFPKJPPEOKJ_IFICLOFGHPC_OFFSET UNITYSDK_OFFSET(0x12079AF0)
#define DFPKJPPEOKJ_IGBDBDKNPPP_OFFSET UNITYSDK_OFFSET(0x1207B2B0)
#define DFPKJPPEOKJ_ILIPBKPNLFA_OFFSET UNITYSDK_OFFSET(0x12077DF0)
#define DFPKJPPEOKJ_ILPGKJOPPEM_OFFSET UNITYSDK_OFFSET(0x12079C30)
#define DFPKJPPEOKJ_JFIJACEDKDB_OFFSET UNITYSDK_OFFSET(0x1207B450)
#define DFPKJPPEOKJ_JHDFDJAJGNH_OFFSET UNITYSDK_OFFSET(0x12078EB0)
#define DFPKJPPEOKJ_JKBMOFFBGAI_OFFSET UNITYSDK_OFFSET(0x1207A6B0)
#define DFPKJPPEOKJ_JLGHJBHCEPD_OFFSET UNITYSDK_OFFSET(0x1207AF80)
#define DFPKJPPEOKJ_JPNKEPICKDF_OFFSET UNITYSDK_OFFSET(0x12077D80)
#define DFPKJPPEOKJ_KBHDMHCCJOP_OFFSET UNITYSDK_OFFSET(0x12077D00)
#define DFPKJPPEOKJ_KBPDABMHHAO_OFFSET UNITYSDK_OFFSET(0x12052B90)
#define DFPKJPPEOKJ_KFBABJBPPJD_OFFSET UNITYSDK_OFFSET(0x12079580)
#define DFPKJPPEOKJ_KGFAFJGNAIH_OFFSET UNITYSDK_OFFSET(0x12079440)
#define DFPKJPPEOKJ_KIIDHOCPCDN_OFFSET UNITYSDK_OFFSET(0x1207ACA0)
#define DFPKJPPEOKJ_KLHEGGPFJHK_OFFSET UNITYSDK_OFFSET(0x1207B160)
#define DFPKJPPEOKJ_KONJKHLPLLG_OFFSET UNITYSDK_OFFSET(0x12078490)
#define DFPKJPPEOKJ_KPDEOALBAGA_OFFSET UNITYSDK_OFFSET(0x12079A70)
#define DFPKJPPEOKJ_LEGLMFJPNAP_OFFSET UNITYSDK_OFFSET(0x12079BF0)
#define DFPKJPPEOKJ_LNINFFFBOKP_OFFSET UNITYSDK_OFFSET(0x1207A250)
#define DFPKJPPEOKJ_MAJOHLFDEBC_OFFSET UNITYSDK_OFFSET(0x1207AC40)
#define DFPKJPPEOKJ_MJGDIIBKIBO_OFFSET UNITYSDK_OFFSET(0x120777B0)
#define DFPKJPPEOKJ_NBPBKNCBAAC_OFFSET UNITYSDK_OFFSET(0x1207A710)
#define DFPKJPPEOKJ_NIFMEFCDCDM_OFFSET UNITYSDK_OFFSET(0x1207B060)
#define DFPKJPPEOKJ_OECGMLJCCEO_OFFSET UNITYSDK_OFFSET(0x12079B70)
#define DFPKJPPEOKJ_OMJHFFAFGDF_OFFSET UNITYSDK_OFFSET(0x12078BE0)
#define DFPKJPPEOKJ_OMKLMGAPGKG_OFFSET UNITYSDK_OFFSET(0x12078F10)
#define DFPKJPPEOKJ_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12077720)
#define DFPKJPPEOKJ_PHCFOIICHNL_OFFSET UNITYSDK_OFFSET(0x12078350)
#define DFPKJPPEOKJ_PLAEIHAHPGD_OFFSET UNITYSDK_OFFSET(0x12078110)
#define DFPKJPPEOKJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x12077B00)
#define DFPKJPPEOKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12077AF0)

inline static constexpr unsigned int DFPKJPPEOKJ_TypeDefinitionIndex = 76780;

class DFPKJPPEOKJ
{
public:
	static ::Foundation::AssetPath* StaticGet_MCAOJCKEOLF()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0x31AB0);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_OKGODAIGHHO()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0x31AC0);
	}
	static ::System::Action_1<::System::Single>** StaticGet_JINPLMMJCCD()
	{
		return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0x31AC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_LMBEFDOIOKG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0x31AD0);
	}
	static ::Foundation::AssetPath* StaticGet_CHDMGFBMEMA()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0x31AD8);
	}
	static ::System::Int32* StaticGet_JFFAOGBOKBC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA820);
	}
	static ::System::Single* StaticGet_BMCENAMLGIK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA824);
	}
	static ::System::Boolean* StaticGet_LAJMEPMDOIJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA828);
	}
	static ::System::Boolean* StaticGet_JIPPFENPHID()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA829);
	}
	static ::System::Boolean* StaticGet_LLMCFOHJFLL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA82A);
	}
	static ::System::Boolean* StaticGet_PCHDNLLKJIE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA82B);
	}
	static ::System::Int32* StaticGet_NGCFHDDJCJC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA82C);
	}
	static ::System::Int32* StaticGet_GKIEKOBNLII()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA830);
	}
	static ::System::Int32* StaticGet_ALKDPHIEJLN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA834);
	}
	static ::System::Single* StaticGet_LBDCLGCPJJG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA838);
	}
	static ::System::Boolean* StaticGet_GDACFFOBDBM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA83C);
	}
	static ::System::Boolean* StaticGet_OBJPLGCMCOO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA83D);
	}
	static ::System::Boolean* StaticGet_KHBALOPGIOB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA83E);
	}
	static ::System::Boolean* StaticGet_IMIPANDCOMF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA83F);
	}
	static ::System::Boolean* StaticGet_KGBKNNLBDEI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA840);
	}
	static ::System::Boolean* StaticGet_HPIGPLBDOFI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA841);
	}
	static ::System::Int32* StaticGet_FLJGJKBKDPK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA844);
	}
	static ::PECFNJDKGGK* StaticGet_JFCMEDNPBGH()
	{
		return (::PECFNJDKGGK*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA848);
	}
	static ::System::Single* StaticGet_FFDJMEDHOJA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA84C);
	}
	static ::System::Single* StaticGet_FCCKGMDEGKJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA850);
	}
	static ::System::Int32* StaticGet_INNPNJCIFFG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA854);
	}
	static ::System::Int32* StaticGet_AFGHEOKHKMA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA858);
	}
	static ::System::Single* StaticGet_CHFKAKLJKDF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA85C);
	}
	static ::System::Single* StaticGet_LAKHKAGOINF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ_TypeDefinitionIndex)->GetStaticField(0xA860);
	}
	::MoleMole::NewAutoConfigMetaConfig* GMJLNJOEDDL; // 0x10
	::MoleMole::NewConfigMetaConfig* PAFHADEKIJN; // 0x18
	::System::Boolean DFKOKIGEHJJ; // 0x20
	::System::Boolean _FEDBOHPIOBB_k__BackingField; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_ONCREATE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_DISPOSE_OFFSET))(this);
	}

	::System::Void KBHDMHCCJOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_KBHDMHCCJOP_OFFSET))(this);
	}

	static ::ConfigModuleLib::Runtime::UnloadPhase JPNKEPICKDF()
	{
		return ((::ConfigModuleLib::Runtime::UnloadPhase(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JPNKEPICKDF_OFFSET))();
	}

	static ::System::Void ILIPBKPNLFA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_ILIPBKPNLFA_OFFSET))(EGEGIMGMJHN);
	}

	::System::String* BBDMOJKLBFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_BBDMOJKLBFA_OFFSET))(this);
	}

	static ::MoleMole::NewAutoConfigMetaConfig* AHBPJOJBNLC()
	{
		return ((::MoleMole::NewAutoConfigMetaConfig*(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_AHBPJOJBNLC_OFFSET))();
	}

	static ::System::Single PHCFOIICHNL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_PHCFOIICHNL_OFFSET))();
	}

	static ::System::Void CGABPJCFIIC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_CGABPJCFIIC_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Collections::IEnumerator* EAPNFHONJMN(::System::Action_1<::System::Single>* FOAHOFIHCCO)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_EAPNFHONJMN_OFFSET))(FOAHOFIHCCO);
	}

	static ::System::Collections::IEnumerator* KONJKHLPLLG(::System::Action_1<::System::Single>* FOAHOFIHCCO)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_KONJKHLPLLG_OFFSET))(FOAHOFIHCCO);
	}

	::System::Void CLABPBMHEEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_CLABPBMHEEN_OFFSET))(this);
	}

	static ::DFPKJPPEOKJ* PLAEIHAHPGD()
	{
		return ((::DFPKJPPEOKJ*(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_PLAEIHAHPGD_OFFSET))();
	}

	::System::Void OMJHFFAFGDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_OMJHFFAFGDF_OFFSET))(this);
	}

	static ::System::Boolean JHDFDJAJGNH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JHDFDJAJGNH_OFFSET))();
	}

	::System::Void AADODDDIDMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_AADODDDIDMC_OFFSET))(this);
	}

	static ::System::Collections::IEnumerator* IEAMNLENIHG(::System::Action_1<::System::Single>* FOAHOFIHCCO)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IEAMNLENIHG_OFFSET))(FOAHOFIHCCO);
	}

	static ::System::Void FNHPCGEEOHA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FNHPCGEEOHA_OFFSET))();
	}

	static ::System::Void BNCEKPCNPGL(::System::Boolean KIEDMLDNJKH, ::System::Boolean HNGMBBCEEJN)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_BNCEKPCNPGL_OFFSET))(KIEDMLDNJKH, HNGMBBCEEJN);
	}

	::System::String* KGFAFJGNAIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_KGFAFJGNAIH_OFFSET))(this);
	}

	static ::System::Boolean KFBABJBPPJD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_KFBABJBPPJD_OFFSET))();
	}

	::System::Void CDAPOBHHAOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_CDAPOBHHAOM_OFFSET))(this);
	}

	::System::String* GIBJNKKJDHI(::System::Boolean& HJHAMICPOJB)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_GIBJNKKJDHI_OFFSET))(this, HJHAMICPOJB);
	}

	static ::System::Void FLHCILOGNED(::ConfigModuleLib::Runtime::UnloadPhase CFMBGCMCNMM)
	{
		return ((::System::Void(*)(::ConfigModuleLib::Runtime::UnloadPhase))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FLHCILOGNED_OFFSET))(CFMBGCMCNMM);
	}

	static ::System::Void OMKLMGAPGKG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_OMKLMGAPGKG_OFFSET))();
	}

	::System::Collections::IEnumerator* KPDEOALBAGA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_KPDEOALBAGA_OFFSET))(this, EJGDHCIBCJH);
	}

	static ::System::Collections::IEnumerator* IFICLOFGHPC(::System::Action_1<::System::Single>* FOAHOFIHCCO)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IFICLOFGHPC_OFFSET))(FOAHOFIHCCO);
	}

	static ::System::Collections::IEnumerator* OECGMLJCCEO(::System::Action_1<::System::Single>* FOAHOFIHCCO)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_OECGMLJCCEO_OFFSET))(FOAHOFIHCCO);
	}

	static ::System::Void LEGLMFJPNAP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LEGLMFJPNAP_OFFSET))();
	}

	static ::System::Void ILPGKJOPPEM(::System::Boolean EBAJLMBGMFE, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_ILPGKJOPPEM_OFFSET))(EBAJLMBGMFE, MGAKJHJAGJI);
	}

	static ::ConfigModuleLib::Runtime::LoadOpHandle LNINFFFBOKP(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_LNINFFFBOKP_OFFSET))(CFMBGCMCNMM);
	}

	::System::Void IBJJOPOPOAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IBJJOPOPOAH_OFFSET))(this);
	}

	::System::String* NBPBKNCBAAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_NBPBKNCBAAC_OFFSET))(this);
	}

	static ::System::Void EFPOECBJIJF(::System::Single KKIAHJODOIA)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_EFPOECBJIJF_OFFSET))(KKIAHJODOIA);
	}

	static ::System::Void ECGEPEMJFKP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_ECGEPEMJFKP_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void ANHGIHIJJDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_ANHGIHIJJDI_OFFSET))(this);
	}

	static ::System::Boolean FCLGBNIGJJE(::System::Single FGIEBLGMPAI)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FCLGBNIGJJE_OFFSET))(FGIEBLGMPAI);
	}

	static ::System::Void MJGDIIBKIBO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MJGDIIBKIBO_OFFSET))();
	}

	static ::MoleMole::NewConfigMetaConfig* HKDLABKCNHD()
	{
		return ((::MoleMole::NewConfigMetaConfig*(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_HKDLABKCNHD_OFFSET))();
	}

	static ::System::Boolean MAJOHLFDEBC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_MAJOHLFDEBC_OFFSET))();
	}

	static ::ConfigModuleLib::Runtime::LoadPhase KIIDHOCPCDN()
	{
		return ((::ConfigModuleLib::Runtime::LoadPhase(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_KIIDHOCPCDN_OFFSET))();
	}

	static ::PECFNJDKGGK ADANMCFGDIP()
	{
		return ((::PECFNJDKGGK(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_ADANMCFGDIP_OFFSET))();
	}

	static ::System::Void HLFDMJNBKAC(::PECFNJDKGGK EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PECFNJDKGGK))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_HLFDMJNBKAC_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void KBPDABMHHAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_KBPDABMHHAO_OFFSET))(this);
	}

	static ::System::Void DKIDMNBIDCF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_DKIDMNBIDCF_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void NIFMEFCDCDM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_NIFMEFCDCDM_OFFSET))(EGEGIMGMJHN);
	}

	::System::Collections::IEnumerator* FAKPENLBEBF(::System::Action_1<::System::Single>* FOAHOFIHCCO, ::System::Single CLMNLPKFBFA)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FAKPENLBEBF_OFFSET))(this, FOAHOFIHCCO, CLMNLPKFBFA);
	}

	::System::Boolean KLHEGGPFJHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_KLHEGGPFJHK_OFFSET))(this);
	}

	::System::String* HEOGFKLNJAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_HEOGFKLNJAN_OFFSET))(this);
	}

	static ::ConfigModuleLib::Runtime::LoadOpHandle IGBDBDKNPPP()
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_IGBDBDKNPPP_OFFSET))();
	}

	::System::Collections::IEnumerator* CEGLEMHALOI(::System::Action_1<::System::Single>* FOAHOFIHCCO, ::System::Single CLMNLPKFBFA)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_CEGLEMHALOI_OFFSET))(this, FOAHOFIHCCO, CLMNLPKFBFA);
	}

	::System::Void JKBMOFFBGAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JKBMOFFBGAI_OFFSET))(this);
	}

	static ::System::Boolean FHJFLGJKLHC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FHJFLGJKLHC_OFFSET))();
	}

	static ::System::Void JLGHJBHCEPD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JLGHJBHCEPD_OFFSET))();
	}

	static ::System::Void JFIJACEDKDB(::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_JFIJACEDKDB_OFFSET))(GDGGMIJHAJJ);
	}

	::System::Void HFFPBHLALLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_HFFPBHLALLI_OFFSET))(this);
	}
};
