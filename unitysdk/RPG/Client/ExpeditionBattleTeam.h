#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICCEHNCMJAN.h"
#include "unitysdk/System/Object.h"
class JHKFCANMFOE;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace RPG::Client { class ExpeditionBattleTeamMember; }

#define RPG_CLIENT_EXPEDITIONBATTLETEAM_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE532D0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_CREATE_OFFSET UNITYSDK_OFFSET(0xCE52C30)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCE52BF0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_GETMEMBERBYSLOT_OFFSET UNITYSDK_OFFSET(0xCE47850)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_GETMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xCE46CE0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xCE52BC0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_GET_TEAMMEMBERS_OFFSET UNITYSDK_OFFSET(0xCE50E50)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_SETMEMBERBYSLOT_OFFSET UNITYSDK_OFFSET(0xCE533E0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_SETMEMBERS_OFFSET UNITYSDK_OFFSET(0xCE534B0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xCE52BE0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM_SYNCBYSERVER_OFFSET UNITYSDK_OFFSET(0xCE52D00)

namespace RPG::Client
{
	class ExpeditionBattleTeam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>* _TeamMembers; // 0x10
		::ICCEHNCMJAN _Identifier_k__BackingField; // 0x18
		// static const ::System::Object MAX_MEMBER_COUNT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_CTOR_OFFSET))(this);
		}

		::ICCEHNCMJAN get_Identifier()
		{
			return ((::ICCEHNCMJAN(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::ICCEHNCMJAN a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICCEHNCMJAN))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>* get_TeamMembers()
		{
			return ((::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_GET_TEAMMEMBERS_OFFSET))(this);
		}

		static ::RPG::Client::ExpeditionBattleTeam* Create(::ICCEHNCMJAN a1)
		{
			return ((::RPG::Client::ExpeditionBattleTeam*(*)(::ICCEHNCMJAN))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_CREATE_OFFSET))(a1);
		}

		::System::Void SyncByServer(::Google::Protobuf::Collections::RepeatedField_1<::JHKFCANMFOE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::JHKFCANMFOE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_SYNCBYSERVER_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_CLEAR_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleTeamMember* GetMemberBySlot(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleTeamMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_GETMEMBERBYSLOT_OFFSET))(this, a1);
		}

		::System::Void SetMemberBySlot(::System::UInt32 a1, ::RPG::Client::ExpeditionBattleTeamMember* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ExpeditionBattleTeamMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_SETMEMBERBYSLOT_OFFSET))(this, a1, a2);
		}

		::System::Void SetMembers(::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeamMember*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_SETMEMBERS_OFFSET))(this, a1);
		}

		::System::UInt32 GetMemberCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM_GETMEMBERCOUNT_OFFSET))(this);
		}

	};
}
