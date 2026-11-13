#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EOPEINOKFCI_BCAPJPMKODB_OFFSET UNITYSDK_OFFSET(0x16B300E0)
#define EOPEINOKFCI_CTOR_OFFSET UNITYSDK_OFFSET(0x16B30000)
#define EOPEINOKFCI_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x16B30290)
#define EOPEINOKFCI_GET_PACKMISSIONID_OFFSET UNITYSDK_OFFSET(0x16B30270)
#define EOPEINOKFCI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16B30010)
#define EOPEINOKFCI_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0x16B30080)
#define EOPEINOKFCI_SET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x16B302A0)
#define EOPEINOKFCI_SET_PACKMISSIONID_OFFSET UNITYSDK_OFFSET(0x16B30280)

inline static constexpr unsigned int EOPEINOKFCI_TypeDefinitionIndex = 68020;

	class EOPEINOKFCI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* _CustomUnlockConditionConfigList_k__BackingField; // 0x10
		::System::UInt32 _PackMissionID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPEINOKFCI_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPEINOKFCI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPG::GameCore::MiddleSinglePackMissionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleSinglePackMissionConfig*))((::PBYTE)hIl2Cpp + EOPEINOKFCI_KPKCFMCJBCF_OFFSET))(this, a1);
		}

		::System::Void BCAPJPMKODB(::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*))((::PBYTE)hIl2Cpp + EOPEINOKFCI_BCAPJPMKODB_OFFSET))(this, a1);
		}

		::System::UInt32 get_PackMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPEINOKFCI_GET_PACKMISSIONID_OFFSET))(this);
		}

		::System::Void set_PackMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOPEINOKFCI_SET_PACKMISSIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* get_CustomUnlockConditionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPEINOKFCI_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this);
		}

		::System::Void set_CustomUnlockConditionConfigList(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*))((::PBYTE)hIl2Cpp + EOPEINOKFCI_SET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this, a1);
		}

	};
