#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class DHLPMJFEECF;
class KODHAHDHIKJ;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KODHAHDHIKJ_BLLNFEDGPCJ_OFFSET UNITYSDK_OFFSET(0xB592860)
#define KODHAHDHIKJ_BNIOPNAKJEM_OFFSET UNITYSDK_OFFSET(0xB592280)
#define KODHAHDHIKJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB591370)
#define KODHAHDHIKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB592B00)
#define KODHAHDHIKJ_CHKALMPGMGD_OFFSET UNITYSDK_OFFSET(0xB591720)
#define KODHAHDHIKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB591480)
#define KODHAHDHIKJ_DBKNAJJPAIJ_OFFSET UNITYSDK_OFFSET(0xB591B30)
#define KODHAHDHIKJ_DONMKEKENDH_OFFSET UNITYSDK_OFFSET(0xB591CA0)
#define KODHAHDHIKJ_FODEMABAADL_OFFSET UNITYSDK_OFFSET(0xB592310)
#define KODHAHDHIKJ_IFNCGMDKJJL_OFFSET UNITYSDK_OFFSET(0xB5923D0)
#define KODHAHDHIKJ_KFIBDOGGFGK_OFFSET UNITYSDK_OFFSET(0xB5912D0)
#define KODHAHDHIKJ_MDLILHPGHDP_OFFSET UNITYSDK_OFFSET(0xB592910)
#define KODHAHDHIKJ_MOPAMIJAFDG_OFFSET UNITYSDK_OFFSET(0xB5920C0)
#define KODHAHDHIKJ_NIPLGDLHOLH_OFFSET UNITYSDK_OFFSET(0xB591320)
#define KODHAHDHIKJ_OEBJNFMABJO_OFFSET UNITYSDK_OFFSET(0xB5919C0)
#define KODHAHDHIKJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB591520)

	class KODHAHDHIKJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*>* MKALNEJIKCO; // 0x10
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* DNPOJOFIAHM; // 0x18
		static ::RPG::Client::TextID* StaticGet_AEKPBJAFKKC()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "KODHAHDHIKJ")->GetStaticField(0x14BA0);
		}

		static ::RPG::Client::TextID* StaticGet_BKJCLADBFLK()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "KODHAHDHIKJ")->GetStaticField(0x14BB0);
		}

		static ::RPG::Client::TextID* StaticGet_HKAHOGLBKKA()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "KODHAHDHIKJ")->GetStaticField(0x14BC0);
		}

		::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KODHAHDHIKJ_CCTOR_OFFSET))();
		}

		::DHLPMJFEECF* KFIBDOGGFGK()
		{
			return ((::DHLPMJFEECF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_KFIBDOGGFGK_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* NIPLGDLHOLH()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_NIPLGDLHOLH_OFFSET))(this);
		}

		static ::KODHAHDHIKJ* BPLPBPMEODA(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::KODHAHDHIKJ*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* CHKALMPGMGD()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_CHKALMPGMGD_OFFSET))(this);
		}

		::System::Boolean MOPAMIJAFDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_MOPAMIJAFDG_OFFSET))(this);
		}

		::RPG::Client::TextID FODEMABAADL()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_FODEMABAADL_OFFSET))(this);
		}

		::System::Void IFNCGMDKJJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_IFNCGMDKJJL_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* OEBJNFMABJO()
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_OEBJNFMABJO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* DBKNAJJPAIJ(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_DBKNAJJPAIJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* DONMKEKENDH(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_DONMKEKENDH_OFFSET))(this, a1);
		}

		::System::Boolean BNIOPNAKJEM(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_BNIOPNAKJEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean BLLNFEDGPCJ(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_BLLNFEDGPCJ_OFFSET))(this, a1);
		}

		::System::Boolean MDLILHPGHDP(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + KODHAHDHIKJ_MDLILHPGHDP_OFFSET))(this, a1, a2);
		}

	};
