#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EntityTag.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimCustomScreenTransferReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveHideLineTraceReason.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/EMMEADNPNIB.h"
#include "unitysdk/GBNEGNHCHAB.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FLGDGCPIHBP;
class GJNFGCKLBKC;
class HIOEAKHGILF;
class IKIGGAKDIGO;
class NAKCDHDLNEI;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimLevelVariableShort; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LPNIPNDEDDL_ACKJAICCMNA_OFFSET UNITYSDK_OFFSET(0xB826B30)
#define LPNIPNDEDDL_AFFFFKJLPGD_OFFSET UNITYSDK_OFFSET(0xB82D470)
#define LPNIPNDEDDL_AFJEAGNIMNB_OFFSET UNITYSDK_OFFSET(0xB828BF0)
#define LPNIPNDEDDL_AFLJLOOOMEF_OFFSET UNITYSDK_OFFSET(0xB82B6B0)
#define LPNIPNDEDDL_AHNEJLJJIII_OFFSET UNITYSDK_OFFSET(0xB821860)
#define LPNIPNDEDDL_AJJAMBCIINO_OFFSET UNITYSDK_OFFSET(0xB82CF00)
#define LPNIPNDEDDL_AKHALOINKOO_OFFSET UNITYSDK_OFFSET(0xB82C0B0)
#define LPNIPNDEDDL_ANFAOIHKHGJ_OFFSET UNITYSDK_OFFSET(0xB81F800)
#define LPNIPNDEDDL_BGICPILCAKF_OFFSET UNITYSDK_OFFSET(0xB820840)
#define LPNIPNDEDDL_BILCJCDMFEH_OFFSET UNITYSDK_OFFSET(0xB82BEA0)
#define LPNIPNDEDDL_BNDAHHFLDLF_OFFSET UNITYSDK_OFFSET(0xB827FA0)
#define LPNIPNDEDDL_BNEFLJAPIMA_OFFSET UNITYSDK_OFFSET(0xB8206A0)
#define LPNIPNDEDDL_BOHPGOEFGFG_OFFSET UNITYSDK_OFFSET(0xB8225A0)
#define LPNIPNDEDDL_BPLCBFAFAKJ_OFFSET UNITYSDK_OFFSET(0xB8289D0)
#define LPNIPNDEDDL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB82DBE0)
#define LPNIPNDEDDL_CNFMKCMJNHM_OFFSET UNITYSDK_OFFSET(0xB825EF0)
#define LPNIPNDEDDL_CPKGKGMLEME_OFFSET UNITYSDK_OFFSET(0xB828A70)
#define LPNIPNDEDDL_CPNOHCJDOAF_OFFSET UNITYSDK_OFFSET(0xB82A830)
#define LPNIPNDEDDL_CTOR_OFFSET UNITYSDK_OFFSET(0xB81ED10)
#define LPNIPNDEDDL_DEDCIIPOBIP_OFFSET UNITYSDK_OFFSET(0xB81EEF0)
#define LPNIPNDEDDL_DFFGEIIKGOB_OFFSET UNITYSDK_OFFSET(0xB820AA0)
#define LPNIPNDEDDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB81EDE0)
#define LPNIPNDEDDL_DJDMDLDIPAE_OFFSET UNITYSDK_OFFSET(0xB8203F0)
#define LPNIPNDEDDL_DKOKHMNBBPO_OFFSET UNITYSDK_OFFSET(0xB820A40)
#define LPNIPNDEDDL_DMCKCLGALMH_OFFSET UNITYSDK_OFFSET(0xB81EE80)
#define LPNIPNDEDDL_DNOALLGADNM_OFFSET UNITYSDK_OFFSET(0xB82B1A0)
#define LPNIPNDEDDL_EDNAPMFBFNH_OFFSET UNITYSDK_OFFSET(0xB823360)
#define LPNIPNDEDDL_EEHDPEOMIAK_OFFSET UNITYSDK_OFFSET(0xB82AE30)
#define LPNIPNDEDDL_EEPPNOPFFNE_OFFSET UNITYSDK_OFFSET(0xB8258B0)
#define LPNIPNDEDDL_EFPIPHHNBEA_OFFSET UNITYSDK_OFFSET(0xB82AD10)
#define LPNIPNDEDDL_EOLJBDFJGBC_OFFSET UNITYSDK_OFFSET(0xB8252F0)
#define LPNIPNDEDDL_FDBIEOFAFDH_OFFSET UNITYSDK_OFFSET(0xB824CC0)
#define LPNIPNDEDDL_FEIMBCJJKDA_OFFSET UNITYSDK_OFFSET(0xB82C400)
#define LPNIPNDEDDL_FGMDONEGIPE_OFFSET UNITYSDK_OFFSET(0xB8227D0)
#define LPNIPNDEDDL_FOMPDFFHFKI_OFFSET UNITYSDK_OFFSET(0xB82A4F0)
#define LPNIPNDEDDL_GALBJHBKGAC_OFFSET UNITYSDK_OFFSET(0xB828D90)
#define LPNIPNDEDDL_GGFLJCIPIFL_OFFSET UNITYSDK_OFFSET(0xB82BBF0)
#define LPNIPNDEDDL_GJGOJIOENHL_OFFSET UNITYSDK_OFFSET(0xB82D350)
#define LPNIPNDEDDL_GLEBCFKCCOG_OFFSET UNITYSDK_OFFSET(0xB8284B0)
#define LPNIPNDEDDL_GMFDPJEGDMF_OFFSET UNITYSDK_OFFSET(0xB82C9F0)
#define LPNIPNDEDDL_HFFECBEAHCF_OFFSET UNITYSDK_OFFSET(0xB82C000)
#define LPNIPNDEDDL_HFNFAHLDFPC_OFFSET UNITYSDK_OFFSET(0xB8235E0)
#define LPNIPNDEDDL_HJELIELAKJJ_OFFSET UNITYSDK_OFFSET(0xB829660)
#define LPNIPNDEDDL_HJNLJABHIAL_OFFSET UNITYSDK_OFFSET(0xB8218E0)
#define LPNIPNDEDDL_HKOLBIEMLIK_OFFSET UNITYSDK_OFFSET(0xB82D7E0)
#define LPNIPNDEDDL_HPGJBAPKPGJ_OFFSET UNITYSDK_OFFSET(0xB8208E0)
#define LPNIPNDEDDL_ICLLDLJOBIH_OFFSET UNITYSDK_OFFSET(0xB81EE30)
#define LPNIPNDEDDL_JBGAHAKHJMM_OFFSET UNITYSDK_OFFSET(0xB82D010)
#define LPNIPNDEDDL_JGLECDBCBHD_OFFSET UNITYSDK_OFFSET(0xB826E10)
#define LPNIPNDEDDL_JJGBPHDDFNJ_OFFSET UNITYSDK_OFFSET(0xB82C5D0)
#define LPNIPNDEDDL_JLPIDDHIBFF_OFFSET UNITYSDK_OFFSET(0xB829B00)
#define LPNIPNDEDDL_JMEBHEPGPLC_OFFSET UNITYSDK_OFFSET(0xB82B600)
#define LPNIPNDEDDL_JMPDFFHCNHH_OFFSET UNITYSDK_OFFSET(0xB81F6F0)
#define LPNIPNDEDDL_KOONEEMCINM_OFFSET UNITYSDK_OFFSET(0xB82B040)
#define LPNIPNDEDDL_LBFMDGIEJJE_OFFSET UNITYSDK_OFFSET(0xB821260)
#define LPNIPNDEDDL_LEHPMGOMEMG_OFFSET UNITYSDK_OFFSET(0xB820310)
#define LPNIPNDEDDL_LFCENDPIBMA_OFFSET UNITYSDK_OFFSET(0xB81F0A0)
#define LPNIPNDEDDL_LKLGFECLBEE_OFFSET UNITYSDK_OFFSET(0xB822830)
#define LPNIPNDEDDL_LOFNMBHINNC_OFFSET UNITYSDK_OFFSET(0xB82C1C0)
#define LPNIPNDEDDL_LONBEDEBHII_OFFSET UNITYSDK_OFFSET(0xB822540)
#define LPNIPNDEDDL_MBMACGKNHAE_OFFSET UNITYSDK_OFFSET(0xB8280B0)
#define LPNIPNDEDDL_MFEJGPGKMKK_OFFSET UNITYSDK_OFFSET(0xB82C850)
#define LPNIPNDEDDL_MICINGHMPCF_OFFSET UNITYSDK_OFFSET(0xB822A20)
#define LPNIPNDEDDL_MOKJINJLIAI_OFFSET UNITYSDK_OFFSET(0xB82AF70)
#define LPNIPNDEDDL_NAHMLEJAFAH_OFFSET UNITYSDK_OFFSET(0xB822A80)
#define LPNIPNDEDDL_NBOEHKOBEKF_OFFSET UNITYSDK_OFFSET(0xB8229C0)
#define LPNIPNDEDDL_NFIACJPBFFC_OFFSET UNITYSDK_OFFSET(0xB829DB0)
#define LPNIPNDEDDL_NGMCGDLGEBB_OFFSET UNITYSDK_OFFSET(0xB825D40)
#define LPNIPNDEDDL_NIPBKANMPNI_OFFSET UNITYSDK_OFFSET(0xB820230)
#define LPNIPNDEDDL_NLLAJMNPCKG_OFFSET UNITYSDK_OFFSET(0xB82AA30)
#define LPNIPNDEDDL_OBAKFJPIOAM_OFFSET UNITYSDK_OFFSET(0xB82B2E0)
#define LPNIPNDEDDL_OICHMEIIGLA_OFFSET UNITYSDK_OFFSET(0xB82A090)
#define LPNIPNDEDDL_OKABMLAFCLF_OFFSET UNITYSDK_OFFSET(0xB828E70)
#define LPNIPNDEDDL_OKPNCPGGJEH_OFFSET UNITYSDK_OFFSET(0xB82A600)
#define LPNIPNDEDDL_PFOMHMNAIFB_OFFSET UNITYSDK_OFFSET(0xB824180)
#define LPNIPNDEDDL_PIGLPFIFEAJ_OFFSET UNITYSDK_OFFSET(0xB822960)
#define LPNIPNDEDDL_PJGNPOPIGJD_OFFSET UNITYSDK_OFFSET(0xB81EFE0)
#define LPNIPNDEDDL_PKHKDEDDJPL_OFFSET UNITYSDK_OFFSET(0xB82C6B0)
#define LPNIPNDEDDL_PKJKDNHIPHB_OFFSET UNITYSDK_OFFSET(0xB825CC0)
#define LPNIPNDEDDL_PMANLNLHICC_OFFSET UNITYSDK_OFFSET(0xB82D500)

inline static constexpr unsigned int LPNIPNDEDDL_TypeDefinitionIndex = 76891;

	class LPNIPNDEDDL : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* BOPPBBDNCND; // 0x20
		::Il2CppArray<::UnityEngine::RaycastHit>* DAAEFLHHLHD; // 0x28
		::Il2CppArray<::UnityEngine::Collider*>* MCNHCAPBMDG; // 0x30
		static ::Il2CppArray<::RPG::Client::LittleGame::FiveDim::EntityTag>** StaticGet_FOMNNNMEPBC()
		{
			return (::Il2CppArray<::RPG::Client::LittleGame::FiveDim::EntityTag>**)UnitySDK::FromName("", "LPNIPNDEDDL")->GetStaticField(0x6E870);
		}

		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPNIPNDEDDL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_DISPOSE_OFFSET))(this);
		}

		::FLGDGCPIHBP* ICLLDLJOBIH()
		{
			return ((::FLGDGCPIHBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_ICLLDLJOBIH_OFFSET))(this);
		}

		::FLGDGCPIHBP* DMCKCLGALMH()
		{
			return ((::FLGDGCPIHBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_DMCKCLGALMH_OFFSET))(this);
		}

		::System::Boolean DEDCIIPOBIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_DEDCIIPOBIP_OFFSET))(this);
		}

		::System::Boolean PJGNPOPIGJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_PJGNPOPIGJD_OFFSET))(this);
		}

		::System::Void LFCENDPIBMA(::RPG::GameCore::FiveDimPortalTarget* a1, ::GBNEGNHCHAB a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalTarget*, ::GBNEGNHCHAB))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_LFCENDPIBMA_OFFSET))(this, a1, a2);
		}

		::System::Void JMPDFFHCNHH(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_JMPDFFHCNHH_OFFSET))(this, a1);
		}

		::System::Void LEHPMGOMEMG(::HIOEAKHGILF* a1, ::System::Boolean a2, ::RPG::Client::LittleGame::FiveDim::SplineMoveHideLineTraceReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::SplineMoveHideLineTraceReason))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_LEHPMGOMEMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DJDMDLDIPAE(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_DJDMDLDIPAE_OFFSET))(this, a1);
		}

		::System::Void BNEFLJAPIMA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_BNEFLJAPIMA_OFFSET))(this, a1);
		}

		::System::Boolean HPGJBAPKPGJ(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_HPGJBAPKPGJ_OFFSET))(this, a1);
		}

		::System::Boolean DKOKHMNBBPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_DKOKHMNBBPO_OFFSET))(this);
		}

		::System::Void DFFGEIIKGOB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_DFFGEIIKGOB_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds LBFMDGIEJJE(::IKIGGAKDIGO* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::IKIGGAKDIGO*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_LBFMDGIEJJE_OFFSET))(this, a1, a2);
		}

		::System::Void AHNEJLJJIII(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_AHNEJLJJIII_OFFSET))(this, a1);
		}

		::System::Boolean HJNLJABHIAL(::HIOEAKHGILF* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_HJNLJABHIAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LONBEDEBHII(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_LONBEDEBHII_OFFSET))(this, a1);
		}

		::System::Void FGMDONEGIPE(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_FGMDONEGIPE_OFFSET))(this, a1);
		}

		::System::Void PIGLPFIFEAJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_PIGLPFIFEAJ_OFFSET))(this, a1);
		}

		::System::Void NBOEHKOBEKF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_NBOEHKOBEKF_OFFSET))(this, a1);
		}

		::System::Void MICINGHMPCF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_MICINGHMPCF_OFFSET))(this, a1);
		}

		::System::Void BOHPGOEFGFG(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_BOHPGOEFGFG_OFFSET))(this, a1, a2);
		}

		::System::Void LKLGFECLBEE(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_LKLGFECLBEE_OFFSET))(this, a1, a2);
		}

		::System::Void NAHMLEJAFAH(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_NAHMLEJAFAH_OFFSET))(this, a1, a2);
		}

		::System::Void EDNAPMFBFNH(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_EDNAPMFBFNH_OFFSET))(this, a1, a2);
		}

		::System::Void HFNFAHLDFPC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::PoolList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::PoolList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_HFNFAHLDFPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PFOMHMNAIFB(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3, ::HGBCMFANCOE a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_PFOMHMNAIFB_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 EOLJBDFJGBC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_EOLJBDFJGBC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PKJKDNHIPHB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_PKJKDNHIPHB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NGMCGDLGEBB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Color a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_NGMCGDLGEBB_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void CNFMKCMJNHM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_CNFMKCMJNHM_OFFSET))(this, a1);
		}

		::System::Void ACKJAICCMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_ACKJAICCMNA_OFFSET))(this);
		}

		::System::Single JGLECDBCBHD(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_JGLECDBCBHD_OFFSET))(this, a1, a2);
		}

		static ::System::Single MBMACGKNHAE(::UnityEngine::Bounds a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_MBMACGKNHAE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GLEBCFKCCOG(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Color a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_GLEBCFKCCOG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BPLCBFAFAKJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Color a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_BPLCBFAFAKJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void FDBIEOFAFDH(::UnityEngine::RaycastHit a1, ::UnityEngine::Collider* a2, ::HIOEAKHGILF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::Collider*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_FDBIEOFAFDH_OFFSET))(this, a1, a2, a3);
		}

		::System::String* CPKGKGMLEME(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::System::String* a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::String*(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_CPKGKGMLEME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AFJEAGNIMNB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_AFJEAGNIMNB_OFFSET))(this, a1);
		}

		::System::Void GALBJHBKGAC(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_GALBJHBKGAC_OFFSET))(this, a1);
		}

		::System::Void OKABMLAFCLF(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_OKABMLAFCLF_OFFSET))(this, a1, a2);
		}

		::System::Void HJELIELAKJJ(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_HJELIELAKJJ_OFFSET))(this, a1, a2);
		}

		::System::String* JLPIDDHIBFF(::HIOEAKHGILF* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::String*(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_JLPIDDHIBFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NFIACJPBFFC(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_NFIACJPBFFC_OFFSET))(this, a1, a2);
		}

		::System::Void OICHMEIIGLA(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_OICHMEIIGLA_OFFSET))(this, a1, a2);
		}

		::System::Void OKPNCPGGJEH(::NAKCDHDLNEI* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAKCDHDLNEI*, ::HIOEAKHGILF*, ::System::Int32))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_OKPNCPGGJEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CPNOHCJDOAF(::NAKCDHDLNEI* a1, ::HIOEAKHGILF* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAKCDHDLNEI*, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_CPNOHCJDOAF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NLLAJMNPCKG(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_NLLAJMNPCKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EFPIPHHNBEA(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_EFPIPHHNBEA_OFFSET))(this, a1, a2);
		}

		::System::Void EEHDPEOMIAK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_EEHDPEOMIAK_OFFSET))(this, a1);
		}

		::System::String* MOKJINJLIAI(::UnityEngine::GameObject* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_MOKJINJLIAI_OFFSET))(this, a1);
		}

		::System::String* FOMPDFFHFKI(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::String*(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_FOMPDFFHFKI_OFFSET))(this, a1, a2);
		}

		::System::UInt32 KOONEEMCINM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_KOONEEMCINM_OFFSET))(this);
		}

		::System::Void DNOALLGADNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_DNOALLGADNM_OFFSET))(this);
		}

		::System::Boolean JMEBHEPGPLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_JMEBHEPGPLC_OFFSET))(this);
		}

		::UnityEngine::Vector3 AFLJLOOOMEF(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_AFLJLOOOMEF_OFFSET))(this, a1, a2);
		}

		::System::Void EEPPNOPFFNE(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_EEPPNOPFFNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HFFECBEAHCF(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason a2, ::RPG::GameCore::FiveDimCustomScreenTransferStyle a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason, ::RPG::GameCore::FiveDimCustomScreenTransferStyle))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_HFFECBEAHCF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AKHALOINKOO(::RPG::GameCore::FiveDimPortalTarget* a1, ::System::Boolean a2, ::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_AKHALOINKOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FEIMBCJJKDA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_FEIMBCJJKDA_OFFSET))(this, a1);
		}

		::System::Boolean JJGBPHDDFNJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_JJGBPHDDFNJ_OFFSET))(this, a1);
		}

		::System::Void PKHKDEDDJPL(::GJNFGCKLBKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJNFGCKLBKC*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_PKHKDEDDJPL_OFFSET))(this, a1);
		}

		::System::Void MFEJGPGKMKK(::GJNFGCKLBKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJNFGCKLBKC*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_MFEJGPGKMKK_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* GMFDPJEGDMF(::EMMEADNPNIB a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::EMMEADNPNIB))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_GMFDPJEGDMF_OFFSET))(this, a1);
		}

		::System::Void AJJAMBCIINO(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_AJJAMBCIINO_OFFSET))(this, a1);
		}

		::System::Void JBGAHAKHJMM(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_JBGAHAKHJMM_OFFSET))(this, a1, a2);
		}

		::System::Void GJGOJIOENHL(::RPG::GameCore::FiveDimPortalTarget* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalTarget*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_GJGOJIOENHL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Bounds BNDAHHFLDLF()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_BNDAHHFLDLF_OFFSET))(this);
		}

		::System::Boolean GGFLJCIPIFL(::HIOEAKHGILF* a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_GGFLJCIPIFL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BILCJCDMFEH(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_BILCJCDMFEH_OFFSET))(this, a1, a2);
		}

		::System::Void ANFAOIHKHGJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_ANFAOIHKHGJ_OFFSET))(this, a1);
		}

		::System::Void NIPBKANMPNI(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_NIPBKANMPNI_OFFSET))(this, a1);
		}

		::System::Void AFFFFKJLPGD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_AFFFFKJLPGD_OFFSET))(this, a1);
		}

		::System::Void PMANLNLHICC(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_PMANLNLHICC_OFFSET))(this, a1, a2);
		}

		::System::String* BGICPILCAKF(::HIOEAKHGILF* a1)
		{
			return ((::System::String*(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_BGICPILCAKF_OFFSET))(this, a1);
		}

		::System::Boolean OBAKFJPIOAM(::RPG::GameCore::FiveDimLevelVariableShort* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimLevelVariableShort*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_OBAKFJPIOAM_OFFSET))(this, a1);
		}

		::System::Void HKOLBIEMLIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_HKOLBIEMLIK_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameLevelConfig* LOFNMBHINNC(::RPG::GameCore::FiveDimPortalTarget* a1)
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID, ::RPG::GameCore::FiveDimPortalTarget*))((::PBYTE)hIl2Cpp + LPNIPNDEDDL_LOFNMBHINNC_OFFSET))(this, a1);
		}

	};
