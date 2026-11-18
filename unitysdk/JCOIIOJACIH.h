#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMLLGKLKDCK_ACBGPILEPBK.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class CHFBODEJFBE;
class JOFADKCBAEC;
class LCDHCHIECKF;
class LECOKMMCHKC;
class LHHNKBDEMGO;
class LNODBDPJGFL;
class MIFCLIKMJFB;
class NOAAJBDPLDH;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class DPHPJEFLIMG_2;

#define JCOIIOJACIH_ANJAKJGEGEC_1_OFFSET UNITYSDK_OFFSET(0x14FA34C0)
#define JCOIIOJACIH_ANJAKJGEGEC_OFFSET UNITYSDK_OFFSET(0x14FA3240)
#define JCOIIOJACIH_BAGEJAAIHDC_OFFSET UNITYSDK_OFFSET(0x14FA45F0)
#define JCOIIOJACIH_BGDAHKMMPKB_OFFSET UNITYSDK_OFFSET(0x14FA4CD0)
#define JCOIIOJACIH_BJEFGFMMGJD_OFFSET UNITYSDK_OFFSET(0x14FA63E0)
#define JCOIIOJACIH_DDLDJONBAAG_OFFSET UNITYSDK_OFFSET(0x14FA4940)
#define JCOIIOJACIH_DJDNENOPKHH_OFFSET UNITYSDK_OFFSET(0x14F9FA50)
#define JCOIIOJACIH_DOAAKKPLNIG_1_OFFSET UNITYSDK_OFFSET(0x14FA5550)
#define JCOIIOJACIH_DOAAKKPLNIG_OFFSET UNITYSDK_OFFSET(0x14FA4AC0)
#define JCOIIOJACIH_DOJHFCPJHJO_OFFSET UNITYSDK_OFFSET(0x14FA78D0)
#define JCOIIOJACIH_ECHJNIEAJGP_OFFSET UNITYSDK_OFFSET(0x14FA5AE0)
#define JCOIIOJACIH_EGADGALHPFA_OFFSET UNITYSDK_OFFSET(0x14FA2C20)
#define JCOIIOJACIH_ELNHNFKMLOI_OFFSET UNITYSDK_OFFSET(0x14FA41B0)
#define JCOIIOJACIH_FOEAMNDKEKN_OFFSET UNITYSDK_OFFSET(0x14FA4720)
#define JCOIIOJACIH_GDBPMPJNJBG_OFFSET UNITYSDK_OFFSET(0x14FA3010)
#define JCOIIOJACIH_GGIHLACLHNO_OFFSET UNITYSDK_OFFSET(0x14FA3810)
#define JCOIIOJACIH_GKAEEGHNCAA_OFFSET UNITYSDK_OFFSET(0x14FA4D90)
#define JCOIIOJACIH_HAOKFKEHENN_OFFSET UNITYSDK_OFFSET(0x14FA6440)
#define JCOIIOJACIH_HFIACJCNNFN_OFFSET UNITYSDK_OFFSET(0x14FA62F0)
#define JCOIIOJACIH_INELKOADDHI_OFFSET UNITYSDK_OFFSET(0x14FA4E20)
#define JCOIIOJACIH_JHEFKJILFDA_OFFSET UNITYSDK_OFFSET(0x14FA6670)
#define JCOIIOJACIH_JIJBFEJCPOJ_1_OFFSET UNITYSDK_OFFSET(0x14FA4A00)
#define JCOIIOJACIH_JIJBFEJCPOJ_2_OFFSET UNITYSDK_OFFSET(0x14FA6940)
#define JCOIIOJACIH_JIJBFEJCPOJ_3_OFFSET UNITYSDK_OFFSET(0x14FA7400)
#define JCOIIOJACIH_JIJBFEJCPOJ_OFFSET UNITYSDK_OFFSET(0x14FA44F0)
#define JCOIIOJACIH_JJFCDHHCNKD_1_OFFSET UNITYSDK_OFFSET(0x14FA2140)
#define JCOIIOJACIH_JJFCDHHCNKD_OFFSET UNITYSDK_OFFSET(0x14FA2890)
#define JCOIIOJACIH_JMBBNMHJAIE_1_OFFSET UNITYSDK_OFFSET(0x14FA74C0)
#define JCOIIOJACIH_JMBBNMHJAIE_OFFSET UNITYSDK_OFFSET(0x14FA4A70)
#define JCOIIOJACIH_KMCMLALACGK_OFFSET UNITYSDK_OFFSET(0x14FA2E00)
#define JCOIIOJACIH_LDEAJGHJFOH_OFFSET UNITYSDK_OFFSET(0x14FA6070)
#define JCOIIOJACIH_LDGGFDEFBLL_OFFSET UNITYSDK_OFFSET(0x14FA7500)
#define JCOIIOJACIH_LMEKIGAJNLE_OFFSET UNITYSDK_OFFSET(0x14FA5C60)
#define JCOIIOJACIH_LMLFAKOHBBC_OFFSET UNITYSDK_OFFSET(0x14FA4F60)
#define JCOIIOJACIH_MDJJLKANENM_OFFSET UNITYSDK_OFFSET(0x14FA29F0)
#define JCOIIOJACIH_MICDKIHAOAD_OFFSET UNITYSDK_OFFSET(0x14FA4080)
#define JCOIIOJACIH_MJBCAEKGELK_OFFSET UNITYSDK_OFFSET(0x14FA24E0)
#define JCOIIOJACIH_MKJOEAGCLDE_OFFSET UNITYSDK_OFFSET(0x14FA5C00)
#define JCOIIOJACIH_MMICGKFFCBH_OFFSET UNITYSDK_OFFSET(0x14FA7670)
#define JCOIIOJACIH_MOHADPKCMLC_OFFSET UNITYSDK_OFFSET(0x14FA5F90)
#define JCOIIOJACIH_NFMEDHJGIIL_OFFSET UNITYSDK_OFFSET(0x14FA5420)
#define JCOIIOJACIH_NNLPKGKMMDA_OFFSET UNITYSDK_OFFSET(0x14FA1AD0)
#define JCOIIOJACIH_OAFNOMHLLEP_OFFSET UNITYSDK_OFFSET(0x14FA3BC0)
#define JCOIIOJACIH_ODMMOFKDMPJ_OFFSET UNITYSDK_OFFSET(0x14FA61A0)
#define JCOIIOJACIH_OHCFEKCFPAF_OFFSET UNITYSDK_OFFSET(0x14FA51D0)
#define JCOIIOJACIH_OLHMPMJILIF_OFFSET UNITYSDK_OFFSET(0x14FA55E0)
#define JCOIIOJACIH_ONIOHIMJEBG_OFFSET UNITYSDK_OFFSET(0x14FA6A30)
#define JCOIIOJACIH_OPGMONDCCGB_OFFSET UNITYSDK_OFFSET(0x14FA2ED0)
#define JCOIIOJACIH_PKAPCFGMJKK_OFFSET UNITYSDK_OFFSET(0x14FA3620)
#define JCOIIOJACIH__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F9D760)

inline static constexpr unsigned int JCOIIOJACIH_TypeDefinitionIndex = 41202;

class JCOIIOJACIH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty>** StaticGet_NFEMONGHBGH()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A200);
	}
	static ::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::String*, ::System::String*>** StaticGet_CKAPKCCIPGJ()
	{
		return (::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A208);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_LDNBGMPIMKE()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A210);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_PCMPJDNCHAP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A218);
	}
	static ::System::String** StaticGet_FLOEEJOAAME()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A220);
	}
	static ::DPHPJEFLIMG_2<::System::Int32, ::System::Int32>** StaticGet_OMEIBAOCFLL()
	{
		return (::DPHPJEFLIMG_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A228);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*>** StaticGet_JNDPKDIJGAP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A230);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::JOFADKCBAEC*>** StaticGet_OCCIEHJDJBH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::JOFADKCBAEC*>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A238);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_LJPMLECNANP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A240);
	}
	static ::System::String** StaticGet_GPJDJOBCLED()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A248);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::JOFADKCBAEC*>** StaticGet_GELBLGPMAKM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::JOFADKCBAEC*>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A250);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_MKKAIINDOIG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A258);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_HDHBAGCNJKG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0x3A260);
	}
	static ::System::Boolean* StaticGet_LPJEKAKHNLO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0xD6B0);
	}
	static ::System::Boolean* StaticGet_HHOGDBHOKFP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0xD6B1);
	}
	static ::System::Int32* StaticGet_GFKIKOJJPPN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(JCOIIOJACIH_TypeDefinitionIndex)->GetStaticField(0xD6B4);
	}
	// static const ::System::Single ONKDENEJJPL; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH__CCTOR_OFFSET))();
	}

	static ::System::UInt32 ANJAKJGEGEC(::NOAAJBDPLDH* OCGGIHJNIJB)
	{
		return ((::System::UInt32(*)(::NOAAJBDPLDH*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_ANJAKJGEGEC_OFFSET))(OCGGIHJNIJB);
	}

	static ::System::Boolean PKAPCFGMJKK(::System::Object* KHILBNJIAKA)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_PKAPCFGMJKK_OFFSET))(KHILBNJIAKA);
	}

	static ::System::Void OAFNOMHLLEP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH_OAFNOMHLLEP_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* MICDKIHAOAD(::MoleMole::Config::BuffGroupName IJDLBAIFLFA)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::MoleMole::Config::BuffGroupName))((::PBYTE)hIl2Cpp + JCOIIOJACIH_MICDKIHAOAD_OFFSET))(IJDLBAIFLFA);
	}

	static ::System::UInt32 GGIHLACLHNO(::System::String* LCEGOBBEECM)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_GGIHLACLHNO_OFFSET))(LCEGOBBEECM);
	}

	static ::System::String* ELNHNFKMLOI(::NOAAJBDPLDH* OCGGIHJNIJB)
	{
		return ((::System::String*(*)(::NOAAJBDPLDH*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_ELNHNFKMLOI_OFFSET))(OCGGIHJNIJB);
	}

	static ::System::Boolean JIJBFEJCPOJ(::MoleMole::Config::ValueCompareType FAMMCEJDLFE, ::System::Double KIADGHJNLAC, ::System::Double KHMMANBNPII, ::System::Double OMKFOIHPJCK)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JIJBFEJCPOJ_OFFSET))(FAMMCEJDLFE, KIADGHJNLAC, KHMMANBNPII, OMKFOIHPJCK);
	}

	static ::System::String* BAGEJAAIHDC(::System::UInt32 CBIEJMBPAIC)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JCOIIOJACIH_BAGEJAAIHDC_OFFSET))(CBIEJMBPAIC);
	}

	static ::System::Void FOEAMNDKEKN(::CHFBODEJFBE* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::CHFBODEJFBE*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_FOEAMNDKEKN_OFFSET))(DEKJDEPKKLH);
	}

	static ::System::Boolean JIJBFEJCPOJ_1(::MoleMole::Config::ValueCompareType FAMMCEJDLFE, ::System::Boolean KIADGHJNLAC, ::System::Boolean KHMMANBNPII)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JIJBFEJCPOJ_1_OFFSET))(FAMMCEJDLFE, KIADGHJNLAC, KHMMANBNPII);
	}

	static ::System::Boolean JMBBNMHJAIE(::System::String* LCEGOBBEECM)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JMBBNMHJAIE_OFFSET))(LCEGOBBEECM);
	}

	static ::System::Void DOAAKKPLNIG(::System::Collections::Generic::Dictionary_2<::System::String*, ::LCDHCHIECKF*>* IBJIOOMOMAD)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::LCDHCHIECKF*>*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_DOAAKKPLNIG_OFFSET))(IBJIOOMOMAD);
	}

	static ::System::Void BGDAHKMMPKB(::MoleMole::Config::BaseProperty& BDCGMCJOBOD)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty&))((::PBYTE)hIl2Cpp + JCOIIOJACIH_BGDAHKMMPKB_OFFSET))(BDCGMCJOBOD);
	}

	static ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>* GKAEEGHNCAA(::MoleMole::Config::BaseProperty NBEGLMMLNCL, ::MoleMole::Config::PropertyModifyFunction FJDOCPKEACA)
	{
		return ((::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*(*)(::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + JCOIIOJACIH_GKAEEGHNCAA_OFFSET))(NBEGLMMLNCL, FJDOCPKEACA);
	}

	static ::System::UInt32 INELKOADDHI(::System::String* LCEGOBBEECM)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_INELKOADDHI_OFFSET))(LCEGOBBEECM);
	}

	static ::System::Void OPGMONDCCGB(::System::String* GLBEOLEENIJ, ::System::Int32 BOBBHFPEPHC, ::DMLLGKLKDCK_ACBGPILEPBK DHODOEDDIEH, ::System::Single PDFEDOCLDHG, ::System::Single NJNOHDNDNAF, ::System::Single GKBHFDMJAFJ)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::DMLLGKLKDCK_ACBGPILEPBK, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCOIIOJACIH_OPGMONDCCGB_OFFSET))(GLBEOLEENIJ, BOBBHFPEPHC, DHODOEDDIEH, PDFEDOCLDHG, NJNOHDNDNAF, GKBHFDMJAFJ);
	}

	static ::System::Void OHCFEKCFPAF(::LECOKMMCHKC* JFPDJGAMELP)
	{
		return ((::System::Void(*)(::LECOKMMCHKC*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_OHCFEKCFPAF_OFFSET))(JFPDJGAMELP);
	}

	static ::System::Void DOAAKKPLNIG_1(::System::String* KKJEJNMLIFP, ::LCDHCHIECKF* GOCJLFJCHOF)
	{
		return ((::System::Void(*)(::System::String*, ::LCDHCHIECKF*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_DOAAKKPLNIG_1_OFFSET))(KKJEJNMLIFP, GOCJLFJCHOF);
	}

	static ::System::Void ECHJNIEAJGP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH_ECHJNIEAJGP_OFFSET))();
	}

	static ::System::Void KMCMLALACGK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH_KMCMLALACGK_OFFSET))();
	}

	static ::System::Void JJFCDHHCNKD(::System::String* KEKLFCCONCL, ::System::Single PDFEDOCLDHG, ::DMLLGKLKDCK_ACBGPILEPBK LOACBJBANNC)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::DMLLGKLKDCK_ACBGPILEPBK))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JJFCDHHCNKD_OFFSET))(KEKLFCCONCL, PDFEDOCLDHG, LOACBJBANNC);
	}

	static ::MoleMole::Config::BaseProperty MKJOEAGCLDE(::MoleMole::Config::DamageElementType HELLOIIPKGF)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + JCOIIOJACIH_MKJOEAGCLDE_OFFSET))(HELLOIIPKGF);
	}

	static ::System::Void GDBPMPJNJBG(::System::Int32 KEHNCKBIBFA)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + JCOIIOJACIH_GDBPMPJNJBG_OFFSET))(KEHNCKBIBFA);
	}

	static ::System::Void LMEKIGAJNLE(::MIFCLIKMJFB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::MIFCLIKMJFB*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_LMEKIGAJNLE_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Void MOHADPKCMLC(::Il2CppArray<::LHHNKBDEMGO*>* MPNKEAFFMDO)
	{
		return ((::System::Void(*)(::Il2CppArray<::LHHNKBDEMGO*>*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_MOHADPKCMLC_OFFSET))(MPNKEAFFMDO);
	}

	static ::System::Void ODMMOFKDMPJ(::System::Object* JFPDJGAMELP)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_ODMMOFKDMPJ_OFFSET))(JFPDJGAMELP);
	}

	static ::System::Boolean HFIACJCNNFN(::System::String* KEKFPKKIIFB)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_HFIACJCNNFN_OFFSET))(KEKFPKKIIFB);
	}

	static ::System::Void NFMEDHJGIIL(::LNODBDPJGFL* AIMFINJPAOB)
	{
		return ((::System::Void(*)(::LNODBDPJGFL*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_NFMEDHJGIIL_OFFSET))(AIMFINJPAOB);
	}

	static ::MoleMole::Config::BaseProperty BJEFGFMMGJD(::MoleMole::Config::DamageElementType HELLOIIPKGF)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + JCOIIOJACIH_BJEFGFMMGJD_OFFSET))(HELLOIIPKGF);
	}

	static ::System::Boolean HAOKFKEHENN(::System::String* MCOHLHMKLIP, ::System::String*& PFGLFMEKJMD)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + JCOIIOJACIH_HAOKFKEHENN_OFFSET))(MCOHLHMKLIP, PFGLFMEKJMD);
	}

	static ::System::Void JHEFKJILFDA(::System::String* KEKLFCCONCL, ::System::Single NJNOHDNDNAF, ::System::Single GKBHFDMJAFJ)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JHEFKJILFDA_OFFSET))(KEKLFCCONCL, NJNOHDNDNAF, GKBHFDMJAFJ);
	}

	static ::System::Boolean JIJBFEJCPOJ_2(::MoleMole::Config::ValueCompareType FAMMCEJDLFE, ::System::Single KIADGHJNLAC, ::System::Single KHMMANBNPII, ::System::Single OMKFOIHPJCK)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JIJBFEJCPOJ_2_OFFSET))(FAMMCEJDLFE, KIADGHJNLAC, KHMMANBNPII, OMKFOIHPJCK);
	}

	static ::System::Void ONIOHIMJEBG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH_ONIOHIMJEBG_OFFSET))();
	}

	static ::System::Void EGADGALHPFA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH_EGADGALHPFA_OFFSET))();
	}

	static ::System::Void DJDNENOPKHH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH_DJDNENOPKHH_OFFSET))();
	}

	static ::System::String* LMLFAKOHBBC(::System::String* GLBEOLEENIJ, ::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + JCOIIOJACIH_LMLFAKOHBBC_OFFSET))(GLBEOLEENIJ, BOBBHFPEPHC);
	}

	static ::System::Boolean JIJBFEJCPOJ_3(::MoleMole::Config::ValueCompareType FAMMCEJDLFE, ::System::String* KIADGHJNLAC, ::Foundation::AssetPath KHMMANBNPII)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::String*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JIJBFEJCPOJ_3_OFFSET))(FAMMCEJDLFE, KIADGHJNLAC, KHMMANBNPII);
	}

	static ::System::String* DDLDJONBAAG(::System::String* FCCLIEJAKLI)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_DDLDJONBAAG_OFFSET))(FCCLIEJAKLI);
	}

	static ::System::Void OLHMPMJILIF(::LCDHCHIECKF* GOCJLFJCHOF)
	{
		return ((::System::Void(*)(::LCDHCHIECKF*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_OLHMPMJILIF_OFFSET))(GOCJLFJCHOF);
	}

	static ::System::Void LDEAJGHJFOH(::LHHNKBDEMGO* KPDNJEDICCM)
	{
		return ((::System::Void(*)(::LHHNKBDEMGO*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_LDEAJGHJFOH_OFFSET))(KPDNJEDICCM);
	}

	static ::System::Void JJFCDHHCNKD_1(::System::String* KEKLFCCONCL, ::System::Single PDFEDOCLDHG, ::DMLLGKLKDCK_ACBGPILEPBK LOACBJBANNC, ::System::Single NJNOHDNDNAF, ::System::Single GKBHFDMJAFJ)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::DMLLGKLKDCK_ACBGPILEPBK, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JJFCDHHCNKD_1_OFFSET))(KEKLFCCONCL, PDFEDOCLDHG, LOACBJBANNC, NJNOHDNDNAF, GKBHFDMJAFJ);
	}

	static ::System::Boolean JMBBNMHJAIE_1(::System::UInt32 CBIEJMBPAIC)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JCOIIOJACIH_JMBBNMHJAIE_1_OFFSET))(CBIEJMBPAIC);
	}

	static ::System::Void NNLPKGKMMDA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH_NNLPKGKMMDA_OFFSET))();
	}

	static ::System::String* LDGGFDEFBLL(::System::UInt32 CBIEJMBPAIC)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JCOIIOJACIH_LDGGFDEFBLL_OFFSET))(CBIEJMBPAIC);
	}

	static ::NOAAJBDPLDH* MMICGKFFCBH(::System::String* LCEGOBBEECM, ::System::Boolean LMHPOCDDCCJ)
	{
		return ((::NOAAJBDPLDH*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCOIIOJACIH_MMICGKFFCBH_OFFSET))(LCEGOBBEECM, LMHPOCDDCCJ);
	}

	static ::System::Void MDJJLKANENM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOIIOJACIH_MDJJLKANENM_OFFSET))();
	}

	static ::System::String* DOJHFCPJHJO(::System::UInt32 CBIEJMBPAIC)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JCOIIOJACIH_DOJHFCPJHJO_OFFSET))(CBIEJMBPAIC);
	}

	static ::System::UInt32 ANJAKJGEGEC_1(::System::String* LCEGOBBEECM)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + JCOIIOJACIH_ANJAKJGEGEC_1_OFFSET))(LCEGOBBEECM);
	}

	static ::System::Void MJBCAEKGELK(::System::String* KEKLFCCONCL, ::System::Single PDFEDOCLDHG, ::DMLLGKLKDCK_ACBGPILEPBK LOACBJBANNC, ::System::Single NJNOHDNDNAF, ::System::Single GKBHFDMJAFJ)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::DMLLGKLKDCK_ACBGPILEPBK, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCOIIOJACIH_MJBCAEKGELK_OFFSET))(KEKLFCCONCL, PDFEDOCLDHG, LOACBJBANNC, NJNOHDNDNAF, GKBHFDMJAFJ);
	}
};
