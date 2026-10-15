#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKBCNADLOGN.h"
#include "unitysdk/IPIBEOOJMBE_TeleportPhase.h"
#include "unitysdk/ANMMOFEEPEP.h"
#include "unitysdk/IHJCOALACON.h"
class ABFENGEAJNE;
class OMFLOBEGHNM;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimModule; }
namespace RPG::Client { class FiveDimPlayerEnterLeaveInfo; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define IPIBEOOJMBE_BENPNNIGHJL_OFFSET UNITYSDK_OFFSET(0x16514350)
#define IPIBEOOJMBE_BPJOECLGJGB_OFFSET UNITYSDK_OFFSET(0x16515790)
#define IPIBEOOJMBE_CIBEEAMFHOJ_OFFSET UNITYSDK_OFFSET(0x16515120)
#define IPIBEOOJMBE_CLEAR_OFFSET UNITYSDK_OFFSET(0x16513D40)
#define IPIBEOOJMBE_CMDGAHGHDLA_OFFSET UNITYSDK_OFFSET(0x16515990)
#define IPIBEOOJMBE_CTOR_OFFSET UNITYSDK_OFFSET(0x16515BC0)
#define IPIBEOOJMBE_DDFDGLGCBAI_OFFSET UNITYSDK_OFFSET(0x165158A0)
#define IPIBEOOJMBE_DLHHEKECOHA_OFFSET UNITYSDK_OFFSET(0x165142C0)
#define IPIBEOOJMBE_DOMHJGJIAJG_OFFSET UNITYSDK_OFFSET(0x16514860)
#define IPIBEOOJMBE_EJIBBEOBJOO_OFFSET UNITYSDK_OFFSET(0x165147B0)
#define IPIBEOOJMBE_EMAAEEGHKIL_OFFSET UNITYSDK_OFFSET(0x165152E0)
#define IPIBEOOJMBE_FELDLOFBKCJ_OFFSET UNITYSDK_OFFSET(0x16515250)
#define IPIBEOOJMBE_FICPGIFCFBN_OFFSET UNITYSDK_OFFSET(0x16514F00)
#define IPIBEOOJMBE_FMBEMCMCFHB_OFFSET UNITYSDK_OFFSET(0x16514800)
#define IPIBEOOJMBE_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x165139A0)
#define IPIBEOOJMBE_HLEDPDMJPAH_OFFSET UNITYSDK_OFFSET(0x165144C0)
#define IPIBEOOJMBE_IMHNMLHHGPE_OFFSET UNITYSDK_OFFSET(0x165158F0)
#define IPIBEOOJMBE_JFCLPNHLPBK_OFFSET UNITYSDK_OFFSET(0x16515850)
#define IPIBEOOJMBE_JIEFKIKAJJO_OFFSET UNITYSDK_OFFSET(0x165140B0)
#define IPIBEOOJMBE_JIKGHBMBDIH_OFFSET UNITYSDK_OFFSET(0x16514940)
#define IPIBEOOJMBE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16514030)
#define IPIBEOOJMBE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x165139B0)
#define IPIBEOOJMBE_KPOLMHAHOPB_OFFSET UNITYSDK_OFFSET(0x16515020)
#define IPIBEOOJMBE_LHPCCPKKEBI_OFFSET UNITYSDK_OFFSET(0x16514440)
#define IPIBEOOJMBE_LNEPPGJACHJ_OFFSET UNITYSDK_OFFSET(0x16514510)
#define IPIBEOOJMBE_MNHGKPJOHNN_OFFSET UNITYSDK_OFFSET(0x16513E40)
#define IPIBEOOJMBE_NCNHNECHHAC_OFFSET UNITYSDK_OFFSET(0x165148C0)
#define IPIBEOOJMBE_NEOCFNKAFGN_OFFSET UNITYSDK_OFFSET(0x16513C70)
#define IPIBEOOJMBE_OKGOKLCLIHE_OFFSET UNITYSDK_OFFSET(0x16515A20)
#define IPIBEOOJMBE_ONMPCLIIFCE_OFFSET UNITYSDK_OFFSET(0x16513FD0)
#define IPIBEOOJMBE_PEFMCLFMNMO_OFFSET UNITYSDK_OFFSET(0x165143B0)
#define IPIBEOOJMBE_PEIMEMNHFKM_OFFSET UNITYSDK_OFFSET(0x16514990)
#define IPIBEOOJMBE_PLIADKGLEPA_OFFSET UNITYSDK_OFFSET(0x16514C50)

inline static constexpr unsigned int IPIBEOOJMBE_TypeDefinitionIndex = 60555;

	class IPIBEOOJMBE : public ::DKBCNADLOGN
	{
	public:
		::UnityEngine::Coroutine* OKCEDOBNPDE; // 0x68
		::RPG::Client::FiveDimGameInstance* PACHDCGDDLF; // 0x70
		::ABFENGEAJNE* NFEGAKCJDCE; // 0x78
		::IPIBEOOJMBE_TeleportPhase NOHNKAIALPJ; // 0x80
		::System::Boolean NFNOPPCDMAL; // 0x84
		::System::Boolean KFAMICOFFCC; // 0x85
		::System::Boolean MMGMCDGPJHD; // 0x86
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_CTOR_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::ANMMOFEEPEP a1, ::IHJCOALACON a2)
		{
			return ((::System::Void(*)(::PVOID, ::ANMMOFEEPEP, ::IHJCOALACON))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_CLEAR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DLHHEKECOHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_DLHHEKECOHA_OFFSET))(this);
		}

		::System::Void JIEFKIKAJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_JIEFKIKAJJO_OFFSET))(this);
		}

		::System::Void PEFMCLFMNMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_PEFMCLFMNMO_OFFSET))(this);
		}

		::System::Void LNEPPGJACHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_LNEPPGJACHJ_OFFSET))(this);
		}

		::System::Void PLIADKGLEPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_PLIADKGLEPA_OFFSET))(this);
		}

		::System::Void CIBEEAMFHOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_CIBEEAMFHOJ_OFFSET))(this);
		}

		::System::Void FICPGIFCFBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_FICPGIFCFBN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FELDLOFBKCJ()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_FELDLOFBKCJ_OFFSET))(this);
		}

		::System::Void ONMPCLIIFCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_ONMPCLIIFCE_OFFSET))(this);
		}

		::System::Void KPOLMHAHOPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_KPOLMHAHOPB_OFFSET))(this);
		}

		::System::Void EJIBBEOBJOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_EJIBBEOBJOO_OFFSET))(this);
		}

		::System::Void FMBEMCMCFHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_FMBEMCMCFHB_OFFSET))(this);
		}

		::System::Void DOMHJGJIAJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_DOMHJGJIAJG_OFFSET))(this);
		}

		::System::Boolean EMAAEEGHKIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_EMAAEEGHKIL_OFFSET))(this);
		}

		::System::Void JFCLPNHLPBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_JFCLPNHLPBK_OFFSET))(this);
		}

		::System::Void JIKGHBMBDIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_JIKGHBMBDIH_OFFSET))(this);
		}

		::System::Void BPJOECLGJGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_BPJOECLGJGB_OFFSET))(this);
		}

		::System::Boolean DDFDGLGCBAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_DDFDGLGCBAI_OFFSET))(this);
		}

		::System::Void LHPCCPKKEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_LHPCCPKKEBI_OFFSET))(this);
		}

		::System::Void NCNHNECHHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_NCNHNECHHAC_OFFSET))(this);
		}

		::System::Void IMHNMLHHGPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_IMHNMLHHGPE_OFFSET))(this);
		}

		::RPG::Client::FiveDimPlayerEnterLeaveInfo* BENPNNIGHJL()
		{
			return ((::RPG::Client::FiveDimPlayerEnterLeaveInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_BENPNNIGHJL_OFFSET))(this);
		}

		::System::Void HLEDPDMJPAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_HLEDPDMJPAH_OFFSET))(this);
		}

		::System::Void MNHGKPJOHNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_MNHGKPJOHNN_OFFSET))(this);
		}

		::System::Void PEIMEMNHFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_PEIMEMNHFKM_OFFSET))(this);
		}

		::System::Void OKGOKLCLIHE(::OMFLOBEGHNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMFLOBEGHNM*))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_OKGOKLCLIHE_OFFSET))(this, a1);
		}

		::RPG::Client::FiveDimGameInstance* NEOCFNKAFGN()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_NEOCFNKAFGN_OFFSET))(this);
		}

		::RPG::Client::FiveDimModule* CMDGAHGHDLA()
		{
			return ((::RPG::Client::FiveDimModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIBEOOJMBE_CMDGAHGHDLA_OFFSET))(this);
		}

	};
