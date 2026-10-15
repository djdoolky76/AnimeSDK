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

#define IPIBEOOJMBE_BENPNNIGHJL_OFFSET UNITYSDK_OFFSET(0x16522460)
#define IPIBEOOJMBE_BPJOECLGJGB_OFFSET UNITYSDK_OFFSET(0x165238A0)
#define IPIBEOOJMBE_CIBEEAMFHOJ_OFFSET UNITYSDK_OFFSET(0x16523230)
#define IPIBEOOJMBE_CLEAR_OFFSET UNITYSDK_OFFSET(0x16521E50)
#define IPIBEOOJMBE_CMDGAHGHDLA_OFFSET UNITYSDK_OFFSET(0x16523AA0)
#define IPIBEOOJMBE_CTOR_OFFSET UNITYSDK_OFFSET(0x16523CD0)
#define IPIBEOOJMBE_DDFDGLGCBAI_OFFSET UNITYSDK_OFFSET(0x165239B0)
#define IPIBEOOJMBE_DLHHEKECOHA_OFFSET UNITYSDK_OFFSET(0x165223D0)
#define IPIBEOOJMBE_DOMHJGJIAJG_OFFSET UNITYSDK_OFFSET(0x16522970)
#define IPIBEOOJMBE_EJIBBEOBJOO_OFFSET UNITYSDK_OFFSET(0x165228C0)
#define IPIBEOOJMBE_EMAAEEGHKIL_OFFSET UNITYSDK_OFFSET(0x165233F0)
#define IPIBEOOJMBE_FELDLOFBKCJ_OFFSET UNITYSDK_OFFSET(0x16523360)
#define IPIBEOOJMBE_FICPGIFCFBN_OFFSET UNITYSDK_OFFSET(0x16523010)
#define IPIBEOOJMBE_FMBEMCMCFHB_OFFSET UNITYSDK_OFFSET(0x16522910)
#define IPIBEOOJMBE_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x16521AB0)
#define IPIBEOOJMBE_HLEDPDMJPAH_OFFSET UNITYSDK_OFFSET(0x165225D0)
#define IPIBEOOJMBE_IMHNMLHHGPE_OFFSET UNITYSDK_OFFSET(0x16523A00)
#define IPIBEOOJMBE_JFCLPNHLPBK_OFFSET UNITYSDK_OFFSET(0x16523960)
#define IPIBEOOJMBE_JIEFKIKAJJO_OFFSET UNITYSDK_OFFSET(0x165221C0)
#define IPIBEOOJMBE_JIKGHBMBDIH_OFFSET UNITYSDK_OFFSET(0x16522A50)
#define IPIBEOOJMBE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16522140)
#define IPIBEOOJMBE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16521AC0)
#define IPIBEOOJMBE_KPOLMHAHOPB_OFFSET UNITYSDK_OFFSET(0x16523130)
#define IPIBEOOJMBE_LHPCCPKKEBI_OFFSET UNITYSDK_OFFSET(0x16522550)
#define IPIBEOOJMBE_LNEPPGJACHJ_OFFSET UNITYSDK_OFFSET(0x16522620)
#define IPIBEOOJMBE_MNHGKPJOHNN_OFFSET UNITYSDK_OFFSET(0x16521F50)
#define IPIBEOOJMBE_NCNHNECHHAC_OFFSET UNITYSDK_OFFSET(0x165229D0)
#define IPIBEOOJMBE_NEOCFNKAFGN_OFFSET UNITYSDK_OFFSET(0x16521D80)
#define IPIBEOOJMBE_OKGOKLCLIHE_OFFSET UNITYSDK_OFFSET(0x16523B30)
#define IPIBEOOJMBE_ONMPCLIIFCE_OFFSET UNITYSDK_OFFSET(0x165220E0)
#define IPIBEOOJMBE_PEFMCLFMNMO_OFFSET UNITYSDK_OFFSET(0x165224C0)
#define IPIBEOOJMBE_PEIMEMNHFKM_OFFSET UNITYSDK_OFFSET(0x16522AA0)
#define IPIBEOOJMBE_PLIADKGLEPA_OFFSET UNITYSDK_OFFSET(0x16522D60)

	class IPIBEOOJMBE : public ::DKBCNADLOGN
	{
	public:
		::RPG::Client::FiveDimGameInstance* PACHDCGDDLF; // 0x68
		::UnityEngine::Coroutine* OKCEDOBNPDE; // 0x70
		::ABFENGEAJNE* NFEGAKCJDCE; // 0x78
		::IPIBEOOJMBE_TeleportPhase NOHNKAIALPJ; // 0x80
		::System::Boolean MMGMCDGPJHD; // 0x84
		::System::Boolean KFAMICOFFCC; // 0x85
		::System::Boolean NFNOPPCDMAL; // 0x86
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
