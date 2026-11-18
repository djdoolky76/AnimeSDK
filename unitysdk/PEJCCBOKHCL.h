#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAHAIEHANOH.h"
#include "unitysdk/DDMGKHHODHG.h"
#include "unitysdk/FPODAIHJDDC.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/JPLGICECOCO.h"
#include "unitysdk/KBNDFLEHNKF.h"
#include "unitysdk/KGOEPEBCOOB.h"
#include "unitysdk/LLJHKEAFOAF.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/PNOMFAOHGFB.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/ValueTuple_2.h"

class BLCIDFMMHIL;
class EDMHICENINN;
class EJHHPFFPFOJ;
class EKBABGJMHHF;
class EPJAODADCEA;
class FAICBDNOMIA;
class GDELLMFABIM;
class MEDHLPGEEEG;
class NEKJAFKLINL;
class OCGFKOFBMNG;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define PEJCCBOKHCL_AAAKBGFLGBN_OFFSET UNITYSDK_OFFSET(0x119721D0)
#define PEJCCBOKHCL_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1196BE40)
#define PEJCCBOKHCL_ACJGAPNEACL_OFFSET UNITYSDK_OFFSET(0x1196C390)
#define PEJCCBOKHCL_AOIGGLLJJON_OFFSET UNITYSDK_OFFSET(0x1196D280)
#define PEJCCBOKHCL_BDMJLNCPCOD_OFFSET UNITYSDK_OFFSET(0x119742B0)
#define PEJCCBOKHCL_BFICJAGALLP_OFFSET UNITYSDK_OFFSET(0x1196DAA0)
#define PEJCCBOKHCL_CGBKBFNOPLF_OFFSET UNITYSDK_OFFSET(0x1196ED50)
#define PEJCCBOKHCL_CGIIMMEJDFG_OFFSET UNITYSDK_OFFSET(0x119737A0)
#define PEJCCBOKHCL_CHPNECFOAHO_1_OFFSET UNITYSDK_OFFSET(0x1196FE80)
#define PEJCCBOKHCL_CHPNECFOAHO_OFFSET UNITYSDK_OFFSET(0x1196FCE0)
#define PEJCCBOKHCL_CLDKGDMDELD_OFFSET UNITYSDK_OFFSET(0x11974920)
#define PEJCCBOKHCL_CLJMDIJDCIP_OFFSET UNITYSDK_OFFSET(0x119741F0)
#define PEJCCBOKHCL_CMEEPEGIIPO_OFFSET UNITYSDK_OFFSET(0x1196D650)
#define PEJCCBOKHCL_CNBJKEMDHOA_OFFSET UNITYSDK_OFFSET(0x1196FFD0)
#define PEJCCBOKHCL_COKNLJJHNNF_OFFSET UNITYSDK_OFFSET(0x11972490)
#define PEJCCBOKHCL_DECAGAEEDJE_OFFSET UNITYSDK_OFFSET(0x11970EA0)
#define PEJCCBOKHCL_DGLEPDFDBME_OFFSET UNITYSDK_OFFSET(0x11971830)
#define PEJCCBOKHCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1196BE80)
#define PEJCCBOKHCL_DJAJCFOIIDN_OFFSET UNITYSDK_OFFSET(0x11974400)
#define PEJCCBOKHCL_DLIMCEAGHFM_OFFSET UNITYSDK_OFFSET(0x11964D80)
#define PEJCCBOKHCL_DOACNBOLOOF_OFFSET UNITYSDK_OFFSET(0x11974410)
#define PEJCCBOKHCL_DPMCJHNDNLO_OFFSET UNITYSDK_OFFSET(0x1196F970)
#define PEJCCBOKHCL_ECOKKHCDKNH_OFFSET UNITYSDK_OFFSET(0x119703E0)
#define PEJCCBOKHCL_EDBFDOIHOED_OFFSET UNITYSDK_OFFSET(0x1196F260)
#define PEJCCBOKHCL_EDBPPBBCFDI_OFFSET UNITYSDK_OFFSET(0x119733D0)
#define PEJCCBOKHCL_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1196BF00)
#define PEJCCBOKHCL_EEJELKBCAFG_OFFSET UNITYSDK_OFFSET(0x1196FC20)
#define PEJCCBOKHCL_EELBFCNGPGH_OFFSET UNITYSDK_OFFSET(0x119712F0)
#define PEJCCBOKHCL_EFCPCFLHAKP_OFFSET UNITYSDK_OFFSET(0x1196D9E0)
#define PEJCCBOKHCL_EFGOADGCJMA_1_OFFSET UNITYSDK_OFFSET(0x1196DE50)
#define PEJCCBOKHCL_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x1196DC80)
#define PEJCCBOKHCL_EICNJJJGFPI_OFFSET UNITYSDK_OFFSET(0x1196E180)
#define PEJCCBOKHCL_ELDCNODMFJP_OFFSET UNITYSDK_OFFSET(0x1196F3B0)
#define PEJCCBOKHCL_EPMIDLFDPHA_OFFSET UNITYSDK_OFFSET(0x1196D660)
#define PEJCCBOKHCL_FFBADMAMPFD_OFFSET UNITYSDK_OFFSET(0x11971150)
#define PEJCCBOKHCL_FGGPLELDMIH_OFFSET UNITYSDK_OFFSET(0x11971260)
#define PEJCCBOKHCL_FJMHCNINFPD_OFFSET UNITYSDK_OFFSET(0x1196F500)
#define PEJCCBOKHCL_FMLAJBPIAON_OFFSET UNITYSDK_OFFSET(0x119744D0)
#define PEJCCBOKHCL_GFOFPFICNFN_OFFSET UNITYSDK_OFFSET(0x11971BC0)
#define PEJCCBOKHCL_GJOGDOPNEKO_OFFSET UNITYSDK_OFFSET(0x11964D90)
#define PEJCCBOKHCL_GNAINJLKHJH_OFFSET UNITYSDK_OFFSET(0x11971740)
#define PEJCCBOKHCL_GNFIHHECANN_OFFSET UNITYSDK_OFFSET(0x1196EE50)
#define PEJCCBOKHCL_GOGMLKALNOD_OFFSET UNITYSDK_OFFSET(0x1196C380)
#define PEJCCBOKHCL_HGNPMKEKPDF_OFFSET UNITYSDK_OFFSET(0x1196E6D0)
#define PEJCCBOKHCL_HNHAKMOFHFK_OFFSET UNITYSDK_OFFSET(0x1196EFB0)
#define PEJCCBOKHCL_HPFLBMLGBPE_OFFSET UNITYSDK_OFFSET(0x11974B40)
#define PEJCCBOKHCL_HPODMFGIMNH_OFFSET UNITYSDK_OFFSET(0x1196EAB0)
#define PEJCCBOKHCL_IKKFGPECLPB_OFFSET UNITYSDK_OFFSET(0x11972C70)
#define PEJCCBOKHCL_IOFOLHBBJKE_OFFSET UNITYSDK_OFFSET(0x1196EE40)
#define PEJCCBOKHCL_JMOBDCAFCGO_OFFSET UNITYSDK_OFFSET(0x1196D230)
#define PEJCCBOKHCL_JNEPFJFAELL_OFFSET UNITYSDK_OFFSET(0x1196F920)
#define PEJCCBOKHCL_JOPLNNDGOGP_OFFSET UNITYSDK_OFFSET(0x1196D220)
#define PEJCCBOKHCL_KAFAEPIKNGO_OFFSET UNITYSDK_OFFSET(0x11970CF0)
#define PEJCCBOKHCL_KBPLDHAENAM_OFFSET UNITYSDK_OFFSET(0x11972430)
#define PEJCCBOKHCL_KCIDFOBJBII_OFFSET UNITYSDK_OFFSET(0x11974C00)
#define PEJCCBOKHCL_KNELCNGENEP_OFFSET UNITYSDK_OFFSET(0x11970750)
#define PEJCCBOKHCL_KOKMEIOOFIO_OFFSET UNITYSDK_OFFSET(0x1196E230)
#define PEJCCBOKHCL_LAOCLABONOG_OFFSET UNITYSDK_OFFSET(0x11974190)
#define PEJCCBOKHCL_LDMMJPPEIFD_OFFSET UNITYSDK_OFFSET(0x1196E040)
#define PEJCCBOKHCL_LJIJOOICDPG_OFFSET UNITYSDK_OFFSET(0x11971C80)
#define PEJCCBOKHCL_LNNILNGDCKD_OFFSET UNITYSDK_OFFSET(0x11972560)
#define PEJCCBOKHCL_LPNCJJFPFIF_OFFSET UNITYSDK_OFFSET(0x11973760)
#define PEJCCBOKHCL_MCAAANPDDMN_OFFSET UNITYSDK_OFFSET(0x11974C10)
#define PEJCCBOKHCL_MHLGAILIFIJ_OFFSET UNITYSDK_OFFSET(0x1196C950)
#define PEJCCBOKHCL_MIKKPKKPGNN_OFFSET UNITYSDK_OFFSET(0x11974740)
#define PEJCCBOKHCL_MLPELCGEBNN_OFFSET UNITYSDK_OFFSET(0x11972170)
#define PEJCCBOKHCL_MMKMCHKANCA_OFFSET UNITYSDK_OFFSET(0x1196EBD0)
#define PEJCCBOKHCL_MOABMLPBJAJ_OFFSET UNITYSDK_OFFSET(0x11973550)
#define PEJCCBOKHCL_NDGLFDJPKOE_OFFSET UNITYSDK_OFFSET(0x1196C340)
#define PEJCCBOKHCL_NDPALLCOMKC_OFFSET UNITYSDK_OFFSET(0x11970B70)
#define PEJCCBOKHCL_NHFDCHOGBDC_OFFSET UNITYSDK_OFFSET(0x11965C90)
#define PEJCCBOKHCL_NHKJKFAJDIO_OFFSET UNITYSDK_OFFSET(0x1196F800)
#define PEJCCBOKHCL_NLOCOMDKBPD_OFFSET UNITYSDK_OFFSET(0x11970D40)
#define PEJCCBOKHCL_NMPMELKNKPC_OFFSET UNITYSDK_OFFSET(0x119719C0)
#define PEJCCBOKHCL_OALKPDMPBCK_OFFSET UNITYSDK_OFFSET(0x1196D980)
#define PEJCCBOKHCL_OAPCNPOHDFM_OFFSET UNITYSDK_OFFSET(0x11971500)
#define PEJCCBOKHCL_OBENNCGDHKG_OFFSET UNITYSDK_OFFSET(0x11973DE0)
#define PEJCCBOKHCL_OCFAJNIPOMJ_OFFSET UNITYSDK_OFFSET(0x1196CC80)
#define PEJCCBOKHCL_ODCMJJNEAOM_OFFSET UNITYSDK_OFFSET(0x1196E220)
#define PEJCCBOKHCL_ODHANABMKBE_OFFSET UNITYSDK_OFFSET(0x1196DD70)
#define PEJCCBOKHCL_OFHNNAMOKBE_OFFSET UNITYSDK_OFFSET(0x1196F890)
#define PEJCCBOKHCL_OHHMJPBNGGD_OFFSET UNITYSDK_OFFSET(0x119700E0)
#define PEJCCBOKHCL_OJBACAHAKFL_OFFSET UNITYSDK_OFFSET(0x11971840)
#define PEJCCBOKHCL_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1196BEC0)
#define PEJCCBOKHCL_PDIBIOPDBLJ_OFFSET UNITYSDK_OFFSET(0x1196CF20)
#define PEJCCBOKHCL_PGGENKAAPPE_OFFSET UNITYSDK_OFFSET(0x1196C3E0)
#define PEJCCBOKHCL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1196D7C0)
#define PEJCCBOKHCL_PIIBHELEPFK_OFFSET UNITYSDK_OFFSET(0x1196E2E0)
#define PEJCCBOKHCL_PLPIEHAOLNM_OFFSET UNITYSDK_OFFSET(0x1196D170)
#define PEJCCBOKHCL_PMHPHOMFMON_OFFSET UNITYSDK_OFFSET(0x119744C0)
#define PEJCCBOKHCL_PNLMLJMLJHI_OFFSET UNITYSDK_OFFSET(0x1196E750)
#define PEJCCBOKHCL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1196C2E0)
#define PEJCCBOKHCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1196BF40)

inline static constexpr unsigned int PEJCCBOKHCL_TypeDefinitionIndex = 72575;

class PEJCCBOKHCL
{
public:
	static ::System::UInt32* StaticGet_ACNLLEEBBJL()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PEJCCBOKHCL_TypeDefinitionIndex)->GetStaticField(0xF4A0);
	}
	// static const ::System::String* ENJIKFMBLJP; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CHKNOFKKFLE; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::UInt32>* OJCCKGJALDD; // 0x18
	::System::Collections::Generic::List_1<::JPLGICECOCO>* LMAEGEFECBD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::KGOEPEBCOOB>*>* IIMKJMNDGAF; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* MOAGDCAKIOM; // 0x30
	::LLJHKEAFOAF DCLEBECOHPK; // 0x38
	::System::Collections::Generic::Queue_1<::FAICBDNOMIA*>* IPOHBAGENNL; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Battle::Entity*>* FFINCGNGNGJ; // 0x50
	::NEKJAFKLINL* _HFJNOHMADNH_k__BackingField; // 0x58
	::System::String* PFHMGMOKCLG; // 0x60
	::MoleMole::Battle::Entity* OIJDLFIEGMG; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MEDHLPGEEEG*>* FBMMNKGHKFJ; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EKBABGJMHHF*>* FNOGAOPHPDH; // 0x78
	::System::Action_1<::System::UInt32>* GDEHNEIBJBO; // 0x80
	::System::Int32 DBAELBPMNKJ; // 0x88
	::System::Boolean MIKNEOMAFAH; // 0x8C
	::System::Boolean NHMDMAFOHIN; // 0x8D
	::System::Boolean NEBCGLGGLLN; // 0x8E
	::System::Boolean ECKCGAEBPLM; // 0x8F
	::System::Int32 _DCNJPAEOGGP_k__BackingField; // 0x90
	::System::Single NBIIMNGNJFH; // 0x94
	::System::UInt64 IMMLHAOLKAK; // 0x98
	::System::Int32 FKAOMCMCIBM; // 0xA0
	::System::Int32 FLMONBAIJMF; // 0xA4
	::System::UInt64 GCGNEOKALPM; // 0xA8
	::KBNDFLEHNKF GIDOCCMILKC; // 0xB0
	::System::Boolean PMBLLLONAKN; // 0xB4
	::System::Boolean NLIOHBJNDMK; // 0xB5
	::System::Boolean EDGLFDJIKHO; // 0xB6
	::System::Boolean GPMJIOFODHJ; // 0xB7
	::PNOMFAOHGFB EHNJCPCLCOJ; // 0xB8
	::System::Single JNMPOOAHPCK; // 0xBC
	::UnityEngine::Vector3 JDAPGAICMEF; // 0xC0
	::System::Int32 GJGCILDMELH; // 0xCC
	::System::Boolean BMBILIKAKMC; // 0xD0
	::System::Boolean APCMCMIPEKH; // 0xD1
	::System::Boolean NKEHAPEADNB; // 0xD2
	::System::Boolean OAJCDMPDPKH; // 0xD3
	::System::UInt32 NBDBBEJHFNE; // 0xD4
	::System::Int32 LLEIENOGHLK; // 0xD8
	::Foundation::Coroutine::CoroutineHandle LDIHGAKOOEL; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEJCCBOKHCL__CCTOR_OFFSET))();
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ONCREATE_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Boolean NDGLFDJPKOE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NDGLFDJPKOE_OFFSET))(this);
	}

	::System::Void GOGMLKALNOD(::NEKJAFKLINL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NEKJAFKLINL*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_GOGMLKALNOD_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Boolean ACJGAPNEACL(::System::UInt32 LACJPGJJLCH)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ACJGAPNEACL_OFFSET))(LACJPGJJLCH);
	}

	::System::Void PGGENKAAPPE(::OCGFKOFBMNG* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OCGFKOFBMNG*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_PGGENKAAPPE_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void MHLGAILIFIJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_MHLGAILIFIJ_OFFSET))(this, KECKGDFIALJ, FBILHHBPEHD);
	}

	::System::Void PDIBIOPDBLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_PDIBIOPDBLJ_OFFSET))(this);
	}

	::NEKJAFKLINL* PLPIEHAOLNM(::GDELLMFABIM* NKMKJFCBBCK)
	{
		return ((::NEKJAFKLINL*(*)(::PVOID, ::GDELLMFABIM*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_PLPIEHAOLNM_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Void JOPLNNDGOGP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_JOPLNNDGOGP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JMOBDCAFCGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_JMOBDCAFCGO_OFFSET))(this);
	}

	::System::Boolean CMEEPEGIIPO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_CMEEPEGIIPO_OFFSET))(this);
	}

	::System::Int32 EPMIDLFDPHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EPMIDLFDPHA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean OALKPDMPBCK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_OALKPDMPBCK_OFFSET))(this);
	}

	::System::UInt32 BFICJAGALLP(::MoleMole::Config::EntityType OBNIAHNMHPF)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_BFICJAGALLP_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Boolean EFGOADGCJMA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EFGOADGCJMA_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void LDMMJPPEIFD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_LDMMJPPEIFD_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* EICNJJJGFPI()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EICNJJJGFPI_OFFSET))(this);
	}

	::NEKJAFKLINL* ODCMJJNEAOM()
	{
		return ((::NEKJAFKLINL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ODCMJJNEAOM_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask KOKMEIOOFIO(::EPJAODADCEA* GDCKOIIAJPF)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_KOKMEIOOFIO_OFFSET))(this, GDCKOIIAJPF);
	}

	::System::Void PIIBHELEPFK(::System::Int32 MIIPPFNMAEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_PIIBHELEPFK_OFFSET))(this, MIIPPFNMAEC);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HGNPMKEKPDF()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_HGNPMKEKPDF_OFFSET))(this);
	}

	::System::Boolean DLIMCEAGHFM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DLIMCEAGHFM_OFFSET))(this);
	}

	::System::Boolean GJOGDOPNEKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_GJOGDOPNEKO_OFFSET))(this);
	}

	::System::Void PNLMLJMLJHI(::BLCIDFMMHIL* KLJABKLIMIN)
	{
		return ((::System::Void(*)(::PVOID, ::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_PNLMLJMLJHI_OFFSET))(this, KLJABKLIMIN);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HPODMFGIMNH()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_HPODMFGIMNH_OFFSET))(this);
	}

	::EJHHPFFPFOJ* CGBKBFNOPLF()
	{
		return ((::EJHHPFFPFOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_CGBKBFNOPLF_OFFSET))(this);
	}

	::System::Int32 IOFOLHBBJKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_IOFOLHBBJKE_OFFSET))(this);
	}

	::System::Boolean MMKMCHKANCA(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* FJDOCPKEACA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_MMKMCHKANCA_OFFSET))(this, FJDOCPKEACA);
	}

	::System::Boolean GNFIHHECANN(::System::UInt32 LACJPGJJLCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_GNFIHHECANN_OFFSET))(this, LACJPGJJLCH);
	}

	::MoleMole::Battle::Entity* HNHAKMOFHFK(::System::UInt32 PDMHCPFGNAJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_HNHAKMOFHFK_OFFSET))(this, PDMHCPFGNAJ);
	}

	::System::Boolean EFGOADGCJMA_1(::System::UInt32 LACJPGJJLCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EFGOADGCJMA_1_OFFSET))(this, LACJPGJJLCH);
	}

	::System::Void FJMHCNINFPD(::System::UInt32 LACJPGJJLCH, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_FJMHCNINFPD_OFFSET))(this, LACJPGJJLCH, KECKGDFIALJ);
	}

	::System::Void NHKJKFAJDIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NHKJKFAJDIO_OFFSET))(this);
	}

	::System::Void OFHNNAMOKBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_OFHNNAMOKBE_OFFSET))(this);
	}

	::System::Boolean JNEPFJFAELL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_JNEPFJFAELL_OFFSET))(this);
	}

	::System::Void DPMCJHNDNLO(::DAHAIEHANOH OMJHEHJJHML)
	{
		return ((::System::Void(*)(::PVOID, ::DAHAIEHANOH))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DPMCJHNDNLO_OFFSET))(this, OMJHEHJJHML);
	}

	::System::Void EEJELKBCAFG(::System::Int32 GIAOKGFENJD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EEJELKBCAFG_OFFSET))(this, GIAOKGFENJD);
	}

	::System::Boolean CHPNECFOAHO(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_CHPNECFOAHO_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void CNBJKEMDHOA(::System::Int32 FACFHJKELOI, ::System::Int32 MIIPPFNMAEC, ::System::Int32 JOBDMJGMKIM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_CNBJKEMDHOA_OFFSET))(this, FACFHJKELOI, MIIPPFNMAEC, JOBDMJGMKIM);
	}

	static ::MoleMole::Config::EntityType EDBFDOIHOED(::System::UInt32 LACJPGJJLCH)
	{
		return ((::MoleMole::Config::EntityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EDBFDOIHOED_OFFSET))(LACJPGJJLCH);
	}

	::System::Void ECOKKHCDKNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ECOKKHCDKNH_OFFSET))(this);
	}

	::System::Void NDPALLCOMKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NDPALLCOMKC_OFFSET))(this);
	}

	::System::Void NLOCOMDKBPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NLOCOMDKBPD_OFFSET))(this);
	}

	::System::Void OCFAJNIPOMJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::CharacterAliveState EEBCCPMONGC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::CharacterAliveState))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_OCFAJNIPOMJ_OFFSET))(this, KECKGDFIALJ, EEBCCPMONGC);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DECAGAEEDJE(::System::Int32 FACFHJKELOI, ::System::Int32 MIIPPFNMAEC)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DECAGAEEDJE_OFFSET))(this, FACFHJKELOI, MIIPPFNMAEC);
	}

	::System::Void FFBADMAMPFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_FFBADMAMPFD_OFFSET))(this);
	}

	::System::Void OHHMJPBNGGD(::System::Int32 FACFHJKELOI, ::System::Int32 AMIKMJIPHOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_OHHMJPBNGGD_OFFSET))(this, FACFHJKELOI, AMIKMJIPHOM);
	}

	::MoleMole::Battle::Entity* EELBFCNGPGH(::System::UInt32 CNMGPKNCNLP)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EELBFCNGPGH_OFFSET))(this, CNMGPKNCNLP);
	}

	::System::Void OAPCNPOHDFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_OAPCNPOHDFM_OFFSET))(this);
	}

	static ::System::Boolean GNAINJLKHJH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEJCCBOKHCL_GNAINJLKHJH_OFFSET))();
	}

	::System::Boolean NHFDCHOGBDC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NHFDCHOGBDC_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void DGLEPDFDBME(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DGLEPDFDBME_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OJBACAHAKFL(::System::UInt32 CCOIAGNGLNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_OJBACAHAKFL_OFFSET))(this, CCOIAGNGLNK);
	}

	::System::Void GFOFPFICNFN(::EPJAODADCEA* GDCKOIIAJPF)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_GFOFPFICNFN_OFFSET))(this, GDCKOIIAJPF);
	}

	::System::Void LJIJOOICDPG(::EDMHICENINN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EDMHICENINN*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_LJIJOOICDPG_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Int32 MLPELCGEBNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_MLPELCGEBNN_OFFSET))(this);
	}

	::System::Void AAAKBGFLGBN(::FAICBDNOMIA* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FAICBDNOMIA*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_AAAKBGFLGBN_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Boolean KBPLDHAENAM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_KBPLDHAENAM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void COKNLJJHNNF(::System::UInt32 LACJPGJJLCH, ::FPODAIHJDDC JDNCHMEAJJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::FPODAIHJDDC))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_COKNLJJHNNF_OFFSET))(this, LACJPGJJLCH, JDNCHMEAJJC);
	}

	::System::Void LNNILNGDCKD(::System::Int32 KMMGKJPAOMF, ::System::Int32 KDAMBCPIFGB, ::System::Int32 MAOCFFFKJCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_LNNILNGDCKD_OFFSET))(this, KMMGKJPAOMF, KDAMBCPIFGB, MAOCFFFKJCF);
	}

	::System::Boolean CHPNECFOAHO_1(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_CHPNECFOAHO_1_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void IKKFGPECLPB(::System::Boolean OAEJPPCLFJC, ::System::Boolean EBCCBFMNLKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_IKKFGPECLPB_OFFSET))(this, OAEJPPCLFJC, EBCCBFMNLKI);
	}

	static ::System::String* MOABMLPBJAJ(::System::UInt32 LACJPGJJLCH)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_MOABMLPBJAJ_OFFSET))(LACJPGJJLCH);
	}

	::System::Boolean LPNCJJFPFIF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_LPNCJJFPFIF_OFFSET))(this);
	}

	::System::Void CGIIMMEJDFG(::System::UInt32 LACJPGJJLCH, ::System::UInt32 OJOADLJMGNO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_CGIIMMEJDFG_OFFSET))(this, LACJPGJJLCH, OJOADLJMGNO);
	}

	::System::Boolean EFCPCFLHAKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EFCPCFLHAKP_OFFSET))(this);
	}

	::System::Void KNELCNGENEP(::System::Boolean FDAIBDPLJEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_KNELCNGENEP_OFFSET))(this, FDAIBDPLJEJ);
	}

	::System::Void CLJMDIJDCIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_CLJMDIJDCIP_OFFSET))(this);
	}

	::System::Boolean LAOCLABONOG(::PNOMFAOHGFB GEJCKFFFKCL)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNOMFAOHGFB))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_LAOCLABONOG_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void EDBPPBBCFDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EDBPPBBCFDI_OFFSET))(this);
	}

	::System::Void KAFAEPIKNGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_KAFAEPIKNGO_OFFSET))(this);
	}

	::System::Boolean DJAJCFOIIDN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DJAJCFOIIDN_OFFSET))(this);
	}

	::System::Void BDMJLNCPCOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_BDMJLNCPCOD_OFFSET))(this);
	}

	::System::Boolean AOIGGLLJJON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_AOIGGLLJJON_OFFSET))(this);
	}

	::System::Void PMHPHOMFMON(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_PMHPHOMFMON_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Battle::Entity* NMPMELKNKPC(::System::UInt32 CCOIAGNGLNK, ::System::Boolean JAFJPEBBDPE)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NMPMELKNKPC_OFFSET))(this, CCOIAGNGLNK, JAFJPEBBDPE);
	}

	::MoleMole::Battle::Entity* ODHANABMKBE(::System::UInt32 LACJPGJJLCH)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ODHANABMKBE_OFFSET))(this, LACJPGJJLCH);
	}

	::System::Void FMLAJBPIAON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_FMLAJBPIAON_OFFSET))(this);
	}

	::System::Void MIKKPKKPGNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_MIKKPKKPGNN_OFFSET))(this);
	}

	::System::UInt32 CLDKGDMDELD(::System::UInt32 JOGLJCMAKMD)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_CLDKGDMDELD_OFFSET))(this, JOGLJCMAKMD);
	}

	::KGOEPEBCOOB FGGPLELDMIH(::System::Int32 KIBPCOABMCG)
	{
		return ((::KGOEPEBCOOB(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_FGGPLELDMIH_OFFSET))(this, KIBPCOABMCG);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Boolean> DOACNBOLOOF(::System::Int32 LDDJOFHAOHG, ::System::Int32 PILJJPDCLLM)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DOACNBOLOOF_OFFSET))(this, LDDJOFHAOHG, PILJJPDCLLM);
	}

	::Cysharp::Threading::Tasks::UniTask HPFLBMLGBPE(::System::UInt32 LACJPGJJLCH, ::FPODAIHJDDC JDNCHMEAJJC)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::UInt32, ::FPODAIHJDDC))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_HPFLBMLGBPE_OFFSET))(this, LACJPGJJLCH, JDNCHMEAJJC);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MEDHLPGEEEG*>* KCIDFOBJBII()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MEDHLPGEEEG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_KCIDFOBJBII_OFFSET))(this);
	}

	static ::DDMGKHHODHG ELDCNODMFJP(::System::UInt32 LACJPGJJLCH)
	{
		return ((::DDMGKHHODHG(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ELDCNODMFJP_OFFSET))(LACJPGJJLCH);
	}

	::System::Void OBENNCGDHKG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_OBENNCGDHKG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void MCAAANPDDMN(::DAHAIEHANOH OMJHEHJJHML)
	{
		return ((::System::Void(*)(::PVOID, ::DAHAIEHANOH))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_MCAAANPDDMN_OFFSET))(this, OMJHEHJJHML);
	}
};
