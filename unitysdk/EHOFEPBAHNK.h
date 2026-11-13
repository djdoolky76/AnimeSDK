#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PingPong/GameState.h"
#include "unitysdk/RPG/GameCore/PingPongDropItemType.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CDBFAGCNIMO;
class CIJBOKHCKDH;
class CJFFNKJCAGO;
class CPGCDIHLKFF;
class GEEMEIAAIOO;
class JKDLIBFIHAB;
class KCOJHJECKFF;
class KMHGJFFKPAG;
class LPOEOHMEJAG;
class MFHJNCNJLAA;
class NBICPOLGBJP;
class OCPOIDCNJDA;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHOFEPBAHNK_ACMJMBLJJAP_OFFSET UNITYSDK_OFFSET(0x1F4E6490)
#define EHOFEPBAHNK_AMHPFFIHJFG_OFFSET UNITYSDK_OFFSET(0x1F4E6470)
#define EHOFEPBAHNK_AODFMMAGHFG_OFFSET UNITYSDK_OFFSET(0x1F4E6E10)
#define EHOFEPBAHNK_APPLJAJPBMH_OFFSET UNITYSDK_OFFSET(0x1F4E6240)
#define EHOFEPBAHNK_BAODAEEMFCL_OFFSET UNITYSDK_OFFSET(0x1F4E6410)
#define EHOFEPBAHNK_BCBLOGMPPHP_OFFSET UNITYSDK_OFFSET(0x1F4E6100)
#define EHOFEPBAHNK_BDMENKHIGPA_OFFSET UNITYSDK_OFFSET(0x1F4E5FC0)
#define EHOFEPBAHNK_BEOENADDLKM_OFFSET UNITYSDK_OFFSET(0x1F4E8010)
#define EHOFEPBAHNK_BGJNIBNNDND_OFFSET UNITYSDK_OFFSET(0x1F4E7660)
#define EHOFEPBAHNK_BLEKHLLEJGP_OFFSET UNITYSDK_OFFSET(0x1F4E8600)
#define EHOFEPBAHNK_CAJCHPHDDKK_OFFSET UNITYSDK_OFFSET(0x1F4E6980)
#define EHOFEPBAHNK_CKIFDOLKJEH_OFFSET UNITYSDK_OFFSET(0x1F4E83E0)
#define EHOFEPBAHNK_COMOCOLBCMI_OFFSET UNITYSDK_OFFSET(0x1F4E8540)
#define EHOFEPBAHNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E8C90)
#define EHOFEPBAHNK_DBGENIPNDMH_OFFSET UNITYSDK_OFFSET(0x1F4E67C0)
#define EHOFEPBAHNK_DJFCLLKHCIB_OFFSET UNITYSDK_OFFSET(0x1F4E74D0)
#define EHOFEPBAHNK_EEHEBMEFLOC_OFFSET UNITYSDK_OFFSET(0x1F4E8520)
#define EHOFEPBAHNK_EIIAALLMNGI_OFFSET UNITYSDK_OFFSET(0x1F4E8760)
#define EHOFEPBAHNK_FAENMHGLCOF_OFFSET UNITYSDK_OFFSET(0x1F4E8320)
#define EHOFEPBAHNK_FPHNEAFBLHH_OFFSET UNITYSDK_OFFSET(0x1F4E8440)
#define EHOFEPBAHNK_GEKCCCDJJEI_OFFSET UNITYSDK_OFFSET(0x1F4E6660)
#define EHOFEPBAHNK_GEMPMBBPAGO_OFFSET UNITYSDK_OFFSET(0x1F4E72C0)
#define EHOFEPBAHNK_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET UNITYSDK_OFFSET(0x1F4E8A10)
#define EHOFEPBAHNK_GETGENERICVIEWASSETMATCHER_OFFSET UNITYSDK_OFFSET(0x1F4E8970)
#define EHOFEPBAHNK_GETGENERICVIEWBRIDGEMATCHER_OFFSET UNITYSDK_OFFSET(0x1F4E8AB0)
#define EHOFEPBAHNK_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x1F4E8B50)
#define EHOFEPBAHNK_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x1F4E8BF0)
#define EHOFEPBAHNK_GIMLBAPIKAB_OFFSET UNITYSDK_OFFSET(0x1F4E8740)
#define EHOFEPBAHNK_GOLNFHJCIBM_OFFSET UNITYSDK_OFFSET(0x1F4E6960)
#define EHOFEPBAHNK_HAMLMGPIKAN_OFFSET UNITYSDK_OFFSET(0x1F4E6B60)
#define EHOFEPBAHNK_HCDLDMBALAM_OFFSET UNITYSDK_OFFSET(0x1F4E7920)
#define EHOFEPBAHNK_HCFFEDLBJDP_OFFSET UNITYSDK_OFFSET(0x1F4E7990)
#define EHOFEPBAHNK_HCNBJJIJBIF_OFFSET UNITYSDK_OFFSET(0x1F4E6330)
#define EHOFEPBAHNK_HDMFHFLMFCA_OFFSET UNITYSDK_OFFSET(0x1F4E7DB0)
#define EHOFEPBAHNK_HDMLCCCGJDN_OFFSET UNITYSDK_OFFSET(0x1F4E8150)
#define EHOFEPBAHNK_HHNHHKOODAD_OFFSET UNITYSDK_OFFSET(0x1F4E75F0)
#define EHOFEPBAHNK_HMCEDPJOENM_OFFSET UNITYSDK_OFFSET(0x1F4E7B50)
#define EHOFEPBAHNK_HNCFLOHPMJE_OFFSET UNITYSDK_OFFSET(0x1F4E6CD0)
#define EHOFEPBAHNK_HOJDIFKDCKC_OFFSET UNITYSDK_OFFSET(0x1F4E71A0)
#define EHOFEPBAHNK_HOOBFLOHGFD_OFFSET UNITYSDK_OFFSET(0x1F4E8880)
#define EHOFEPBAHNK_HPPPALGBFBE_OFFSET UNITYSDK_OFFSET(0x1F4E6E70)
#define EHOFEPBAHNK_IAPDFHFFADE_OFFSET UNITYSDK_OFFSET(0x1F4E8070)
#define EHOFEPBAHNK_JPBKIHHGFAP_OFFSET UNITYSDK_OFFSET(0x1F4E6E90)
#define EHOFEPBAHNK_JPLIDAPHJLJ_OFFSET UNITYSDK_OFFSET(0x1F4E74F0)
#define EHOFEPBAHNK_KAFIHBFFHNH_OFFSET UNITYSDK_OFFSET(0x1F4E81D0)
#define EHOFEPBAHNK_KCFEOAPOLJE_OFFSET UNITYSDK_OFFSET(0x1F4E7060)
#define EHOFEPBAHNK_KCJAHDOHDFF_OFFSET UNITYSDK_OFFSET(0x1F4E8910)
#define EHOFEPBAHNK_KDGFHFALGJO_OFFSET UNITYSDK_OFFSET(0x1F4E7140)
#define EHOFEPBAHNK_KKOEEHCEDPH_OFFSET UNITYSDK_OFFSET(0x1F4E7000)
#define EHOFEPBAHNK_KMLNCOOGDFG_OFFSET UNITYSDK_OFFSET(0x1F4E7330)
#define EHOFEPBAHNK_KNMLFPNNCBE_OFFSET UNITYSDK_OFFSET(0x1F4E76C0)
#define EHOFEPBAHNK_KPMOAOAALEA_OFFSET UNITYSDK_OFFSET(0x1F4E6900)
#define EHOFEPBAHNK_KPOLABEHILG_OFFSET UNITYSDK_OFFSET(0x1F4E6820)
#define EHOFEPBAHNK_MEIHODCONPK_OFFSET UNITYSDK_OFFSET(0x1F4E62D0)
#define EHOFEPBAHNK_MEMKCGLJNOG_OFFSET UNITYSDK_OFFSET(0x1F4E77A0)
#define EHOFEPBAHNK_MMMIFDBNMEM_OFFSET UNITYSDK_OFFSET(0x1F4E6D30)
#define EHOFEPBAHNK_MNJNAHLNNAH_OFFSET UNITYSDK_OFFSET(0x1F4E7800)
#define EHOFEPBAHNK_NFBJOODODKF_OFFSET UNITYSDK_OFFSET(0x1F4E6120)
#define EHOFEPBAHNK_NGMFLIJHMLA_OFFSET UNITYSDK_OFFSET(0x1F4E79F0)
#define EHOFEPBAHNK_NNKLIOPEMOF_OFFSET UNITYSDK_OFFSET(0x1F4E7B30)
#define EHOFEPBAHNK_NOJGBMDABJJ_OFFSET UNITYSDK_OFFSET(0x1F4E60A0)
#define EHOFEPBAHNK_NOLBHCNBDKI_OFFSET UNITYSDK_OFFSET(0x1F4E7470)
#define EHOFEPBAHNK_OBHIOIDEGCG_OFFSET UNITYSDK_OFFSET(0x1F4E81B0)
#define EHOFEPBAHNK_OGNMGENNNEM_OFFSET UNITYSDK_OFFSET(0x1F4E71C0)
#define EHOFEPBAHNK_OIBKPFMBMJE_OFFSET UNITYSDK_OFFSET(0x1F4E86E0)
#define EHOFEPBAHNK_PEBBFPPGOEF_OFFSET UNITYSDK_OFFSET(0x1F4E7AD0)
#define EHOFEPBAHNK_PHEIDDLKPLD_OFFSET UNITYSDK_OFFSET(0x1F4E7820)
#define EHOFEPBAHNK_PLOPGPGLNIC_OFFSET UNITYSDK_OFFSET(0x1F4E7390)
#define EHOFEPBAHNK_PODFLHJDPHP_OFFSET UNITYSDK_OFFSET(0x1F4E6F90)

inline static constexpr unsigned int EHOFEPBAHNK_TypeDefinitionIndex = 43587;

	class EHOFEPBAHNK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_CTOR_OFFSET))(this);
		}

		::OCPOIDCNJDA* BDMENKHIGPA()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_BDMENKHIGPA_OFFSET))(this);
		}

		::NBICPOLGBJP* NOJGBMDABJJ()
		{
			return ((::NBICPOLGBJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_NOJGBMDABJJ_OFFSET))(this);
		}

		::System::Boolean BCBLOGMPPHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_BCBLOGMPPHP_OFFSET))(this);
		}

		::OCPOIDCNJDA* NFBJOODODKF(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_NFBJOODODKF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void APPLJAJPBMH(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_APPLJAJPBMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MEIHODCONPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_MEIHODCONPK_OFFSET))(this);
		}

		::OCPOIDCNJDA* HCNBJJIJBIF()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HCNBJJIJBIF_OFFSET))(this);
		}

		::GEEMEIAAIOO* BAODAEEMFCL()
		{
			return ((::GEEMEIAAIOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_BAODAEEMFCL_OFFSET))(this);
		}

		::System::Boolean AMHPFFIHJFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_AMHPFFIHJFG_OFFSET))(this);
		}

		::OCPOIDCNJDA* ACMJMBLJJAP(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_ACMJMBLJJAP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GEKCCCDJJEI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GEKCCCDJJEI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DBGENIPNDMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_DBGENIPNDMH_OFFSET))(this);
		}

		::OCPOIDCNJDA* KPOLABEHILG()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KPOLABEHILG_OFFSET))(this);
		}

		::LPOEOHMEJAG* KPMOAOAALEA()
		{
			return ((::LPOEOHMEJAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KPMOAOAALEA_OFFSET))(this);
		}

		::System::Boolean GOLNFHJCIBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GOLNFHJCIBM_OFFSET))(this);
		}

		::OCPOIDCNJDA* CAJCHPHDDKK(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Bounds a4, ::UnityEngine::Bounds a5)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_CAJCHPHDDKK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HAMLMGPIKAN(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Bounds a4, ::UnityEngine::Bounds a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HAMLMGPIKAN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HNCFLOHPMJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HNCFLOHPMJE_OFFSET))(this);
		}

		::OCPOIDCNJDA* MMMIFDBNMEM()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_MMMIFDBNMEM_OFFSET))(this);
		}

		::CJFFNKJCAGO* AODFMMAGHFG()
		{
			return ((::CJFFNKJCAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_AODFMMAGHFG_OFFSET))(this);
		}

		::System::Boolean HPPPALGBFBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HPPPALGBFBE_OFFSET))(this);
		}

		::OCPOIDCNJDA* JPBKIHHGFAP(::JKDLIBFIHAB* a1)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::JKDLIBFIHAB*))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_JPBKIHHGFAP_OFFSET))(this, a1);
		}

		::System::Void PODFLHJDPHP(::JKDLIBFIHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKDLIBFIHAB*))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_PODFLHJDPHP_OFFSET))(this, a1);
		}

		::System::Void KKOEEHCEDPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KKOEEHCEDPH_OFFSET))(this);
		}

		::OCPOIDCNJDA* KCFEOAPOLJE()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KCFEOAPOLJE_OFFSET))(this);
		}

		::KMHGJFFKPAG* KDGFHFALGJO()
		{
			return ((::KMHGJFFKPAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KDGFHFALGJO_OFFSET))(this);
		}

		::System::Boolean HOJDIFKDCKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HOJDIFKDCKC_OFFSET))(this);
		}

		::OCPOIDCNJDA* OGNMGENNNEM(::System::Collections::Generic::List_1<::RPG::GameCore::PingPongDropItemType>* a1)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PingPongDropItemType>*))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_OGNMGENNNEM_OFFSET))(this, a1);
		}

		::System::Void GEMPMBBPAGO(::System::Collections::Generic::List_1<::RPG::GameCore::PingPongDropItemType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PingPongDropItemType>*))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GEMPMBBPAGO_OFFSET))(this, a1);
		}

		::System::Void KMLNCOOGDFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KMLNCOOGDFG_OFFSET))(this);
		}

		::OCPOIDCNJDA* PLOPGPGLNIC()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_PLOPGPGLNIC_OFFSET))(this);
		}

		::CIJBOKHCKDH* NOLBHCNBDKI()
		{
			return ((::CIJBOKHCKDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_NOLBHCNBDKI_OFFSET))(this);
		}

		::System::Boolean DJFCLLKHCIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_DJFCLLKHCIB_OFFSET))(this);
		}

		::OCPOIDCNJDA* JPLIDAPHJLJ(::System::Int32 a1)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_JPLIDAPHJLJ_OFFSET))(this, a1);
		}

		::System::Void HHNHHKOODAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HHNHHKOODAD_OFFSET))(this, a1);
		}

		::System::Void BGJNIBNNDND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_BGJNIBNNDND_OFFSET))(this);
		}

		::OCPOIDCNJDA* KNMLFPNNCBE()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KNMLFPNNCBE_OFFSET))(this);
		}

		::MFHJNCNJLAA* MEMKCGLJNOG()
		{
			return ((::MFHJNCNJLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_MEMKCGLJNOG_OFFSET))(this);
		}

		::System::Boolean MNJNAHLNNAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_MNJNAHLNNAH_OFFSET))(this);
		}

		::OCPOIDCNJDA* PHEIDDLKPLD(::RPG::Client::LittleGame::PingPong::GameState a1)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::RPG::Client::LittleGame::PingPong::GameState))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_PHEIDDLKPLD_OFFSET))(this, a1);
		}

		::System::Void HCDLDMBALAM(::RPG::Client::LittleGame::PingPong::GameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PingPong::GameState))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HCDLDMBALAM_OFFSET))(this, a1);
		}

		::System::Void HCFFEDLBJDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HCFFEDLBJDP_OFFSET))(this);
		}

		::OCPOIDCNJDA* NGMFLIJHMLA()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_NGMFLIJHMLA_OFFSET))(this);
		}

		::CPGCDIHLKFF* PEBBFPPGOEF()
		{
			return ((::CPGCDIHLKFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_PEBBFPPGOEF_OFFSET))(this);
		}

		::System::Boolean NNKLIOPEMOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_NNKLIOPEMOF_OFFSET))(this);
		}

		::OCPOIDCNJDA* HMCEDPJOENM(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::UInt32 a14, ::System::UInt32 a15, ::System::UInt32 a16)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HMCEDPJOENM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void HDMFHFLMFCA(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::UInt32 a14, ::System::UInt32 a15, ::System::UInt32 a16)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HDMFHFLMFCA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void BEOENADDLKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_BEOENADDLKM_OFFSET))(this);
		}

		::OCPOIDCNJDA* IAPDFHFFADE()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_IAPDFHFFADE_OFFSET))(this);
		}

		::KCOJHJECKFF* HDMLCCCGJDN()
		{
			return ((::KCOJHJECKFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HDMLCCCGJDN_OFFSET))(this);
		}

		::System::Boolean OBHIOIDEGCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_OBHIOIDEGCG_OFFSET))(this);
		}

		::OCPOIDCNJDA* KAFIHBFFHNH(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KAFIHBFFHNH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FAENMHGLCOF(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_FAENMHGLCOF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKIFDOLKJEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_CKIFDOLKJEH_OFFSET))(this);
		}

		::OCPOIDCNJDA* FPHNEAFBLHH()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_FPHNEAFBLHH_OFFSET))(this);
		}

		::System::Boolean EEHEBMEFLOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_EEHEBMEFLOC_OFFSET))(this);
		}

		::System::Void COMOCOLBCMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_COMOCOLBCMI_OFFSET))(this, a1);
		}

		::OCPOIDCNJDA* BLEKHLLEJGP()
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_BLEKHLLEJGP_OFFSET))(this);
		}

		::CDBFAGCNIMO* OIBKPFMBMJE()
		{
			return ((::CDBFAGCNIMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_OIBKPFMBMJE_OFFSET))(this);
		}

		::System::Boolean GIMLBAPIKAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GIMLBAPIKAB_OFFSET))(this);
		}

		::OCPOIDCNJDA* EIIAALLMNGI(::RPG::GameCore::PingPongSPSkillType a1, ::System::Single a2)
		{
			return ((::OCPOIDCNJDA*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType, ::System::Single))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_EIIAALLMNGI_OFFSET))(this, a1, a2);
		}

		::System::Void HOOBFLOHGFD(::RPG::GameCore::PingPongSPSkillType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType, ::System::Single))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_HOOBFLOHGFD_OFFSET))(this, a1, a2);
		}

		::System::Void KCJAHDOHDFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_KCJAHDOHDFF_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::OCPOIDCNJDA*>* GetGenericViewAssetMatcher()
		{
			return ((::Entitas::IMatcher_1<::OCPOIDCNJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GETGENERICVIEWASSETMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::OCPOIDCNJDA*>* GetGenericViewAssetLoadingMatcher()
		{
			return ((::Entitas::IMatcher_1<::OCPOIDCNJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::OCPOIDCNJDA*>* GetGenericViewBridgeMatcher()
		{
			return ((::Entitas::IMatcher_1<::OCPOIDCNJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GETGENERICVIEWBRIDGEMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::OCPOIDCNJDA*>* GetGenericViewLoadCallbackMatcher()
		{
			return ((::Entitas::IMatcher_1<::OCPOIDCNJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::OCPOIDCNJDA*>* GetGenericViewUnloadCallbackMatcher()
		{
			return ((::Entitas::IMatcher_1<::OCPOIDCNJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFEPBAHNK_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET))(this);
		}

	};
