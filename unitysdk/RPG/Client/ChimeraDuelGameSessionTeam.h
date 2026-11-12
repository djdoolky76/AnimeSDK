#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class AMHPAMHCPHO;
class CJHOCMLPMJD;
class HGEBBOPADLG;
class HIFFJEEAFAA;
class NHDGNBKBNDB;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChimeraDuelGameSessionTeam; }
namespace RPG::Client { class ChimeraDuelGameSessionTeamMember; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0xD488F30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATE_OFFSET UNITYSDK_OFFSET(0xD488000)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD495470)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD489A40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTALLMEMBERSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD495970)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTLINEUP_OFFSET UNITYSDK_OFFSET(0xD4918A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_ISSELLFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD4952D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERDATA_OFFSET UNITYSDK_OFFSET(0xD495210)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xD4951F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xD495280)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xD4944D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_REQUIREDMINMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xD4953D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONCHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xD494FC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYINSERTMEMBER_OFFSET UNITYSDK_OFFSET(0xD48B500)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYLINEUPUPDATE_OFFSET UNITYSDK_OFFSET(0xD48BA80)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYREMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0xD48B2E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYUPDATEMEMBER_OFFSET UNITYSDK_OFFSET(0xD48B6B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONSELLCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xD495120)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDSELL_OFFSET UNITYSDK_OFFSET(0xD495070)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDUPGRADE_OFFSET UNITYSDK_OFFSET(0xD494CD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERS_OFFSET UNITYSDK_OFFSET(0xD494B40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0xD495200)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SIMULATEINSERTION_OFFSET UNITYSDK_OFFSET(0xD491DB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SWAPMEMBERS_OFFSET UNITYSDK_OFFSET(0xD494A60)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOTATSLOT_OFFSET UNITYSDK_OFFSET(0xD4955F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD4956B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBERATSLOT_OFFSET UNITYSDK_OFFSET(0xD491730)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBER_OFFSET UNITYSDK_OFFSET(0xD48B430)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETSLOTOFMEMBER_OFFSET UNITYSDK_OFFSET(0xD4958B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_UPGRADEMEMBER_OFFSET UNITYSDK_OFFSET(0xD494BF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__SYNCLINEUPCHANGE_OFFSET UNITYSDK_OFFSET(0xD494810)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionTeam_TypeDefinitionIndex = 64761;

	class ChimeraDuelGameSessionTeam : public ::System::Object
	{
	public:
		::System::Action* OnChanged; // 0x10
		::AMHPAMHCPHO* _Dependencies; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _Slotted; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionTeamMember*>* _Members; // 0x28
		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder* _PendingUpgradeEffect; // 0x30
		::System::Action* OnSold; // 0x38
		::System::UInt32 _MasterID_k__BackingField; // 0x40
		::System::Void _ctor(::AMHPAMHCPHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMHPAMHCPHO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnNotifyRemoveMember(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYREMOVEMEMBER_OFFSET))(this, a1);
		}

		::System::Void OnNotifyInsertMember(::NHDGNBKBNDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHDGNBKBNDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYINSERTMEMBER_OFFSET))(this, a1);
		}

		::System::Void OnNotifyUpdateMember(::NHDGNBKBNDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHDGNBKBNDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYUPDATEMEMBER_OFFSET))(this, a1);
		}

		::System::Void OnNotifyLineupUpdate(::CJHOCMLPMJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJHOCMLPMJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONNOTIFYLINEUPUPDATE_OFFSET))(this, a1);
		}

		::System::Void SwapMembers(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SWAPMEMBERS_OFFSET))(this, a1, a2);
		}

		::System::Void UpgradeMember(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_UPGRADEMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Void ReorderMembers(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERS_OFFSET))(this, a1);
		}

		::System::Void ReorderMembersAndUpgrade(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDUPGRADE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnChangeLineupScRsp(::HIFFJEEAFAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIFFJEEAFAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONCHANGELINEUPSCRSP_OFFSET))(this, a1);
		}

		::System::Void ReorderMembersAndSell(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_REORDERMEMBERSANDSELL_OFFSET))(this, a1, a2);
		}

		::System::Void OnSellChimeraScRsp(::HGEBBOPADLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGEBBOPADLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_ONSELLCHIMERASCRSP_OFFSET))(this, a1);
		}

		::System::Void _SyncLineupChange(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM__SYNCLINEUPCHANGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SET_MASTERID_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelMasterData* get_MasterData()
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MASTERDATA_OFFSET))(this);
		}

		::System::Int32 get_MemberSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERSLOTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSellFeatureUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_ISSELLFEATUREUNLOCKED_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_RequiredMinMemberCount()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_GET_REQUIREDMINMEMBERCOUNT_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeam* Create(::AMHPAMHCPHO* a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::NHDGNBKBNDB*>* a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeam*(*)(::AMHPAMHCPHO*, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::NHDGNBKBNDB*>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeam* CreateFake(::AMHPAMHCPHO* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeam*(*)(::AMHPAMHCPHO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_CREATEFAKE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionTeamMember* TryGetMemberAtSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBERATSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionTeamMember* TryGetMember(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETMEMBER_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* TryExportMemberSnapshotAtSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOTATSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* TryExportMemberSnapshot(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYEXPORTMEMBERSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Int32 TryGetSlotOfMember(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_TRYGETSLOTOFMEMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* ExportAllMembersSnapshot()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTALLMEMBERSSNAPSHOT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* ExportLineup()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_EXPORTLINEUP_OFFSET))(this);
		}

		static ::System::Void SimulateInsertion(::System::Int32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAM_SIMULATEINSERTION_OFFSET))(a1, a2, a3);
		}

	};
}
