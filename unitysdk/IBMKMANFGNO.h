#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class DNLKMHLAPHC;
class LDKMOFFMGEL;
class OKCCLEEPELM;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBMKMANFGNO_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x15E345C0)
#define IBMKMANFGNO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E34390)
#define IBMKMANFGNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E34490)
#define IBMKMANFGNO_DMEKAAEPJHE_OFFSET UNITYSDK_OFFSET(0x15E34B00)
#define IBMKMANFGNO_GETALLSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x15E359F0)
#define IBMKMANFGNO_GETLOCKEDUNITS_OFFSET UNITYSDK_OFFSET(0x15E359B0)
#define IBMKMANFGNO_GETSLOTUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0x15E35A70)
#define IBMKMANFGNO_GETSLOTUNITUID_OFFSET UNITYSDK_OFFSET(0x15E358D0)
#define IBMKMANFGNO_JLDMHKBIPAA_OFFSET UNITYSDK_OFFSET(0x15E34660)
#define IBMKMANFGNO_LNJBKOHLEDO_OFFSET UNITYSDK_OFFSET(0x15E35040)
#define IBMKMANFGNO_PHCNFKPFCOM_OFFSET UNITYSDK_OFFSET(0x15E35940)

inline static constexpr unsigned int IBMKMANFGNO_TypeDefinitionIndex = 67419;

	class IBMKMANFGNO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>* LMKAMANCJOD; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* MHCEPJECNGO; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* BKADBEIPNJC; // 0x20
		::RPG::Client::RogueMagicScepterInfo* OLOCIGECHBG; // 0x28
		::RPG::Client::RogueMagicScepterDataItem* PAKNADCNPMB; // 0x30
		::System::Void _ctor(::RPG::Client::RogueMagicScepterInfo* a1, ::RPG::Client::RogueMagicScepterDataItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + IBMKMANFGNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMKMANFGNO_DISPOSE_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::DNLKMHLAPHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNLKMHLAPHC*))((::PBYTE)hIl2Cpp + IBMKMANFGNO_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void JLDMHKBIPAA(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + IBMKMANFGNO_JLDMHKBIPAA_OFFSET))(this, a1);
		}

		::System::Void DMEKAAEPJHE(::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>*))((::PBYTE)hIl2Cpp + IBMKMANFGNO_DMEKAAEPJHE_OFFSET))(this, a1);
		}

		::System::Void LNJBKOHLEDO(::Google::Protobuf::Collections::RepeatedField_1<::LDKMOFFMGEL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::LDKMOFFMGEL*>*))((::PBYTE)hIl2Cpp + IBMKMANFGNO_LNJBKOHLEDO_OFFSET))(this, a1);
		}

		::System::Void PHCNFKPFCOM(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>, ::System::UInt32>*))((::PBYTE)hIl2Cpp + IBMKMANFGNO_PHCNFKPFCOM_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetLockedUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMKMANFGNO_GETLOCKEDUNITS_OFFSET))(this);
		}

		::System::UInt32 GetAllSlotCount(::RPG::GameCore::RogueMagicMountType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + IBMKMANFGNO_GETALLSLOTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSlotUnitUID(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + IBMKMANFGNO_GETSLOTUNITUID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicUnitDataItem* GetSlotUnitDataItem(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + IBMKMANFGNO_GETSLOTUNITDATAITEM_OFFSET))(this, a1, a2);
		}

	};
