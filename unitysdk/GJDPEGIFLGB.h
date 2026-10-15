#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GCLLMHLFLFI;
class NFGIHNCHEDO;
class PCFGFOGMLNN;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client::ActivityHipplen { class MonoBabyHipplen; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define GJDPEGIFLGB_AANLCPCOMDL_OFFSET UNITYSDK_OFFSET(0x15A61790)
#define GJDPEGIFLGB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15A5EC50)
#define GJDPEGIFLGB_AGFNOCJBAPE_OFFSET UNITYSDK_OFFSET(0x15A603E0)
#define GJDPEGIFLGB_AMEJADCJEGD_OFFSET UNITYSDK_OFFSET(0x15A60F10)
#define GJDPEGIFLGB_BGEBEKMJIPD_OFFSET UNITYSDK_OFFSET(0x15A60AE0)
#define GJDPEGIFLGB_BIECOAKLHOK_OFFSET UNITYSDK_OFFSET(0x15A5F230)
#define GJDPEGIFLGB_BKHELFLAHEP_OFFSET UNITYSDK_OFFSET(0x15A60500)
#define GJDPEGIFLGB_BNOAPFMAFLA_OFFSET UNITYSDK_OFFSET(0x15A60250)
#define GJDPEGIFLGB_BPGLLLGDNGP_OFFSET UNITYSDK_OFFSET(0x15A5E590)
#define GJDPEGIFLGB_BPMBBCKOMDI_OFFSET UNITYSDK_OFFSET(0x15A61420)
#define GJDPEGIFLGB_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x15A61C70)
#define GJDPEGIFLGB_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0x15A5FCE0)
#define GJDPEGIFLGB_CKHJDHIFGIA_OFFSET UNITYSDK_OFFSET(0x15A60C40)
#define GJDPEGIFLGB_CLJNBDIHICG_OFFSET UNITYSDK_OFFSET(0x15A5E1B0)
#define GJDPEGIFLGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A61D50)
#define GJDPEGIFLGB_DAFLJFOMEGK_OFFSET UNITYSDK_OFFSET(0x15A60DB0)
#define GJDPEGIFLGB_DIPPDGNGCND_OFFSET UNITYSDK_OFFSET(0x15A5F520)
#define GJDPEGIFLGB_EAEOHCFMAKH_OFFSET UNITYSDK_OFFSET(0x15A5ECA0)
#define GJDPEGIFLGB_EBLMEKGAKAD_OFFSET UNITYSDK_OFFSET(0x15A609A0)
#define GJDPEGIFLGB_ECCJCGOJDJB_OFFSET UNITYSDK_OFFSET(0x15A5F140)
#define GJDPEGIFLGB_EHLFMMBGNNG_OFFSET UNITYSDK_OFFSET(0x15A616F0)
#define GJDPEGIFLGB_EIMKLOLBIDG_OFFSET UNITYSDK_OFFSET(0x15A605F0)
#define GJDPEGIFLGB_FDHGELBAPKI_OFFSET UNITYSDK_OFFSET(0x15A5FC60)
#define GJDPEGIFLGB_FINCDMBOEBF_OFFSET UNITYSDK_OFFSET(0x15A5ECF0)
#define GJDPEGIFLGB_FJILNOEBEFF_OFFSET UNITYSDK_OFFSET(0x15A5F0E0)
#define GJDPEGIFLGB_FNJCHFFNCLI_OFFSET UNITYSDK_OFFSET(0x15A60660)
#define GJDPEGIFLGB_GDIOPBDNBBD_OFFSET UNITYSDK_OFFSET(0x15A60330)
#define GJDPEGIFLGB_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x15A61D30)
#define GJDPEGIFLGB_GJNHPKJELFN_OFFSET UNITYSDK_OFFSET(0x15A60760)
#define GJDPEGIFLGB_GKCCKDIFHDP_OFFSET UNITYSDK_OFFSET(0x15A5E2D0)
#define GJDPEGIFLGB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15A5E150)
#define GJDPEGIFLGB_HBHBGAKMBAF_OFFSET UNITYSDK_OFFSET(0x15A5FAC0)
#define GJDPEGIFLGB_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x15A61B90)
#define GJDPEGIFLGB_HIHBCJKEAFH_OFFSET UNITYSDK_OFFSET(0x15A5EF60)
#define GJDPEGIFLGB_IJCNBPLOHIM_OFFSET UNITYSDK_OFFSET(0x15A61260)
#define GJDPEGIFLGB_IKNGPAEJKDP_OFFSET UNITYSDK_OFFSET(0x15A5F8F0)
#define GJDPEGIFLGB_INEJMACHPIJ_OFFSET UNITYSDK_OFFSET(0x15A5FE40)
#define GJDPEGIFLGB_JJECFCKKAMM_OFFSET UNITYSDK_OFFSET(0x15A61740)
#define GJDPEGIFLGB_JKGMEFMCLMC_OFFSET UNITYSDK_OFFSET(0x15A60E30)
#define GJDPEGIFLGB_JKOJDDMPDLK_OFFSET UNITYSDK_OFFSET(0x15A5FEA0)
#define GJDPEGIFLGB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15A5F3F0)
#define GJDPEGIFLGB_KHOEDMDFGCG_OFFSET UNITYSDK_OFFSET(0x15A5E5E0)
#define GJDPEGIFLGB_KKALPPEBJGI_OFFSET UNITYSDK_OFFSET(0x15A60D20)
#define GJDPEGIFLGB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A5E100)
#define GJDPEGIFLGB_LBKDBBDFPOL_OFFSET UNITYSDK_OFFSET(0x15A61550)
#define GJDPEGIFLGB_LEJMCJJKENC_OFFSET UNITYSDK_OFFSET(0x15A5F280)
#define GJDPEGIFLGB_LKPHDEGLFPN_OFFSET UNITYSDK_OFFSET(0x15A5F580)
#define GJDPEGIFLGB_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0x15A60000)
#define GJDPEGIFLGB_MAHCHECNLEP_OFFSET UNITYSDK_OFFSET(0x15A5F610)
#define GJDPEGIFLGB_MNIPCDGKBFM_OFFSET UNITYSDK_OFFSET(0x15A60470)
#define GJDPEGIFLGB_NFFOGKDCPPL_OFFSET UNITYSDK_OFFSET(0x15A5E4E0)
#define GJDPEGIFLGB_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x15A60A60)
#define GJDPEGIFLGB_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15A606A0)
#define GJDPEGIFLGB_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0x15A5FF70)
#define GJDPEGIFLGB_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x15A5EFD0)
#define GJDPEGIFLGB_PFOPJNGPFBC_OFFSET UNITYSDK_OFFSET(0x15A600A0)
#define GJDPEGIFLGB_PGOICMAPHBL_OFFSET UNITYSDK_OFFSET(0x15A60150)
#define GJDPEGIFLGB_PHEPLPLJCKD_OFFSET UNITYSDK_OFFSET(0x15A5EE10)
#define GJDPEGIFLGB_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x15A61D40)

inline static constexpr unsigned int GJDPEGIFLGB_TypeDefinitionIndex = 75539;

	class GJDPEGIFLGB : public ::System::Object
	{
	public:
		::System::String* LHIIKJMPHCE; // 0x10
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* NBHMNNAJIOH; // 0x18
		::Il2CppArray<::System::String*>* NFMGAMLFOCL; // 0x20
		::RPG::Client::ActivityHipplen::MonoBabyHipplen* KDIPIJCAAEG; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::GameEntity* OBNGMEFNDLF; // 0x38
		::System::String* _UniqueName_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::GCLLMHLFLFI*>* GOCHMLGFPGN; // 0x48
		::System::String* NIDFIDGCPEC; // 0x50
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x58
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x60
		::System::UInt32 POHKENBNFIG; // 0x68
		::System::Single PEHHBBNAMEH; // 0x6C
		::System::Int32 PECPFKOMODN; // 0x70
		::System::Boolean DJIPGHOJEKL; // 0x74
		::System::Byte _padding0[0x3];
		::System::Single PCABEJLHMBG; // 0x78
		// static const ::System::String* BCGIMAIKLIN; // 0x0
		// static const ::System::String* DBHBHILPLEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void NFFOGKDCPPL(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_NFFOGKDCPPL_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* BPGLLLGDNGP()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_BPGLLLGDNGP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void EAEOHCFMAKH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_EAEOHCFMAKH_OFFSET))(this, a1);
		}

		::System::Void FINCDMBOEBF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_FINCDMBOEBF_OFFSET))(this, a1);
		}

		::System::Void PHEPLPLJCKD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_PHEPLPLJCKD_OFFSET))(this, a1, a2);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void FJILNOEBEFF(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_FJILNOEBEFF_OFFSET))(this, a1);
		}

		::System::Void ECCJCGOJDJB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_ECCJCGOJDJB_OFFSET))(this, a1);
		}

		::System::Single BIECOAKLHOK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_BIECOAKLHOK_OFFSET))(this);
		}

		::System::Void HIHBCJKEAFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_HIHBCJKEAFH_OFFSET))(this, a1);
		}

		::System::Void LEJMCJJKENC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_LEJMCJJKENC_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void CLJNBDIHICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_CLJNBDIHICG_OFFSET))(this);
		}

		::System::Void MAHCHECNLEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_MAHCHECNLEP_OFFSET))(this, a1);
		}

		::System::Void HBHBGAKMBAF(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_HBHBGAKMBAF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FDHGELBAPKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_FDHGELBAPKI_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_CIADCOCBJDB_OFFSET))(this);
		}

		::System::Void INEJMACHPIJ(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_INEJMACHPIJ_OFFSET))(this, a1);
		}

		::System::Void LKPHDEGLFPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_LKPHDEGLFPN_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* JKOJDDMPDLK(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_JKOJDDMPDLK_OFFSET))(this, a1, a2);
		}

		::System::Void IKNGPAEJKDP(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_IKNGPAEJKDP_OFFSET))(this, a1, a2);
		}

		::System::Void ONIPLEMHAME(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_ONIPLEMHAME_OFFSET))(this, a1, a2);
		}

		::System::Void LNDJJFIKDKH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_LNDJJFIKDKH_OFFSET))(this, a1, a2);
		}

		::System::Void PFOPJNGPFBC(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_PFOPJNGPFBC_OFFSET))(this, a1, a2);
		}

		::System::Void PGOICMAPHBL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_PGOICMAPHBL_OFFSET))(this, a1);
		}

		::System::Void BNOAPFMAFLA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_BNOAPFMAFLA_OFFSET))(this, a1);
		}

		::System::Boolean GDIOPBDNBBD(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_GDIOPBDNBBD_OFFSET))(this, a1);
		}

		::System::Boolean AGFNOCJBAPE(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_AGFNOCJBAPE_OFFSET))(this, a1);
		}

		::System::Void MNIPCDGKBFM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_MNIPCDGKBFM_OFFSET))(this, a1);
		}

		::System::Void BKHELFLAHEP(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_BKHELFLAHEP_OFFSET))(this, a1, a2);
		}

		::System::Void EIMKLOLBIDG(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_EIMKLOLBIDG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityHipplen::MonoBabyHipplen* FNJCHFFNCLI()
		{
			return ((::RPG::Client::ActivityHipplen::MonoBabyHipplen*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_FNJCHFFNCLI_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void GJNHPKJELFN(::UnityEngine::Vector3 a1, ::System::Nullable* a2, ::PCFGFOGMLNN* a3, ::NFGIHNCHEDO* a4, ::RPG::GameCore::CharacterMotionFlag a5, ::System::Boolean a6, ::System::Single a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable*, ::PCFGFOGMLNN*, ::NFGIHNCHEDO*, ::RPG::GameCore::CharacterMotionFlag, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_GJNHPKJELFN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EBLMEKGAKAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_EBLMEKGAKAD_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void BGEBEKMJIPD(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_BGEBEKMJIPD_OFFSET))(this, a1, a2);
		}

		::System::Void CKHJDHIFGIA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_CKHJDHIFGIA_OFFSET))(this, a1);
		}

		::System::Void KKALPPEBJGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_KKALPPEBJGI_OFFSET))(this);
		}

		::System::Void DAFLJFOMEGK(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_DAFLJFOMEGK_OFFSET))(this, a1, a2);
		}

		::System::Void JKGMEFMCLMC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_JKGMEFMCLMC_OFFSET))(this, a1);
		}

		::System::Void AMEJADCJEGD(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_AMEJADCJEGD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IJCNBPLOHIM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_IJCNBPLOHIM_OFFSET))(this, a1);
		}

		::System::Void LBKDBBDFPOL(::System::Single a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_LBKDBBDFPOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EHLFMMBGNNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_EHLFMMBGNNG_OFFSET))(this, a1);
		}

		::System::Single JJECFCKKAMM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_JJECFCKKAMM_OFFSET))(this);
		}

		::System::Void AANLCPCOMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_AANLCPCOMDL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KHOEDMDFGCG()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_KHOEDMDFGCG_OFFSET))(this);
		}

		::System::Void GKCCKDIFHDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_GKCCKDIFHDP_OFFSET))(this);
		}

		::System::Boolean DIPPDGNGCND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_DIPPDGNGCND_OFFSET))(this);
		}

		::System::Void BPMBBCKOMDI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_BPMBBCKOMDI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_CECMCADBMDE_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GJDPEGIFLGB_SET_UNIQUENAME_OFFSET))(this, a1);
		}

	};
