#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/JDMNPLMAKGE.h"
#include "unitysdk/NCCLPHOILBE_IOKFIOPLKDH.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ANJOILDLGOC;
class CMJDEKHCHGA;
class EGFMHEDPFOC;
class IFEGGGECMCG;
class IKBAMHGDEJC;
class LKNCIDNBBDN;
class MEKFILJMGJA;
class MLAGKIPMNJO;
class NCCLPHOILBE_IAJJEBBHMLP;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBeforeAddModifier; }
namespace RPG::GameCore { class LevelRemoveModifier; }
namespace RPG::GameCore { class LevelTurnWaitActionOrder; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define NCCLPHOILBE_ABDAPJKLDCK_OFFSET UNITYSDK_OFFSET(0xC37F3D0)
#define NCCLPHOILBE_ADKEDPKCGCK_OFFSET UNITYSDK_OFFSET(0xC381FD0)
#define NCCLPHOILBE_AKCLKFLAGPN_OFFSET UNITYSDK_OFFSET(0xC385710)
#define NCCLPHOILBE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC385B00)
#define NCCLPHOILBE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC386210)
#define NCCLPHOILBE_BBFDEIGCAPE_OFFSET UNITYSDK_OFFSET(0xC3805E0)
#define NCCLPHOILBE_CFOEDLGMCPF_OFFSET UNITYSDK_OFFSET(0xC385380)
#define NCCLPHOILBE_CGIEBAEOFDP_OFFSET UNITYSDK_OFFSET(0xC385800)
#define NCCLPHOILBE_CLGGHODGPJA_OFFSET UNITYSDK_OFFSET(0xC383710)
#define NCCLPHOILBE_CPMEJCPKMLM_OFFSET UNITYSDK_OFFSET(0xC3851B0)
#define NCCLPHOILBE_CTOR_OFFSET UNITYSDK_OFFSET(0xC3868E0)
#define NCCLPHOILBE_DBHKOGAGPPC_OFFSET UNITYSDK_OFFSET(0xC381AD0)
#define NCCLPHOILBE_DCNONBFEMFL_OFFSET UNITYSDK_OFFSET(0xC3849E0)
#define NCCLPHOILBE_DDFOACCEPKB_OFFSET UNITYSDK_OFFSET(0xC383EB0)
#define NCCLPHOILBE_DDMPOILJHEM_OFFSET UNITYSDK_OFFSET(0xC380E70)
#define NCCLPHOILBE_DONLNCLLIAO_OFFSET UNITYSDK_OFFSET(0xC37F490)
#define NCCLPHOILBE_EDOLGLMNJFD_OFFSET UNITYSDK_OFFSET(0xC3825E0)
#define NCCLPHOILBE_EGCLDMLIHHM_OFFSET UNITYSDK_OFFSET(0xC380170)
#define NCCLPHOILBE_EPFBPOLLPAJ_OFFSET UNITYSDK_OFFSET(0xC3812E0)
#define NCCLPHOILBE_FBGAHKCBDLH_OFFSET UNITYSDK_OFFSET(0xC382930)
#define NCCLPHOILBE_FHJPGPKMHPE_OFFSET UNITYSDK_OFFSET(0xC381480)
#define NCCLPHOILBE_FIOAAECBDCK_OFFSET UNITYSDK_OFFSET(0xC385930)
#define NCCLPHOILBE_FIOMJAJOKFM_OFFSET UNITYSDK_OFFSET(0xC384E00)
#define NCCLPHOILBE_FMPEKPHCIBF_OFFSET UNITYSDK_OFFSET(0xC37FB00)
#define NCCLPHOILBE_FNCLNFHCKHO_OFFSET UNITYSDK_OFFSET(0xC3800C0)
#define NCCLPHOILBE_FNOKLAPMOOA_OFFSET UNITYSDK_OFFSET(0xC382090)
#define NCCLPHOILBE_GEMLAPJJGPI_OFFSET UNITYSDK_OFFSET(0xC381E10)
#define NCCLPHOILBE_GEPIELOODMD_OFFSET UNITYSDK_OFFSET(0xC385010)
#define NCCLPHOILBE_GICHJEDKMKE_OFFSET UNITYSDK_OFFSET(0xC382730)
#define NCCLPHOILBE_GIMOICLMIOP_OFFSET UNITYSDK_OFFSET(0xC385560)
#define NCCLPHOILBE_GMGAHNEPDEC_OFFSET UNITYSDK_OFFSET(0xC380AE0)
#define NCCLPHOILBE_GPLHFPPPEOB_OFFSET UNITYSDK_OFFSET(0xC384170)
#define NCCLPHOILBE_HCJHFBEPHLL_OFFSET UNITYSDK_OFFSET(0xC380110)
#define NCCLPHOILBE_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0xC3850D0)
#define NCCLPHOILBE_HNMCIPPMMGI_OFFSET UNITYSDK_OFFSET(0xC382020)
#define NCCLPHOILBE_IDHHAMPCPOA_OFFSET UNITYSDK_OFFSET(0xC385470)
#define NCCLPHOILBE_IHIMIFJKMLL_OFFSET UNITYSDK_OFFSET(0xC381210)
#define NCCLPHOILBE_INBCEJJPJGC_OFFSET UNITYSDK_OFFSET(0xC3810F0)
#define NCCLPHOILBE_JCHLEJLCHLC_OFFSET UNITYSDK_OFFSET(0xC380770)
#define NCCLPHOILBE_JFPMOEPLNIA_OFFSET UNITYSDK_OFFSET(0xC384470)
#define NCCLPHOILBE_JGKDFAHDNHA_OFFSET UNITYSDK_OFFSET(0xC384EC0)
#define NCCLPHOILBE_KAELGIGOHKO_OFFSET UNITYSDK_OFFSET(0xC380710)
#define NCCLPHOILBE_KIHBGILJFDF_OFFSET UNITYSDK_OFFSET(0xC380B40)
#define NCCLPHOILBE_KKLIDHIPIOM_OFFSET UNITYSDK_OFFSET(0xC382240)
#define NCCLPHOILBE_KLCPIEDECCE_OFFSET UNITYSDK_OFFSET(0xC37F660)
#define NCCLPHOILBE_KNKHOMNJJIC_OFFSET UNITYSDK_OFFSET(0xC384C30)
#define NCCLPHOILBE_KOMIEMGIBCE_OFFSET UNITYSDK_OFFSET(0xC384B20)
#define NCCLPHOILBE_LEJBIFMDFPI_OFFSET UNITYSDK_OFFSET(0xC3829B0)
#define NCCLPHOILBE_LPPCEDFDMPL_OFFSET UNITYSDK_OFFSET(0xC3804D0)
#define NCCLPHOILBE_MJGFBDIEOCE_OFFSET UNITYSDK_OFFSET(0xC37F900)
#define NCCLPHOILBE_NCIPJHDCOOB_OFFSET UNITYSDK_OFFSET(0xC37FE40)
#define NCCLPHOILBE_NIMLDLMDECO_OFFSET UNITYSDK_OFFSET(0xC382400)
#define NCCLPHOILBE_NNPPLNFMDLP_OFFSET UNITYSDK_OFFSET(0xC384950)
#define NCCLPHOILBE_OEPPFACKDKI_OFFSET UNITYSDK_OFFSET(0xC385290)
#define NCCLPHOILBE_OFILFFNFGLG_OFFSET UNITYSDK_OFFSET(0xC385620)
#define NCCLPHOILBE_OILEOFOFPCL_OFFSET UNITYSDK_OFFSET(0xC3811A0)
#define NCCLPHOILBE_ONLHLIGDJPH_OFFSET UNITYSDK_OFFSET(0xC384D20)
#define NCCLPHOILBE_OPCIIGANPIK_OFFSET UNITYSDK_OFFSET(0xC384F80)
#define NCCLPHOILBE_OPOCJABBOFN_OFFSET UNITYSDK_OFFSET(0xC385A70)
#define NCCLPHOILBE_PDKCLPOHMJJ_OFFSET UNITYSDK_OFFSET(0xC384A50)
#define NCCLPHOILBE_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0xC37FDF0)
#define NCCLPHOILBE_PFMELDMKFAF_OFFSET UNITYSDK_OFFSET(0xC3848F0)
#define NCCLPHOILBE_PMIEDMHPINC_OFFSET UNITYSDK_OFFSET(0xC380CE0)
#define NCCLPHOILBE__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC37EF30)
#define NCCLPHOILBE__ONBIND_OFFSET UNITYSDK_OFFSET(0xC37F150)
#define NCCLPHOILBE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC37F510)
#define NCCLPHOILBE__ONTICK_OFFSET UNITYSDK_OFFSET(0xC37F5D0)
#define NCCLPHOILBE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC37F320)

inline static constexpr unsigned int NCCLPHOILBE_TypeDefinitionIndex = 73580;

	class NCCLPHOILBE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Material* IGCINCMCLBI; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* GHNPEMHCHNN; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* EPFFCABLDKH; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* OIDNOJMAAFB; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* GHDIOMDBJPL; // 0x80
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
		::UnityEngine::Material* DOFFECPGDLJ; // 0x90
		::System::Collections::Generic::List_1<::System::Object*>* HMPEKNGPMGN; // 0x98
		::RPG::GameCore::EntityManager* EDFILLBGIKA; // 0xA0
		::System::Collections::Generic::List_1<::System::Object*>* GGFGEDMOKMI; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* JIHHEACPPIE; // 0xB0
		::IKBAMHGDEJC* PICMKGJOBLH; // 0xB8
		::IFEGGGECMCG* LPFDIFLNOLC; // 0xC0
		::CMJDEKHCHGA* DFGACLPFJAG; // 0xC8
		::System::Collections::Generic::List_1<::System::Object*>* ACOFIPEGLDN; // 0xD0
		::EGFMHEDPFOC* LKNBPKBOMEP; // 0xD8
		::System::Single HCDJDENDDHE; // 0xE0
		::System::Boolean KJDACHFDOAH; // 0xE4
		::System::Boolean DBOCJFFDODF; // 0xE5
		::System::Byte _padding0[0x2];
		::RPG::GameCore::DamateTextFontStyle IJMCKCJJKIO; // 0xE8
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCCLPHOILBE__ONTICK_OFFSET))(this, a1);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void FNCLNFHCKHO(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_FNCLNFHCKHO_OFFSET))(this, a1);
		}

		::System::Void NCIPJHDCOOB(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_NCIPJHDCOOB_OFFSET))(this, a1);
		}

		::NCCLPHOILBE_IOKFIOPLKDH EGCLDMLIHHM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::NCCLPHOILBE_IOKFIOPLKDH(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_EGCLDMLIHHM_OFFSET))(this, a1);
		}

		::System::Void KAELGIGOHKO(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_KAELGIGOHKO_OFFSET))(this, a1);
		}

		::System::Void GMGAHNEPDEC(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_GMGAHNEPDEC_OFFSET))(this, a1);
		}

		::System::Void JCHLEJLCHLC(::RPG::GameCore::AbilityCurrentShieldChange* a1, ::RPG::Client::UIFloatingTextType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + NCCLPHOILBE_JCHLEJLCHLC_OFFSET))(this, a1, a2);
		}

		::System::Void KIHBGILJFDF(::RPG::GameCore::LevelBeforeAddModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBeforeAddModifier*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_KIHBGILJFDF_OFFSET))(this, a1);
		}

		::System::Void DDMPOILJHEM(::RPG::GameCore::LevelRemoveModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRemoveModifier*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_DDMPOILJHEM_OFFSET))(this, a1);
		}

		::System::Void INBCEJJPJGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_INBCEJJPJGC_OFFSET))(this);
		}

		::System::Void IHIMIFJKMLL(::RPG::GameCore::LevelTurnWaitActionOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnWaitActionOrder*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_IHIMIFJKMLL_OFFSET))(this, a1);
		}

		::System::Void EPFBPOLLPAJ(::MEKFILJMGJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEKFILJMGJA*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_EPFBPOLLPAJ_OFFSET))(this, a1);
		}

		::System::Void FHJPGPKMHPE(::MLAGKIPMNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLAGKIPMNJO*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_FHJPGPKMHPE_OFFSET))(this, a1);
		}

		::System::Void DBHKOGAGPPC(::LKNCIDNBBDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKNCIDNBBDN*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_DBHKOGAGPPC_OFFSET))(this, a1);
		}

		::System::Void GEMLAPJJGPI(::LKNCIDNBBDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKNCIDNBBDN*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_GEMLAPJJGPI_OFFSET))(this, a1);
		}

		::System::Void ADKEDPKCGCK(::RPG::GameCore::DamateTextFontStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + NCCLPHOILBE_ADKEDPKCGCK_OFFSET))(this, a1);
		}

		::System::Void HNMCIPPMMGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCCLPHOILBE_HNMCIPPMMGI_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* HCJHFBEPHLL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCCLPHOILBE_HCJHFBEPHLL_OFFSET))(this, a1);
		}

		::System::Boolean PMIEDMHPINC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_PMIEDMHPINC_OFFSET))(this, a1);
		}

		::RPG::Client::UIFloatingTextType BBFDEIGCAPE(::CHMCAGBDPJH a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::RPG::Client::UIFloatingTextType(*)(::PVOID, ::CHMCAGBDPJH, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + NCCLPHOILBE_BBFDEIGCAPE_OFFSET))(this, a1, a2);
		}

		::System::Void LPPCEDFDMPL(::NCCLPHOILBE_IOKFIOPLKDH a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCCLPHOILBE_IOKFIOPLKDH))((::PBYTE)hIl2Cpp + NCCLPHOILBE_LPPCEDFDMPL_OFFSET))(this, a1);
		}

		::System::Void KLCPIEDECCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCCLPHOILBE_KLCPIEDECCE_OFFSET))(this, a1);
		}

		::System::Void MJGFBDIEOCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCCLPHOILBE_MJGFBDIEOCE_OFFSET))(this, a1);
		}

		::System::Void FMPEKPHCIBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCCLPHOILBE_FMPEKPHCIBF_OFFSET))(this, a1);
		}

		::System::Void NIMLDLMDECO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCCLPHOILBE_NIMLDLMDECO_OFFSET))(this, a1);
		}

		::System::Boolean EDOLGLMNJFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_EDOLGLMNJFD_OFFSET))(this, a1);
		}

		::System::Void FBGAHKCBDLH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_FBGAHKCBDLH_OFFSET))(this, a1);
		}

		::System::Void KKLIDHIPIOM(::ANJOILDLGOC* a1, ::NCCLPHOILBE_IOKFIOPLKDH a2)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::NCCLPHOILBE_IOKFIOPLKDH))((::PBYTE)hIl2Cpp + NCCLPHOILBE_KKLIDHIPIOM_OFFSET))(this, a1, a2);
		}

		::System::Void LEJBIFMDFPI(::ANJOILDLGOC* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::Client::UIFloatingTextType a4, ::RPG::GameCore::DamateTextFontStyle a5, ::CHMCAGBDPJH a6)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::RPG::GameCore::DamateTextFontStyle, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + NCCLPHOILBE_LEJBIFMDFPI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CLGGHODGPJA(::ANJOILDLGOC* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::UIFloatingTextType a3, ::RPG::Client::TextID a4)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::GameCore::GameEntity*, ::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_CLGGHODGPJA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OILEOFOFPCL(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + NCCLPHOILBE_OILEOFOFPCL_OFFSET))(this, a1);
		}

		::System::Void DDFOACCEPKB(::ANJOILDLGOC* a1, ::RPG::GameCore::GameEntity* a2, ::JDMNPLMAKGE a3, ::CHMCAGBDPJH a4)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::GameCore::GameEntity*, ::JDMNPLMAKGE, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + NCCLPHOILBE_DDFOACCEPKB_OFFSET))(this, a1, a2, a3, a4);
		}

		::ANJOILDLGOC* FNOKLAPMOOA(::NCCLPHOILBE_IOKFIOPLKDH a1, ::System::Boolean a2)
		{
			return ((::ANJOILDLGOC*(*)(::PVOID, ::NCCLPHOILBE_IOKFIOPLKDH, ::System::Boolean))((::PBYTE)hIl2Cpp + NCCLPHOILBE_FNOKLAPMOOA_OFFSET))(this, a1, a2);
		}

		::ANJOILDLGOC* GICHJEDKMKE(::System::Boolean a1)
		{
			return ((::ANJOILDLGOC*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCCLPHOILBE_GICHJEDKMKE_OFFSET))(this, a1);
		}

		::System::Void GPLHFPPPEOB(::ANJOILDLGOC* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackDamageType a3, ::JDMNPLMAKGE a4, ::RPG::Client::UIFloatingTextType a5)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackDamageType, ::JDMNPLMAKGE, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + NCCLPHOILBE_GPLHFPPPEOB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* DCNONBFEMFL(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + NCCLPHOILBE_DCNONBFEMFL_OFFSET))(this, a1);
		}

		::System::String* PDKCLPOHMJJ(::JDMNPLMAKGE a1)
		{
			return ((::System::String*(*)(::PVOID, ::JDMNPLMAKGE))((::PBYTE)hIl2Cpp + NCCLPHOILBE_PDKCLPOHMJJ_OFFSET))(this, a1);
		}

		::System::Void DONLNCLLIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_DONLNCLLIAO_OFFSET))(this);
		}

		::System::Void ABDAPJKLDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_ABDAPJKLDCK_OFFSET))(this);
		}

		::System::Void KOMIEMGIBCE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCCLPHOILBE_KOMIEMGIBCE_OFFSET))(this, a1);
		}

		::NCCLPHOILBE_IAJJEBBHMLP* JFPMOEPLNIA(::System::UInt32 a1)
		{
			return ((::NCCLPHOILBE_IAJJEBBHMLP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCCLPHOILBE_JFPMOEPLNIA_OFFSET))(this, a1);
		}

		::System::Void KNKHOMNJJIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_KNKHOMNJJIC_OFFSET))(this, a1);
		}

		::System::Boolean PFMELDMKFAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_PFMELDMKFAF_OFFSET))(this);
		}

		::System::String* NNPPLNFMDLP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_NNPPLNFMDLP_OFFSET))(this);
		}

		::System::Boolean ONLHLIGDJPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_ONLHLIGDJPH_OFFSET))(this);
		}

		::System::Void FIOMJAJOKFM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_FIOMJAJOKFM_OFFSET))(this, a1);
		}

		::System::Void JGKDFAHDNHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_JGKDFAHDNHA_OFFSET))(this, a1);
		}

		::System::Void OPCIIGANPIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_OPCIIGANPIK_OFFSET))(this, a1);
		}

		::System::Void GEPIELOODMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_GEPIELOODMD_OFFSET))(this, a1);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void CPMEJCPKMLM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_CPMEJCPKMLM_OFFSET))(this, a1);
		}

		::System::Void OEPPFACKDKI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_OEPPFACKDKI_OFFSET))(this, a1);
		}

		::System::Void CFOEDLGMCPF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_CFOEDLGMCPF_OFFSET))(this, a1);
		}

		::System::Void IDHHAMPCPOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_IDHHAMPCPOA_OFFSET))(this, a1);
		}

		::System::Void GIMOICLMIOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_GIMOICLMIOP_OFFSET))(this, a1);
		}

		::System::Void OFILFFNFGLG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_OFILFFNFGLG_OFFSET))(this, a1);
		}

		::System::Void AKCLKFLAGPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_AKCLKFLAGPN_OFFSET))(this, a1);
		}

		::System::Void CGIEBAEOFDP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_CGIEBAEOFDP_OFFSET))(this, a1);
		}

		::System::Void FIOAAECBDCK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_FIOAAECBDCK_OFFSET))(this, a1);
		}

		::System::Void OPOCJABBOFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCCLPHOILBE_OPOCJABBOFN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
