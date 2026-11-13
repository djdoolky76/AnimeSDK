#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/JDMNPLMAKGE.h"
#include "unitysdk/NINPCAHNCBJ_FAJDGCLBLDM.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ANJOILDLGOC;
class CMJDEKHCHGA;
class EGFMHEDPFOC;
class EKFMIDBJDIA;
class IFEGGGECMCG;
class IKBAMHGDEJC;
class LKNCIDNBBDN;
class LNCJILCLGPD;
class MEKFILJMGJA;
class MLAGKIPMNJO;
class NINPCAHNCBJ_AOCFBKPPNFC;
class OIKDEOMMOAM;
class PBAKBDFJDGP;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtDamageTextConfigGroup; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define NINPCAHNCBJ_ABDAPJKLDCK_OFFSET UNITYSDK_OFFSET(0x148D86E0)
#define NINPCAHNCBJ_AKCLKFLAGPN_OFFSET UNITYSDK_OFFSET(0x148DD430)
#define NINPCAHNCBJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x148DD5B0)
#define NINPCAHNCBJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x148DDA30)
#define NINPCAHNCBJ_BBFDEIGCAPE_OFFSET UNITYSDK_OFFSET(0x148D7FF0)
#define NINPCAHNCBJ_BDBCEHOCCCP_OFFSET UNITYSDK_OFFSET(0x148DA000)
#define NINPCAHNCBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x148DE4B0)
#define NINPCAHNCBJ_CKGDMNAIBGC_OFFSET UNITYSDK_OFFSET(0x148DCF20)
#define NINPCAHNCBJ_CKLKBJDCIFF_OFFSET UNITYSDK_OFFSET(0x148D9320)
#define NINPCAHNCBJ_CLGGHODGPJA_OFFSET UNITYSDK_OFFSET(0x148DBBF0)
#define NINPCAHNCBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x148DDE70)
#define NINPCAHNCBJ_DBHKOGAGPPC_OFFSET UNITYSDK_OFFSET(0x148DA730)
#define NINPCAHNCBJ_DCNONBFEMFL_OFFSET UNITYSDK_OFFSET(0x148DCBF0)
#define NINPCAHNCBJ_DDFOACCEPKB_OFFSET UNITYSDK_OFFSET(0x148DBF70)
#define NINPCAHNCBJ_DDMPOILJHEM_OFFSET UNITYSDK_OFFSET(0x148D9B10)
#define NINPCAHNCBJ_DONLNCLLIAO_OFFSET UNITYSDK_OFFSET(0x148D8800)
#define NINPCAHNCBJ_EDOLGLMNJFD_OFFSET UNITYSDK_OFFSET(0x148DB1E0)
#define NINPCAHNCBJ_EGCLDMLIHHM_OFFSET UNITYSDK_OFFSET(0x148D9430)
#define NINPCAHNCBJ_EPFBPOLLPAJ_OFFSET UNITYSDK_OFFSET(0x148D9DD0)
#define NINPCAHNCBJ_FBGAHKCBDLH_OFFSET UNITYSDK_OFFSET(0x148DB550)
#define NINPCAHNCBJ_FHJPGPKMHPE_OFFSET UNITYSDK_OFFSET(0x148DA0E0)
#define NINPCAHNCBJ_FHMNLFHNECO_OFFSET UNITYSDK_OFFSET(0x148D7D70)
#define NINPCAHNCBJ_FMPEKPHCIBF_OFFSET UNITYSDK_OFFSET(0x148D8FC0)
#define NINPCAHNCBJ_FNOKLAPMOOA_OFFSET UNITYSDK_OFFSET(0x148DAC60)
#define NINPCAHNCBJ_GEMLAPJJGPI_OFFSET UNITYSDK_OFFSET(0x148DAA90)
#define NINPCAHNCBJ_GICHJEDKMKE_OFFSET UNITYSDK_OFFSET(0x148DB330)
#define NINPCAHNCBJ_GIMOICLMIOP_OFFSET UNITYSDK_OFFSET(0x148DD280)
#define NINPCAHNCBJ_GPLHFPPPEOB_OFFSET UNITYSDK_OFFSET(0x148DC1E0)
#define NINPCAHNCBJ_HCJHFBEPHLL_OFFSET UNITYSDK_OFFSET(0x148D7D10)
#define NINPCAHNCBJ_IDHHAMPCPOA_OFFSET UNITYSDK_OFFSET(0x148DD100)
#define NINPCAHNCBJ_IPDMMOCAEPO_OFFSET UNITYSDK_OFFSET(0x148DD1F0)
#define NINPCAHNCBJ_JFPMOEPLNIA_OFFSET UNITYSDK_OFFSET(0x148DC690)
#define NINPCAHNCBJ_KIHBGILJFDF_OFFSET UNITYSDK_OFFSET(0x148D98E0)
#define NINPCAHNCBJ_KKLIDHIPIOM_OFFSET UNITYSDK_OFFSET(0x148DAE10)
#define NINPCAHNCBJ_KLCPIEDECCE_OFFSET UNITYSDK_OFFSET(0x148D8AE0)
#define NINPCAHNCBJ_KNGFAALLOKF_OFFSET UNITYSDK_OFFSET(0x148DD010)
#define NINPCAHNCBJ_KNKHOMNJJIC_OFFSET UNITYSDK_OFFSET(0x148DCE40)
#define NINPCAHNCBJ_KOMIEMGIBCE_OFFSET UNITYSDK_OFFSET(0x148DCD30)
#define NINPCAHNCBJ_LEJBIFMDFPI_OFFSET UNITYSDK_OFFSET(0x148DB5D0)
#define NINPCAHNCBJ_LPPCEDFDMPL_OFFSET UNITYSDK_OFFSET(0x148D95E0)
#define NINPCAHNCBJ_MJAIPGNOAMB_OFFSET UNITYSDK_OFFSET(0x148DC4A0)
#define NINPCAHNCBJ_MJGFBDIEOCE_OFFSET UNITYSDK_OFFSET(0x148D8D80)
#define NINPCAHNCBJ_MMPNBHCEPNA_OFFSET UNITYSDK_OFFSET(0x148D7F40)
#define NINPCAHNCBJ_MNDJIDMFKEP_OFFSET UNITYSDK_OFFSET(0x148D9700)
#define NINPCAHNCBJ_NIMLDLMDECO_OFFSET UNITYSDK_OFFSET(0x148DB000)
#define NINPCAHNCBJ_NNPPLNFMDLP_OFFSET UNITYSDK_OFFSET(0x148DCB90)
#define NINPCAHNCBJ_OFILFFNFGLG_OFFSET UNITYSDK_OFFSET(0x148DD340)
#define NINPCAHNCBJ_OILEOFOFPCL_OFFSET UNITYSDK_OFFSET(0x148DC630)
#define NINPCAHNCBJ_OPOCJABBOFN_OFFSET UNITYSDK_OFFSET(0x148DD520)
#define NINPCAHNCBJ_PDKCLPOHMJJ_OFFSET UNITYSDK_OFFSET(0x148DCC60)
#define NINPCAHNCBJ_PDNEOCNLFCN_OFFSET UNITYSDK_OFFSET(0x148DC160)
#define NINPCAHNCBJ_PFMELDMKFAF_OFFSET UNITYSDK_OFFSET(0x148DCB40)
#define NINPCAHNCBJ_PMIEDMHPINC_OFFSET UNITYSDK_OFFSET(0x148D7FA0)
#define NINPCAHNCBJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x148D8100)
#define NINPCAHNCBJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x148D8460)
#define NINPCAHNCBJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x148D8880)
#define NINPCAHNCBJ__ONTICK_OFFSET UNITYSDK_OFFSET(0x148D8A50)
#define NINPCAHNCBJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x148D8630)

inline static constexpr unsigned int NINPCAHNCBJ_TypeDefinitionIndex = 73709;

	class NINPCAHNCBJ : public ::FMPCODLIOLG
	{
	public:
		::IFEGGGECMCG* LPFDIFLNOLC; // 0x60
		::System::Func_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtDamageTextConfigGroup*>* BKGEIKGMDND; // 0x68
		::UnityEngine::Material* IGCINCMCLBI; // 0x70
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x78
		::UnityEngine::Material* DOFFECPGDLJ; // 0x80
		::RPG::GameCore::EntityManager* EDFILLBGIKA; // 0x88
		::System::Collections::Generic::List_1<::System::Object*>* GGFGEDMOKMI; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* EPFFCABLDKH; // 0x98
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* OIDNOJMAAFB; // 0xA0
		::EGFMHEDPFOC* LKNBPKBOMEP; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* GHDIOMDBJPL; // 0xB0
		::System::Collections::Generic::List_1<::System::Object*>* HMPEKNGPMGN; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* GHNPEMHCHNN; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* JIHHEACPPIE; // 0xC8
		::System::Collections::Generic::List_1<::System::Object*>* ACOFIPEGLDN; // 0xD0
		::IKBAMHGDEJC* PICMKGJOBLH; // 0xD8
		::CMJDEKHCHGA* DFGACLPFJAG; // 0xE0
		::System::Boolean DBOCJFFDODF; // 0xE8
		::System::Byte _padding0[0x3];
		::System::Single HCDJDENDDHE; // 0xEC
		static ::System::Int32* StaticGet_PAFAOFABDIK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NINPCAHNCBJ")->GetStaticField(0xD160);
		}

		// static const ::System::Object JFMIBFINMNI; // 0x0
		// static const ::System::Object CBNILLMFLEM; // 0x0
		// static const ::System::Object ICIPIAPGLKH; // 0x0
		// static const ::System::String* HPAELKLLDGA; // 0x0
		// static const ::System::String* PGBMHLJHDHM; // 0x0
		// static const ::System::String* EBLEDKDFLDM; // 0x0
		// static const ::System::String* FIDMDNIKKEA; // 0x0
		// static const ::System::String* BKBIBJPOOLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINPCAHNCBJ_CCTOR_OFFSET))();
		}

		::RPG::GameCore::GameEntity* HCJHFBEPHLL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_HCJHFBEPHLL_OFFSET))(this, a1);
		}

		::System::Boolean FHMNLFHNECO(::OIKDEOMMOAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_FHMNLFHNECO_OFFSET))(this, a1);
		}

		static ::System::Boolean MMPNBHCEPNA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_MMPNBHCEPNA_OFFSET))(a1);
		}

		::System::Boolean PMIEDMHPINC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_PMIEDMHPINC_OFFSET))(this, a1);
		}

		::RPG::Client::UIFloatingTextType BBFDEIGCAPE(::OIKDEOMMOAM* a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::RPG::Client::UIFloatingTextType(*)(::PVOID, ::OIKDEOMMOAM*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_BBFDEIGCAPE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NINPCAHNCBJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void CKLKBJDCIFF(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_CKLKBJDCIFF_OFFSET))(this, a1);
		}

		::NINPCAHNCBJ_FAJDGCLBLDM EGCLDMLIHHM(::OIKDEOMMOAM* a1)
		{
			return ((::NINPCAHNCBJ_FAJDGCLBLDM(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_EGCLDMLIHHM_OFFSET))(this, a1);
		}

		::System::Void MNDJIDMFKEP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_MNDJIDMFKEP_OFFSET))(this, a1);
		}

		::System::Void KIHBGILJFDF(::LNCJILCLGPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNCJILCLGPD*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_KIHBGILJFDF_OFFSET))(this, a1);
		}

		::System::Void DDMPOILJHEM(::PBAKBDFJDGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBAKBDFJDGP*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_DDMPOILJHEM_OFFSET))(this, a1);
		}

		::System::Void EPFBPOLLPAJ(::MEKFILJMGJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEKFILJMGJA*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_EPFBPOLLPAJ_OFFSET))(this, a1);
		}

		::System::Void BDBCEHOCCCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_BDBCEHOCCCP_OFFSET))(this);
		}

		::System::Void FHJPGPKMHPE(::MLAGKIPMNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLAGKIPMNJO*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_FHJPGPKMHPE_OFFSET))(this, a1);
		}

		::System::Void DBHKOGAGPPC(::LKNCIDNBBDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKNCIDNBBDN*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_DBHKOGAGPPC_OFFSET))(this, a1);
		}

		::System::Void GEMLAPJJGPI(::LKNCIDNBBDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKNCIDNBBDN*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_GEMLAPJJGPI_OFFSET))(this, a1);
		}

		::System::Void LPPCEDFDMPL(::NINPCAHNCBJ_FAJDGCLBLDM a1)
		{
			return ((::System::Void(*)(::PVOID, ::NINPCAHNCBJ_FAJDGCLBLDM))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_LPPCEDFDMPL_OFFSET))(this, a1);
		}

		::System::Void KLCPIEDECCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_KLCPIEDECCE_OFFSET))(this, a1);
		}

		::System::Void MJGFBDIEOCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_MJGFBDIEOCE_OFFSET))(this, a1);
		}

		::System::Void FMPEKPHCIBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_FMPEKPHCIBF_OFFSET))(this, a1);
		}

		::System::Void NIMLDLMDECO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_NIMLDLMDECO_OFFSET))(this, a1);
		}

		::System::Boolean EDOLGLMNJFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_EDOLGLMNJFD_OFFSET))(this, a1);
		}

		::System::Void FBGAHKCBDLH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_FBGAHKCBDLH_OFFSET))(this, a1);
		}

		::System::Void KKLIDHIPIOM(::ANJOILDLGOC* a1, ::NINPCAHNCBJ_FAJDGCLBLDM a2)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::NINPCAHNCBJ_FAJDGCLBLDM))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_KKLIDHIPIOM_OFFSET))(this, a1, a2);
		}

		::System::Void LEJBIFMDFPI(::ANJOILDLGOC* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::FixPoint a4, ::RPG::Client::UIFloatingTextType a5, ::JDMNPLMAKGE a6)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::JDMNPLMAKGE))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_LEJBIFMDFPI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CLGGHODGPJA(::ANJOILDLGOC* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::UIFloatingTextType a3, ::RPG::Client::TextID a4)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::GameCore::GameEntity*, ::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_CLGGHODGPJA_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* MJAIPGNOAMB(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_MJAIPGNOAMB_OFFSET))(this, a1, a2);
		}

		::System::Void OILEOFOFPCL(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_OILEOFOFPCL_OFFSET))(this, a1);
		}

		::System::Void DDFOACCEPKB(::ANJOILDLGOC* a1, ::RPG::GameCore::GameEntity* a2, ::JDMNPLMAKGE a3)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::GameCore::GameEntity*, ::JDMNPLMAKGE))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_DDFOACCEPKB_OFFSET))(this, a1, a2, a3);
		}

		::ANJOILDLGOC* FNOKLAPMOOA(::NINPCAHNCBJ_FAJDGCLBLDM a1, ::System::Boolean a2)
		{
			return ((::ANJOILDLGOC*(*)(::PVOID, ::NINPCAHNCBJ_FAJDGCLBLDM, ::System::Boolean))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_FNOKLAPMOOA_OFFSET))(this, a1, a2);
		}

		::ANJOILDLGOC* GICHJEDKMKE(::System::Boolean a1)
		{
			return ((::ANJOILDLGOC*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_GICHJEDKMKE_OFFSET))(this, a1);
		}

		::System::Void GPLHFPPPEOB(::ANJOILDLGOC* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackDamageType a3, ::JDMNPLMAKGE a4, ::RPG::Client::UIFloatingTextType a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackDamageType, ::JDMNPLMAKGE, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_GPLHFPPPEOB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* DCNONBFEMFL(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_DCNONBFEMFL_OFFSET))(this, a1);
		}

		::System::String* PDKCLPOHMJJ(::JDMNPLMAKGE a1)
		{
			return ((::System::String*(*)(::PVOID, ::JDMNPLMAKGE))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_PDKCLPOHMJJ_OFFSET))(this, a1);
		}

		::System::Void DONLNCLLIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_DONLNCLLIAO_OFFSET))(this);
		}

		::System::Void ABDAPJKLDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_ABDAPJKLDCK_OFFSET))(this);
		}

		::System::Void KOMIEMGIBCE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_KOMIEMGIBCE_OFFSET))(this, a1);
		}

		::NINPCAHNCBJ_AOCFBKPPNFC* JFPMOEPLNIA(::System::UInt32 a1)
		{
			return ((::NINPCAHNCBJ_AOCFBKPPNFC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_JFPMOEPLNIA_OFFSET))(this, a1);
		}

		::System::Void KNKHOMNJJIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_KNKHOMNJJIC_OFFSET))(this, a1);
		}

		::System::Boolean PFMELDMKFAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_PFMELDMKFAF_OFFSET))(this);
		}

		::System::String* NNPPLNFMDLP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_NNPPLNFMDLP_OFFSET))(this);
		}

		::RPG::GameCore::RtDamageTextConfigGroup* PDNEOCNLFCN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::RtDamageTextConfigGroup*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_PDNEOCNLFCN_OFFSET))(this, a1, a2);
		}

		::System::Void CKGDMNAIBGC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_CKGDMNAIBGC_OFFSET))(this, a1);
		}

		::System::Void KNGFAALLOKF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_KNGFAALLOKF_OFFSET))(this, a1);
		}

		::System::Void IDHHAMPCPOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_IDHHAMPCPOA_OFFSET))(this, a1);
		}

		::System::Void IPDMMOCAEPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_IPDMMOCAEPO_OFFSET))(this, a1);
		}

		::System::Void GIMOICLMIOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_GIMOICLMIOP_OFFSET))(this, a1);
		}

		::System::Void OFILFFNFGLG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_OFILFFNFGLG_OFFSET))(this, a1);
		}

		::System::Void AKCLKFLAGPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_AKCLKFLAGPN_OFFSET))(this, a1);
		}

		::System::Void OPOCJABBOFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_OPOCJABBOFN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
