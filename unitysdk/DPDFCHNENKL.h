#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/Config/AbilitySpecialParamType.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FDNCOAGCCKH.h"
#include "unitysdk/KGOEPEBCOOB.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class AHAICPLGBAH;
class AOLDOKHEAOE;
class CHFBODEJFBE;
class COJMBEOAKMD;
class FBGHHAHMAII;
class HGAJKHIMKJP;
class HJEONFKECKA;
class JBKBOAGHNHH;
class JCADHFOKIHK;
class KFHNCJALFJK;
class MANBGDFAHPC;
class OAKIIJGHPDA;
class OKDKIKOBCLD;
class OMGJIDKKHHO;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPDFCHNENKL_AGLOMMIPPDN_OFFSET UNITYSDK_OFFSET(0xF9A2840)
#define DPDFCHNENKL_AOMKKIDCFGF_OFFSET UNITYSDK_OFFSET(0xF9A56C0)
#define DPDFCHNENKL_BCKCMMJFHCA_OFFSET UNITYSDK_OFFSET(0xF9A66B0)
#define DPDFCHNENKL_BJIGIMFBKFI_OFFSET UNITYSDK_OFFSET(0xF9A25F0)
#define DPDFCHNENKL_CBOONLLCKMO_OFFSET UNITYSDK_OFFSET(0xF9A5E30)
#define DPDFCHNENKL_DBABIFFLECC_OFFSET UNITYSDK_OFFSET(0xF9A6D20)
#define DPDFCHNENKL_DDIFLBDMEKN_OFFSET UNITYSDK_OFFSET(0xF9A20B0)
#define DPDFCHNENKL_DFEAIHFPCIO_1_OFFSET UNITYSDK_OFFSET(0xF9A5500)
#define DPDFCHNENKL_DFEAIHFPCIO_2_OFFSET UNITYSDK_OFFSET(0xF9A6DC0)
#define DPDFCHNENKL_DFEAIHFPCIO_OFFSET UNITYSDK_OFFSET(0xF9A5460)
#define DPDFCHNENKL_DGNCCOKHLMC_OFFSET UNITYSDK_OFFSET(0xF9A3E50)
#define DPDFCHNENKL_DPNNJHBGLGK_OFFSET UNITYSDK_OFFSET(0xF9A3960)
#define DPDFCHNENKL_EBAKJMGHGAE_1_OFFSET UNITYSDK_OFFSET(0xF9A1AF0)
#define DPDFCHNENKL_EBAKJMGHGAE_OFFSET UNITYSDK_OFFSET(0xF9A1E60)
#define DPDFCHNENKL_FCNGJKFJJFJ_OFFSET UNITYSDK_OFFSET(0xF9A5910)
#define DPDFCHNENKL_FGPFEOJKCKA_1_OFFSET UNITYSDK_OFFSET(0xF9A5000)
#define DPDFCHNENKL_FGPFEOJKCKA_OFFSET UNITYSDK_OFFSET(0xF9A1C60)
#define DPDFCHNENKL_FJHIEPLEHHF_OFFSET UNITYSDK_OFFSET(0xF9A7340)
#define DPDFCHNENKL_GJAAKKDMNFC_OFFSET UNITYSDK_OFFSET(0xF9A0C00)
#define DPDFCHNENKL_GPEAKCAJBFD_OFFSET UNITYSDK_OFFSET(0xF9A09F0)
#define DPDFCHNENKL_HJCCLGCJLHG_OFFSET UNITYSDK_OFFSET(0xF9A7800)
#define DPDFCHNENKL_HLMFALBIOGM_OFFSET UNITYSDK_OFFSET(0xF9A2470)
#define DPDFCHNENKL_IAJIHBHIGDP_OFFSET UNITYSDK_OFFSET(0xF9A2730)
#define DPDFCHNENKL_IHMOPHFMIJA_OFFSET UNITYSDK_OFFSET(0xF9A1260)
#define DPDFCHNENKL_IIBBJJMHCDM_OFFSET UNITYSDK_OFFSET(0xF9A4230)
#define DPDFCHNENKL_IONOKNMEGJF_1_OFFSET UNITYSDK_OFFSET(0xF9A1450)
#define DPDFCHNENKL_IONOKNMEGJF_2_OFFSET UNITYSDK_OFFSET(0xF9A27F0)
#define DPDFCHNENKL_IONOKNMEGJF_OFFSET UNITYSDK_OFFSET(0xF9A12C0)
#define DPDFCHNENKL_KLHKBCNINLM_OFFSET UNITYSDK_OFFSET(0xF9A5C40)
#define DPDFCHNENKL_LONKHKOFDHE_1_OFFSET UNITYSDK_OFFSET(0xF9A6C00)
#define DPDFCHNENKL_LONKHKOFDHE_OFFSET UNITYSDK_OFFSET(0xF9A6A10)
#define DPDFCHNENKL_MCJLGNOIPPJ_OFFSET UNITYSDK_OFFSET(0xF9A1890)
#define DPDFCHNENKL_MEGCKOICKGI_OFFSET UNITYSDK_OFFSET(0xF9A0E50)
#define DPDFCHNENKL_MEKJGBOLEFJ_OFFSET UNITYSDK_OFFSET(0xF9A72F0)
#define DPDFCHNENKL_MLLIHFMPLKD_OFFSET UNITYSDK_OFFSET(0xF9A32A0)
#define DPDFCHNENKL_MOLPEDGBHKN_OFFSET UNITYSDK_OFFSET(0xF9A4D80)
#define DPDFCHNENKL_OAPIJOHKIEI_OFFSET UNITYSDK_OFFSET(0xF9A40B0)
#define DPDFCHNENKL_ONKMGGKLGNN_OFFSET UNITYSDK_OFFSET(0xF9A6E60)
#define DPDFCHNENKL_OPOENMPGHDE_OFFSET UNITYSDK_OFFSET(0xF9A1500)
#define DPDFCHNENKL_PBCHOJCDKEB_OFFSET UNITYSDK_OFFSET(0xF9A6C80)
#define DPDFCHNENKL_PHHGIKOEPGI_OFFSET UNITYSDK_OFFSET(0xF9A6220)
#define DPDFCHNENKL__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9A0960)

inline static constexpr unsigned int DPDFCHNENKL_TypeDefinitionIndex = 91661;

class DPDFCHNENKL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_LDNBGMPIMKE()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(DPDFCHNENKL_TypeDefinitionIndex)->GetStaticField(0x43270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPDFCHNENKL__CCTOR_OFFSET))();
	}

	static ::MoleMole::Ability::InLevelAbilityTargetMask GPEAKCAJBFD(::System::Collections::Generic::List_1<::System::String*>* GJCLHKMHBOB)
	{
		return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_GPEAKCAJBFD_OFFSET))(GJCLHKMHBOB);
	}

	static ::System::Boolean GJAAKKDMNFC(::System::Int32 NJBALIKDOCA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + DPDFCHNENKL_GJAAKKDMNFC_OFFSET))(NJBALIKDOCA);
	}

	static ::System::Boolean MEGCKOICKGI(::System::Int32 NJBALIKDOCA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + DPDFCHNENKL_MEGCKOICKGI_OFFSET))(NJBALIKDOCA);
	}

	static ::System::Boolean IONOKNMEGJF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::List_1<::System::String*>* GJCLHKMHBOB)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_IONOKNMEGJF_OFFSET))(KECKGDFIALJ, GJCLHKMHBOB);
	}

	static ::System::Void OPOENMPGHDE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPDFCHNENKL_OPOENMPGHDE_OFFSET))();
	}

	static ::AHAICPLGBAH* MCJLGNOIPPJ(::OAKIIJGHPDA* OFJCKDMPPFO)
	{
		return ((::AHAICPLGBAH*(*)(::OAKIIJGHPDA*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_MCJLGNOIPPJ_OFFSET))(OFJCKDMPPFO);
	}

	static ::System::Void FGPFEOJKCKA(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LEAEJDGOALF, ::Il2CppArray<::System::String*>* BDGAKOLJBNO)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_FGPFEOJKCKA_OFFSET))(LEAEJDGOALF, BDGAKOLJBNO);
	}

	static ::System::Void EBAKJMGHGAE(::JBKBOAGHNHH* PMHJBOFDPEJ, ::System::Collections::Generic::List_1<::AHAICPLGBAH*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::JBKBOAGHNHH*, ::System::Collections::Generic::List_1<::AHAICPLGBAH*>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_EBAKJMGHGAE_OFFSET))(PMHJBOFDPEJ, PILELGPBCLL);
	}

	static ::System::Void HLMFALBIOGM(::OMGJIDKKHHO* KNHIFHIKHIO, ::System::String* DNOMAJFOBJA)
	{
		return ((::System::Void(*)(::OMGJIDKKHHO*, ::System::String*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_HLMFALBIOGM_OFFSET))(KNHIFHIKHIO, DNOMAJFOBJA);
	}

	static ::System::Boolean BJIGIMFBKFI(::System::String* JJAODNHNEOM, ::MoleMole::Ability::InLevelAbilityTargetMask BDIMHJILFCK)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + DPDFCHNENKL_BJIGIMFBKFI_OFFSET))(JJAODNHNEOM, BDIMHJILFCK);
	}

	static ::System::Boolean IAJIHBHIGDP(::MoleMole::Ability::InLevelAbilityTargetMask JKJCPEJGMGK, ::System::Collections::Generic::List_1<::System::String*>* GJCLHKMHBOB)
	{
		return ((::System::Boolean(*)(::MoleMole::Ability::InLevelAbilityTargetMask, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_IAJIHBHIGDP_OFFSET))(JKJCPEJGMGK, GJCLHKMHBOB);
	}

	static ::MoleMole::Ability::InLevelAbilityTargetMask AGLOMMIPPDN(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::MoleMole::Ability::InLevelAbilityTargetMask(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DPDFCHNENKL_AGLOMMIPPDN_OFFSET))(KECKGDFIALJ);
	}

	static ::AHAICPLGBAH* EBAKJMGHGAE_1(::HJEONFKECKA* PMHJBOFDPEJ)
	{
		return ((::AHAICPLGBAH*(*)(::HJEONFKECKA*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_EBAKJMGHGAE_1_OFFSET))(PMHJBOFDPEJ);
	}

	static ::System::Boolean IONOKNMEGJF_1(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::Ability::InLevelAbilityTargetMask DOAMHNAEFAI)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + DPDFCHNENKL_IONOKNMEGJF_1_OFFSET))(KECKGDFIALJ, DOAMHNAEFAI);
	}

	static ::System::Void DGNCCOKHLMC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPDFCHNENKL_DGNCCOKHLMC_OFFSET))();
	}

	static ::System::Void IIBBJJMHCDM(::System::Int32 MCFLDHLOHJJ, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DPDFCHNENKL_IIBBJJMHCDM_OFFSET))(MCFLDHLOHJJ, JHFKDGBCOBA);
	}

	static ::System::Void MOLPEDGBHKN(::System::UInt32 BKLGNCBNEGM, ::System::String* KKJEJNMLIFP, ::Il2CppArray<::System::String*>* BDGAKOLJBNO)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_MOLPEDGBHKN_OFFSET))(BKLGNCBNEGM, KKJEJNMLIFP, BDGAKOLJBNO);
	}

	static ::System::Void OAPIJOHKIEI(::KGOEPEBCOOB EPIDDDEJJDE)
	{
		return ((::System::Void(*)(::KGOEPEBCOOB))((::PBYTE)hIl2Cpp + DPDFCHNENKL_OAPIJOHKIEI_OFFSET))(EPIDDDEJJDE);
	}

	static ::System::Boolean IHMOPHFMIJA(::HGAJKHIMKJP* IPMMCGDMODG, ::System::Boolean MEAHGBLCFAK)
	{
		return ((::System::Boolean(*)(::HGAJKHIMKJP*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPDFCHNENKL_IHMOPHFMIJA_OFFSET))(IPMMCGDMODG, MEAHGBLCFAK);
	}

	static ::KGOEPEBCOOB DFEAIHFPCIO(::System::Int32 OJAFFOLDAJE, ::System::Boolean JKJDPPMEEOJ)
	{
		return ((::KGOEPEBCOOB(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DPDFCHNENKL_DFEAIHFPCIO_OFFSET))(OJAFFOLDAJE, JKJDPPMEEOJ);
	}

	static ::System::Boolean AOMKKIDCFGF(::KGOEPEBCOOB PHHDHIBOCKA, ::AHAICPLGBAH*& EPIDDDEJJDE)
	{
		return ((::System::Boolean(*)(::KGOEPEBCOOB, ::AHAICPLGBAH*&))((::PBYTE)hIl2Cpp + DPDFCHNENKL_AOMKKIDCFGF_OFFSET))(PHHDHIBOCKA, EPIDDDEJJDE);
	}

	static ::AHAICPLGBAH* DDIFLBDMEKN(::System::Int32 MGMDLMBEDJF, ::OKDKIKOBCLD* GPHJCLHKHPI, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>* EEKBIPHFODH)
	{
		return ((::AHAICPLGBAH*(*)(::System::Int32, ::OKDKIKOBCLD*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_DDIFLBDMEKN_OFFSET))(MGMDLMBEDJF, GPHJCLHKHPI, EEKBIPHFODH);
	}

	static ::System::Void CBOONLLCKMO(::MoleMole::EntityHandle KECKGDFIALJ, ::System::String* KKJEJNMLIFP, ::System::String* ANALPGENIIM, ::MoleMole::Config::AbilitySpecialParamType GOHFDGAIKDC, ::System::String* IKJGLEPBNLB)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::String*, ::MoleMole::Config::AbilitySpecialParamType, ::System::String*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_CBOONLLCKMO_OFFSET))(KECKGDFIALJ, KKJEJNMLIFP, ANALPGENIIM, GOHFDGAIKDC, IKJGLEPBNLB);
	}

	static ::System::Void PHHGIKOEPGI(::System::Int32 FCEKEIOALBM, ::MANBGDFAHPC* ONFPEMGDCJG, ::COJMBEOAKMD* FAPDINNJMDB)
	{
		return ((::System::Void(*)(::System::Int32, ::MANBGDFAHPC*, ::COJMBEOAKMD*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_PHHGIKOEPGI_OFFSET))(FCEKEIOALBM, ONFPEMGDCJG, FAPDINNJMDB);
	}

	static ::System::Boolean BCKCMMJFHCA(::MoleMole::Battle::Entity* FINEANOLAPH, ::System::String* JJAODNHNEOM)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_BCKCMMJFHCA_OFFSET))(FINEANOLAPH, JJAODNHNEOM);
	}

	static ::System::Void LONKHKOFDHE(::System::Int32 OCHOCJNKLJK, ::System::Boolean ILHLHFGNBBJ)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DPDFCHNENKL_LONKHKOFDHE_OFFSET))(OCHOCJNKLJK, ILHLHFGNBBJ);
	}

	static ::JCADHFOKIHK* PBCHOJCDKEB(::KFHNCJALFJK* ADEDEAIPOLH, ::System::Int32 DAFPHOHGIAO)
	{
		return ((::JCADHFOKIHK*(*)(::KFHNCJALFJK*, ::System::Int32))((::PBYTE)hIl2Cpp + DPDFCHNENKL_PBCHOJCDKEB_OFFSET))(ADEDEAIPOLH, DAFPHOHGIAO);
	}

	static ::KGOEPEBCOOB DFEAIHFPCIO_1(::AHAICPLGBAH* EPIDDDEJJDE, ::System::Boolean JKJDPPMEEOJ)
	{
		return ((::KGOEPEBCOOB(*)(::AHAICPLGBAH*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPDFCHNENKL_DFEAIHFPCIO_1_OFFSET))(EPIDDDEJJDE, JKJDPPMEEOJ);
	}

	static ::System::Void DBABIFFLECC(::MoleMole::EntityHandle HPADNAEINPK, ::System::Boolean ABCIOMINKGJ, ::System::Boolean BKDPDKIPIPK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DPDFCHNENKL_DBABIFFLECC_OFFSET))(HPADNAEINPK, ABCIOMINKGJ, BKDPDKIPIPK);
	}

	static ::System::Void KLHKBCNINLM(::OMGJIDKKHHO* AKBJMFGBNPJ, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>* JLOPJAOJNKK)
	{
		return ((::System::Void(*)(::OMGJIDKKHHO*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_KLHKBCNINLM_OFFSET))(AKBJMFGBNPJ, JLOPJAOJNKK);
	}

	static ::System::Boolean IONOKNMEGJF_2(::MoleMole::Ability::InLevelAbilityTargetMask JKJCPEJGMGK, ::MoleMole::Ability::InLevelAbilityTargetMask DOAMHNAEFAI)
	{
		return ((::System::Boolean(*)(::MoleMole::Ability::InLevelAbilityTargetMask, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + DPDFCHNENKL_IONOKNMEGJF_2_OFFSET))(JKJCPEJGMGK, DOAMHNAEFAI);
	}

	static ::KGOEPEBCOOB DFEAIHFPCIO_2(::System::Int32 OJAFFOLDAJE, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>* EEKBIPHFODH, ::System::Boolean JKJDPPMEEOJ)
	{
		return ((::KGOEPEBCOOB(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPDFCHNENKL_DFEAIHFPCIO_2_OFFSET))(OJAFFOLDAJE, EEKBIPHFODH, JKJDPPMEEOJ);
	}

	static ::System::Void ONKMGGKLGNN(::System::Int32 JINGLNEMGNG)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + DPDFCHNENKL_ONKMGGKLGNN_OFFSET))(JINGLNEMGNG);
	}

	static ::System::Void FCNGJKFJJFJ(::CHFBODEJFBE* DEKJDEPKKLH, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FMOCCBMHBNN, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OOMPKLAPHIB)
	{
		return ((::System::Void(*)(::CHFBODEJFBE*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_FCNGJKFJJFJ_OFFSET))(DEKJDEPKKLH, FMOCCBMHBNN, OOMPKLAPHIB);
	}

	static ::System::Boolean MEKJGBOLEFJ(::System::Int32 OIKFFGKDHME, ::Share::EItemType JCHOHDBNCKJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + DPDFCHNENKL_MEKJGBOLEFJ_OFFSET))(OIKFFGKDHME, JCHOHDBNCKJ);
	}

	static ::System::Void LONKHKOFDHE_1(::FBGHHAHMAII* PKKMOBMCODB, ::System::Int32 OCHOCJNKLJK, ::System::Boolean ILHLHFGNBBJ)
	{
		return ((::System::Void(*)(::FBGHHAHMAII*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DPDFCHNENKL_LONKHKOFDHE_1_OFFSET))(PKKMOBMCODB, OCHOCJNKLJK, ILHLHFGNBBJ);
	}

	static ::System::Int32 MLLIHFMPLKD(::System::Int32 HKHHHJHCGKL)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + DPDFCHNENKL_MLLIHFMPLKD_OFFSET))(HKHHHJHCGKL);
	}

	static ::AHAICPLGBAH* DPNNJHBGLGK(::AOLDOKHEAOE* DEKJDEPKKLH)
	{
		return ((::AHAICPLGBAH*(*)(::AOLDOKHEAOE*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_DPNNJHBGLGK_OFFSET))(DEKJDEPKKLH);
	}

	static ::System::Boolean FJHIEPLEHHF(::KGOEPEBCOOB PHHDHIBOCKA, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>* JLOPJAOJNKK, ::AHAICPLGBAH*& EPIDDDEJJDE)
	{
		return ((::System::Boolean(*)(::KGOEPEBCOOB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*, ::AHAICPLGBAH*&))((::PBYTE)hIl2Cpp + DPDFCHNENKL_FJHIEPLEHHF_OFFSET))(PHHDHIBOCKA, JLOPJAOJNKK, EPIDDDEJJDE);
	}

	static ::System::Boolean HJCCLGCJLHG(::System::Int32 OIKFFGKDHME, ::System::Boolean MEAHGBLCFAK)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DPDFCHNENKL_HJCCLGCJLHG_OFFSET))(OIKFFGKDHME, MEAHGBLCFAK);
	}

	static ::System::Void FGPFEOJKCKA_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FMOCCBMHBNN, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OOMPKLAPHIB, ::Il2CppArray<::System::String*>* BDGAKOLJBNO)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DPDFCHNENKL_FGPFEOJKCKA_1_OFFSET))(FMOCCBMHBNN, OOMPKLAPHIB, BDGAKOLJBNO);
	}
};
