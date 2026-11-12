#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIKOBOMBMPB;
class KOFMGCNIMIN;
class OEDNNHAOHAB;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class RogueMiracleData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLEINFO_ADDMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xE9F6650)
#define RPG_CLIENT_ROGUEMIRACLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE9E6FE0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE9E7120)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xE9F69E0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xE9F6C70)
#define RPG_CLIENT_ROGUEMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET UNITYSDK_OFFSET(0xE9F6C10)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_1_OFFSET UNITYSDK_OFFSET(0xE9E8860)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_2_OFFSET UNITYSDK_OFFSET(0xE9F6420)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_OFFSET UNITYSDK_OFFSET(0xE9F61A0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xE9F6940)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xE9F6820)
#define RPG_CLIENT_ROGUEMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xE9F6B00)
#define RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xE9F6BC0)
#define RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xE9F6C90)
#define RPG_CLIENT_ROGUEMIRACLEINFO_SET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xE9F6C80)
#define RPG_CLIENT_ROGUEMIRACLEINFO_SYNCACHIVEDMIRACLE_OFFSET UNITYSDK_OFFSET(0xE9F6140)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleInfo_TypeDefinitionIndex = 69227;

	class RogueMiracleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* _AchivedMiracles_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAchivedMiracle(::HIKOBOMBMPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKOBOMBMPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_SYNCACHIVEDMIRACLE_OFFSET))(this, a1);
		}

		::System::Void RefreshAchivedMiracle(::OEDNNHAOHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDNNHAOHAB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_OFFSET))(this, a1);
		}

		::System::Void RefreshAchivedMiracle_1(::Google::Protobuf::Collections::RepeatedField_1<::KOFMGCNIMIN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::KOFMGCNIMIN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_1_OFFSET))(this, a1);
		}

		::System::Void RefreshAchivedMiracle_2(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHACHIVEDMIRACLE_2_OFFSET))(this, a1);
		}

		::System::Void AddMiracleItem(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_ADDMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Boolean RemoveMiracleItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshMiracleItem(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Void ReplaceMiracleItem(::System::UInt32 a1, ::KOFMGCNIMIN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMiracleData* GetMiracleDataByMiracleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueMiracleInGame* RPG_Client_IRogueMiracleInfo_GetMiracleDataByMiracleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, a1);
		}

		::System::Boolean IsMiracleAchieved(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}

		::System::Void set_AchivedMiracles(::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_SET_ACHIVEDMIRACLES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracleInGame*>* RPG_Client_IRogueMiracleInfo_get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}

	};
}
