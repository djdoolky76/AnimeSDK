#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODLAALCCNF;
class CMOPLAHDEPN;
class EAODNLIPMEO;
class FBAMAFLOBGA;
class FGJGDIBHBGK;
class FOMDMAGLLNI;
class GEKNAKDAMJF;
class ICMJACOKIPI;
class JCKGBFJJFFC;
class KLECENLPBJL;
class MNHJPIONJHO;
class OLOFPKHFPJL;
class PMMOFOBCINL;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKCJOCJGHKC_AAJFPMOMDFJ_OFFSET UNITYSDK_OFFSET(0xD74EE00)
#define CKCJOCJGHKC_ADD_ONBESTRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xD74E800)
#define CKCJOCJGHKC_ADD_ONCURRENTSESSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xD74E520)
#define CKCJOCJGHKC_APIJPPFLFPN_OFFSET UNITYSDK_OFFSET(0xD74E710)
#define CKCJOCJGHKC_APKKKGFAFNE_OFFSET UNITYSDK_OFFSET(0xD74FA80)
#define CKCJOCJGHKC_BDMOBCADGEB_OFFSET UNITYSDK_OFFSET(0xD74FDC0)
#define CKCJOCJGHKC_CLNHACPBCOP_OFFSET UNITYSDK_OFFSET(0xD74E4B0)
#define CKCJOCJGHKC_CTOR_OFFSET UNITYSDK_OFFSET(0xD74E900)
#define CKCJOCJGHKC_FFIGBOBCMMK_OFFSET UNITYSDK_OFFSET(0xD74FC40)
#define CKCJOCJGHKC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD74E460)
#define CKCJOCJGHKC_GET_HASOBTAINEDBADGE_OFFSET UNITYSDK_OFFSET(0xD74E8C0)
#define CKCJOCJGHKC_GET_HASTAKENSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0xD74E8E0)
#define CKCJOCJGHKC_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xD74E5E0)
#define CKCJOCJGHKC_HEOIGNCBMKL_OFFSET UNITYSDK_OFFSET(0xD74E790)
#define CKCJOCJGHKC_HLPJAFLDBJF_OFFSET UNITYSDK_OFFSET(0xD74ECD0)
#define CKCJOCJGHKC_IAMBCLPFBFD_OFFSET UNITYSDK_OFFSET(0xD74FD60)
#define CKCJOCJGHKC_JALKNACPOMI_OFFSET UNITYSDK_OFFSET(0xD74EF90)
#define CKCJOCJGHKC_JELIPPKEIFO_OFFSET UNITYSDK_OFFSET(0xD74FE00)
#define CKCJOCJGHKC_JFMKPGMCFLE_OFFSET UNITYSDK_OFFSET(0xD74F640)
#define CKCJOCJGHKC_KKOJCPNFLLF_OFFSET UNITYSDK_OFFSET(0xD74E640)
#define CKCJOCJGHKC_LJBBIGBMLLI_OFFSET UNITYSDK_OFFSET(0xD74F780)
#define CKCJOCJGHKC_MMAFLBPLHPD_OFFSET UNITYSDK_OFFSET(0xD74F9A0)
#define CKCJOCJGHKC_MMJKFEKGJCK_OFFSET UNITYSDK_OFFSET(0xD74F570)
#define CKCJOCJGHKC_OEEPEMKFPMI_OFFSET UNITYSDK_OFFSET(0xD74E750)
#define CKCJOCJGHKC_ONENANLMNAI_OFFSET UNITYSDK_OFFSET(0xD74E600)
#define CKCJOCJGHKC_PMHKMKGNAKP_OFFSET UNITYSDK_OFFSET(0xD74E9D0)
#define CKCJOCJGHKC_PNAJMAMAPHG_OFFSET UNITYSDK_OFFSET(0xD74E470)
#define CKCJOCJGHKC_PPFDLEKECGI_OFFSET UNITYSDK_OFFSET(0xD74EF40)
#define CKCJOCJGHKC_REMOVE_ONBESTRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xD74E860)
#define CKCJOCJGHKC_REMOVE_ONCURRENTSESSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xD74E580)
#define CKCJOCJGHKC_SET_HASOBTAINEDBADGE_OFFSET UNITYSDK_OFFSET(0xD74E8D0)
#define CKCJOCJGHKC_SET_HASTAKENSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0xD74E8F0)
#define CKCJOCJGHKC_SET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xD74E5F0)
#define CKCJOCJGHKC__STARTNEWENGAGEMENTFROMSTAGE_B__50_0_OFFSET UNITYSDK_OFFSET(0xD74FE40)

inline static constexpr unsigned int CKCJOCJGHKC_TypeDefinitionIndex = 81439;

	class CKCJOCJGHKC : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* HDAJGJBJNOM; // 0x10
		::System::Action* OnCurrentSessionChanged; // 0x18
		::EAODNLIPMEO* _Config_k__BackingField; // 0x20
		::FGJGDIBHBGK* EMPNNNAFGFO; // 0x28
		::AODLAALCCNF* NCIINDGLMFI; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* JJJBHNOICLH; // 0x38
		::MNHJPIONJHO* ECKBBFILCDB; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* CAJOJHLABPB; // 0x48
		::System::Action* OnBestRecordChanged; // 0x50
		::System::Boolean _HasTakenSpecialReward_k__BackingField; // 0x58
		::System::Boolean _HasObtainedBadge_k__BackingField; // 0x59
		::System::Boolean _IsPassed_k__BackingField; // 0x5A
		::System::Void _ctor(::EAODNLIPMEO* a1, ::MNHJPIONJHO* a2, ::FGJGDIBHBGK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EAODNLIPMEO*, ::MNHJPIONJHO*, ::FGJGDIBHBGK*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::EAODNLIPMEO* get_Config()
		{
			return ((::EAODNLIPMEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_GET_CONFIG_OFFSET))(this);
		}

		::AODLAALCCNF* PNAJMAMAPHG()
		{
			return ((::AODLAALCCNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_PNAJMAMAPHG_OFFSET))(this);
		}

		::System::Void CLNHACPBCOP(::AODLAALCCNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AODLAALCCNF*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_CLNHACPBCOP_OFFSET))(this, a1);
		}

		::System::Void add_OnCurrentSessionChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_ADD_ONCURRENTSESSIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnCurrentSessionChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_REMOVE_ONCURRENTSESSIONCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_GET_ISPASSED_OFFSET))(this);
		}

		::System::Void set_IsPassed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_SET_ISPASSED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* ONENANLMNAI()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_ONENANLMNAI_OFFSET))(this);
		}

		::System::Boolean KKOJCPNFLLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_KKOJCPNFLLF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* APIJPPFLFPN()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_APIJPPFLFPN_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* OEEPEMKFPMI()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_OEEPEMKFPMI_OFFSET))(this);
		}

		::System::Void HEOIGNCBMKL(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_HEOIGNCBMKL_OFFSET))(this, a1);
		}

		::System::Void add_OnBestRecordChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_ADD_ONBESTRECORDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBestRecordChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_REMOVE_ONBESTRECORDCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasObtainedBadge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_GET_HASOBTAINEDBADGE_OFFSET))(this);
		}

		::System::Void set_HasObtainedBadge(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_SET_HASOBTAINEDBADGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTakenSpecialReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_GET_HASTAKENSPECIALREWARD_OFFSET))(this);
		}

		::System::Void set_HasTakenSpecialReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_SET_HASTAKENSPECIALREWARD_OFFSET))(this, a1);
		}

		::System::Void PMHKMKGNAKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_PMHKMKGNAKP_OFFSET))(this);
		}

		::System::Void HLPJAFLDBJF(::System::Collections::Generic::IReadOnlyList_1<::ICMJACOKIPI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::ICMJACOKIPI*>*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_HLPJAFLDBJF_OFFSET))(this, a1);
		}

		::System::Void AAJFPMOMDFJ(::System::Collections::Generic::IEnumerable_1<::CMOPLAHDEPN*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::PMMOFOBCINL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::CMOPLAHDEPN*>*, ::System::Collections::Generic::IReadOnlyList_1<::PMMOFOBCINL*>*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_AAJFPMOMDFJ_OFFSET))(this, a1, a2);
		}

		::System::Void PPFDLEKECGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_PPFDLEKECGI_OFFSET))(this, a1);
		}

		::System::Void JALKNACPOMI(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_JALKNACPOMI_OFFSET))(this, a1, a2);
		}

		::System::Void MMJKFEKGJCK(::OLOFPKHFPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLOFPKHFPJL*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_MMJKFEKGJCK_OFFSET))(this, a1);
		}

		::System::Void JFMKPGMCFLE(::JCKGBFJJFFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCKGBFJJFFC*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_JFMKPGMCFLE_OFFSET))(this, a1);
		}

		::System::Void LJBBIGBMLLI(::GEKNAKDAMJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEKNAKDAMJF*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_LJBBIGBMLLI_OFFSET))(this, a1);
		}

		::System::Void MMAFLBPLHPD(::FBAMAFLOBGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_MMAFLBPLHPD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* APKKKGFAFNE(::FOMDMAGLLNI* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FOMDMAGLLNI*, ::System::Int32))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_APKKKGFAFNE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* FFIGBOBCMMK(::System::Int32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_FFIGBOBCMMK_OFFSET))(this, a1);
		}

		::System::Void IAMBCLPFBFD(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_IAMBCLPFBFD_OFFSET))(this, a1, a2);
		}

		::System::Void BDMOBCADGEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_BDMOBCADGEB_OFFSET))(this);
		}

		::System::Void JELIPPKEIFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCJOCJGHKC_JELIPPKEIFO_OFFSET))(this);
		}

		::System::Void _StartNewEngagementFromStage_b__50_0(::KLECENLPBJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLECENLPBJL*))((::PBYTE)hIl2Cpp + CKCJOCJGHKC__STARTNEWENGAGEMENTFROMSTAGE_B__50_0_OFFSET))(this, a1);
		}

	};
