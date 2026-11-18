#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMNKPNNNNLE.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/IODFHIILJDG.h"

class ACNLKLCDALA;
class COCJHGGDBCA;
class DIAEPBNFKBO;
class FHPAJHLDJMC;
class GEIHCPAOKKK;
class JOOHBDMHGCA;
class NLNIIPDCABP;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace StateTreeCore { class StateTree; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { template <typename T> class ManagedListJobWrapper_1; }
namespace UnrealTypes { template <typename T> class ManagedStructListJobWrapper_1; }

#define FNDMKBCCHFG_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x142ACEF0)
#define FNDMKBCCHFG_BOKMIPPDBAA_OFFSET UNITYSDK_OFFSET(0x142B0C20)
#define FNDMKBCCHFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142ACF70)
#define FNDMKBCCHFG_EADHAPNHMCP_OFFSET UNITYSDK_OFFSET(0x142ADA50)
#define FNDMKBCCHFG_EBMCJJDLCKE_OFFSET UNITYSDK_OFFSET(0x14297060)
#define FNDMKBCCHFG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x142ACF30)
#define FNDMKBCCHFG_EELPMKPIMPL_OFFSET UNITYSDK_OFFSET(0x142AED00)
#define FNDMKBCCHFG_FCBDNAHEGJK_OFFSET UNITYSDK_OFFSET(0x142AF0D0)
#define FNDMKBCCHFG_FICAEPFILHJ_OFFSET UNITYSDK_OFFSET(0x142AE3C0)
#define FNDMKBCCHFG_FPJDEKCIHCI_OFFSET UNITYSDK_OFFSET(0x142AF510)
#define FNDMKBCCHFG_GDOBPKBOAHK_OFFSET UNITYSDK_OFFSET(0x142AE510)
#define FNDMKBCCHFG_GGBGKFLGPJE_OFFSET UNITYSDK_OFFSET(0x142AD900)
#define FNDMKBCCHFG_GOCPELKCGHP_OFFSET UNITYSDK_OFFSET(0x142AE7C0)
#define FNDMKBCCHFG_JOLAEGADKBL_OFFSET UNITYSDK_OFFSET(0x142B03F0)
#define FNDMKBCCHFG_KGKBIDDGHHN_OFFSET UNITYSDK_OFFSET(0x142AF1E0)
#define FNDMKBCCHFG_KHGPLGMDOFC_OFFSET UNITYSDK_OFFSET(0x142ACC10)
#define FNDMKBCCHFG_KHLMHJFLJLD_OFFSET UNITYSDK_OFFSET(0x142AFCB0)
#define FNDMKBCCHFG_KPCFNIAJJOA_1_OFFSET UNITYSDK_OFFSET(0x142AE910)
#define FNDMKBCCHFG_KPCFNIAJJOA_2_OFFSET UNITYSDK_OFFSET(0x142AEFA0)
#define FNDMKBCCHFG_KPCFNIAJJOA_3_OFFSET UNITYSDK_OFFSET(0x142B02C0)
#define FNDMKBCCHFG_KPCFNIAJJOA_4_OFFSET UNITYSDK_OFFSET(0x142B04D0)
#define FNDMKBCCHFG_KPCFNIAJJOA_5_OFFSET UNITYSDK_OFFSET(0x142B0600)
#define FNDMKBCCHFG_KPCFNIAJJOA_6_OFFSET UNITYSDK_OFFSET(0x142B0730)
#define FNDMKBCCHFG_KPCFNIAJJOA_7_OFFSET UNITYSDK_OFFSET(0x142B0860)
#define FNDMKBCCHFG_KPCFNIAJJOA_8_OFFSET UNITYSDK_OFFSET(0x142B0990)
#define FNDMKBCCHFG_KPCFNIAJJOA_OFFSET UNITYSDK_OFFSET(0x142AD910)
#define FNDMKBCCHFG_NEGDINHCELN_1_OFFSET UNITYSDK_OFFSET(0x142AE660)
#define FNDMKBCCHFG_NEGDINHCELN_2_OFFSET UNITYSDK_OFFSET(0x142AEA40)
#define FNDMKBCCHFG_NEGDINHCELN_3_OFFSET UNITYSDK_OFFSET(0x142AEBA0)
#define FNDMKBCCHFG_NEGDINHCELN_4_OFFSET UNITYSDK_OFFSET(0x142AEE40)
#define FNDMKBCCHFG_NEGDINHCELN_5_OFFSET UNITYSDK_OFFSET(0x142AF3A0)
#define FNDMKBCCHFG_NEGDINHCELN_6_OFFSET UNITYSDK_OFFSET(0x142B0AC0)
#define FNDMKBCCHFG_NEGDINHCELN_7_OFFSET UNITYSDK_OFFSET(0x142B0F10)
#define FNDMKBCCHFG_NEGDINHCELN_8_OFFSET UNITYSDK_OFFSET(0x142B1070)
#define FNDMKBCCHFG_NEGDINHCELN_OFFSET UNITYSDK_OFFSET(0x142ADB80)
#define FNDMKBCCHFG_NEHKDFCLIMB_OFFSET UNITYSDK_OFFSET(0x142AF750)
#define FNDMKBCCHFG_NJFHNNIEFAA_OFFSET UNITYSDK_OFFSET(0x142AE270)
#define FNDMKBCCHFG_ONCREATE_OFFSET UNITYSDK_OFFSET(0x142ACA80)
#define FNDMKBCCHFG_PGIOJGFELDG_OFFSET UNITYSDK_OFFSET(0x142B0400)
#define FNDMKBCCHFG_PKJPAOKIGND_OFFSET UNITYSDK_OFFSET(0x142ADCE0)
#define FNDMKBCCHFG__CCTOR_OFFSET UNITYSDK_OFFSET(0x142AD7E0)
#define FNDMKBCCHFG__CTOR_OFFSET UNITYSDK_OFFSET(0x142AD410)

inline static constexpr unsigned int FNDMKBCCHFG_TypeDefinitionIndex = 72662;

class FNDMKBCCHFG
{
public:
	static ::System::Action_2<::FHPAJHLDJMC*, ::COCJHGGDBCA*>** StaticGet_KBKLFFFIHHJ()
	{
		return (::System::Action_2<::FHPAJHLDJMC*, ::COCJHGGDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(FNDMKBCCHFG_TypeDefinitionIndex)->GetStaticField(0x3AD50);
	}
	static ::System::Action_2<::FHPAJHLDJMC*, ::COCJHGGDBCA*>** StaticGet_JBOLNAJIEEA()
	{
		return (::System::Action_2<::FHPAJHLDJMC*, ::COCJHGGDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(FNDMKBCCHFG_TypeDefinitionIndex)->GetStaticField(0x3AD58);
	}
	static ::System::Action_2<::FHPAJHLDJMC*, ::GEIHCPAOKKK*>** StaticGet_MGEFMNOALJP()
	{
		return (::System::Action_2<::FHPAJHLDJMC*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(FNDMKBCCHFG_TypeDefinitionIndex)->GetStaticField(0x3AD60);
	}
	static ::System::Action_6<::FHPAJHLDJMC*, ::DIAEPBNFKBO*, ::GEIHCPAOKKK*, ::JOOHBDMHGCA*, ::NLNIIPDCABP*, ::ACNLKLCDALA*>** StaticGet_JNJGMIIHHEP()
	{
		return (::System::Action_6<::FHPAJHLDJMC*, ::DIAEPBNFKBO*, ::GEIHCPAOKKK*, ::JOOHBDMHGCA*, ::NLNIIPDCABP*, ::ACNLKLCDALA*>**)Il2CppClass::FromTypeDefinitionIndex(FNDMKBCCHFG_TypeDefinitionIndex)->GetStaticField(0x3AD68);
	}
	static ::System::Boolean* StaticGet_HGOJMEENKHC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FNDMKBCCHFG_TypeDefinitionIndex)->GetStaticField(0xD880);
	}
	static ::System::Int32* StaticGet_DNDCFNGNDJE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNDMKBCCHFG_TypeDefinitionIndex)->GetStaticField(0xD884);
	}
	static ::System::Int32* StaticGet_PEMAJLBPBAA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNDMKBCCHFG_TypeDefinitionIndex)->GetStaticField(0xD888);
	}
	// static const ::System::Int32 OEGPIBJDMLI = 0x80; // 0x0
	::UnrealTypes::ManagedStructListJobWrapper_1<::StateTreeCore::StateTreeInstanceData>* BOLGKDHEJFA; // 0x10
	::UnrealTypes::ManagedListJobWrapper_1<::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>>* APLLELOBEPF; // 0x18
	::UnrealTypes::ManagedListJobWrapper_1<::System::Object*>* DDJOLIBHMFD; // 0x20
	::UnrealTypes::ManagedListJobWrapper_1<::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>>* GOOEBPCOBBG; // 0x28
	::System::Collections::Generic::List_1<::StateTreeCore::StateTree*>* HAEJDHECLMM; // 0x30
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::AMNKPNNNNLE>* HLBHEPIHGEB; // 0x38
	::Nap::NapECS::EcsFilter* EBBKAPGNBKD; // 0x40
	::Nap::NapECS::EcsFilter* DCPDEKKGFCM; // 0x48
	::UnrealTypes::ManagedListJobWrapper_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>* HOHOHPHGHBO; // 0x50
	::System::Boolean NOJGHBCGHPM; // 0x58
	::System::Boolean _BDABLMBNFFP_k__BackingField; // 0x59
	::System::Byte _padding0[0x2];
	::System::Int32 IGJBGDILMNP; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNDMKBCCHFG__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_ONCREATE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_DISPOSE_OFFSET))(this);
	}

	::System::Boolean GGBGKFLGPJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_GGBGKFLGPJE_OFFSET))(this);
	}

	::System::Boolean KPCFNIAJJOA(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Single))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean NEGDINHCELN(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::Foundation::Unreal::FName& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Void PKJPAOKIGND(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_PKJPAOKIGND_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean NEGDINHCELN_1(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Boolean& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Boolean&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_1_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	static ::System::Void GOCPELKCGHP(::FHPAJHLDJMC* BAMJHGGDHFH, ::COCJHGGDBCA* DFAJBFNNHJG)
	{
		return ((::System::Void(*)(::FHPAJHLDJMC*, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_GOCPELKCGHP_OFFSET))(BAMJHGGDHFH, DFAJBFNNHJG);
	}

	::System::Boolean KPCFNIAJJOA_1(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::UInt32))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_1_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean NEGDINHCELN_2(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Int32&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_2_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean EADHAPNHMCP(::IODFHIILJDG PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_EADHAPNHMCP_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean NEGDINHCELN_3(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Double& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Double&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_3_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean EELPMKPIMPL(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::UnrealTypes::Object* EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::UnrealTypes::Object*))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_EELPMKPIMPL_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean NEGDINHCELN_4(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::UInt64& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::UInt64&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_4_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean KPCFNIAJJOA_2(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::UInt64))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_2_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	static ::System::Boolean FCBDNAHEGJK(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_FCBDNAHEGJK_OFFSET))(NJNCGJLHLKC);
	}

	::System::Void KGKBIDDGHHN(::IODFHIILJDG PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::IODFHIILJDG))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KGKBIDDGHHN_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void KHGPLGMDOFC(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KHGPLGMDOFC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean NEGDINHCELN_5(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Single&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_5_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	static ::System::Void FPJDEKCIHCI(::FHPAJHLDJMC* BAMJHGGDHFH, ::COCJHGGDBCA* DFAJBFNNHJG)
	{
		return ((::System::Void(*)(::FHPAJHLDJMC*, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_FPJDEKCIHCI_OFFSET))(BAMJHGGDHFH, DFAJBFNNHJG);
	}

	::IODFHIILJDG NEHKDFCLIMB(::Foundation::AssetPath OIIHCACKLHD, ::UnrealTypes::Object* FFJBLFCLKLF, ::System::Int32 JNEELHNENBM)
	{
		return ((::IODFHIILJDG(*)(::PVOID, ::Foundation::AssetPath, ::UnrealTypes::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEHKDFCLIMB_OFFSET))(this, OIIHCACKLHD, FFJBLFCLKLF, JNEELHNENBM);
	}

	::System::Boolean KPCFNIAJJOA_3(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Int32))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_3_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Void JOLAEGADKBL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_JOLAEGADKBL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GDOBPKBOAHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_GDOBPKBOAHK_OFFSET))(this);
	}

	::AMNKPNNNNLE KHLMHJFLJLD(::Foundation::AssetPath OIIHCACKLHD)
	{
		return ((::AMNKPNNNNLE(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KHLMHJFLJLD_OFFSET))(this, OIIHCACKLHD);
	}

	::System::Void FICAEPFILHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_FICAEPFILHJ_OFFSET))(this);
	}

	static ::System::Void PGIOJGFELDG(::FHPAJHLDJMC* BAMJHGGDHFH, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::FHPAJHLDJMC*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_PGIOJGFELDG_OFFSET))(BAMJHGGDHFH, OHPJHPEOFLD);
	}

	::System::Void EBMCJJDLCKE(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FGameplayTag BPIKEDKEBIC)
	{
		return ((::System::Void(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_EBMCJJDLCKE_OFFSET))(this, PHHDHIBOCKA, BPIKEDKEBIC);
	}

	::System::Boolean KPCFNIAJJOA_4(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Double EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Double))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_4_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean KPCFNIAJJOA_5(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Int64))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_5_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean KPCFNIAJJOA_6(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Boolean))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_6_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean KPCFNIAJJOA_7(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::Foundation::Unreal::FName EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_7_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean KPCFNIAJJOA_8(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Byte EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Byte))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_KPCFNIAJJOA_8_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean NEGDINHCELN_6(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::UInt32&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_6_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	static ::System::Void BOKMIPPDBAA(::FHPAJHLDJMC* BAMJHGGDHFH, ::DIAEPBNFKBO* DLFOBFANLOF, ::GEIHCPAOKKK* OHPJHPEOFLD, ::JOOHBDMHGCA* DCGAHNLABEF, ::NLNIIPDCABP* FNFNDIBMPDE, ::ACNLKLCDALA* PPDNIHPGCOJ)
	{
		return ((::System::Void(*)(::FHPAJHLDJMC*, ::DIAEPBNFKBO*, ::GEIHCPAOKKK*, ::JOOHBDMHGCA*, ::NLNIIPDCABP*, ::ACNLKLCDALA*))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_BOKMIPPDBAA_OFFSET))(BAMJHGGDHFH, DLFOBFANLOF, OHPJHPEOFLD, DCGAHNLABEF, FNFNDIBMPDE, PPDNIHPGCOJ);
	}

	::System::Boolean NEGDINHCELN_7(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Byte& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Byte&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_7_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}

	::System::Boolean NJFHNNIEFAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NJFHNNIEFAA_OFFSET))(this);
	}

	::System::Boolean NEGDINHCELN_8(::IODFHIILJDG PHHDHIBOCKA, ::Foundation::Unreal::FName CJGAMEOMLIO, ::System::Int64& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IODFHIILJDG, ::Foundation::Unreal::FName, ::System::Int64&))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_NEGDINHCELN_8_OFFSET))(this, PHHDHIBOCKA, CJGAMEOMLIO, EGEGIMGMJHN);
	}
};
