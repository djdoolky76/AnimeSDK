#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJHHGHKGAIL.h"
#include "unitysdk/RPG/Client/BaseLobby.h"
class PJMGBLIFDFP;
namespace RPG::Client { class CakeRaceFieldData; }
namespace RPG::Client { class CakeRaceLobby; }
namespace RPG::Client { class CakeRaceParticipantData; }
namespace RPG::Client { class LobbyMemberData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACELOBBY_CHANGESELFSTATE_OFFSET UNITYSDK_OFFSET(0x1D2FE500)
#define RPG_CLIENT_CAKERACELOBBY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FEA50)
#define RPG_CLIENT_CAKERACELOBBY_GET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x1D2FE940)
#define RPG_CLIENT_CAKERACELOBBY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2FE960)
#define RPG_CLIENT_CAKERACELOBBY_GET_LEADERPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x1D2FE900)
#define RPG_CLIENT_CAKERACELOBBY_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x1D2FE620)
#define RPG_CLIENT_CAKERACELOBBY_GET_SELFPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x1D2FE920)
#define RPG_CLIENT_CAKERACELOBBY_SET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x1D2FE950)
#define RPG_CLIENT_CAKERACELOBBY_SET_LEADERPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x1D2FE910)
#define RPG_CLIENT_CAKERACELOBBY_SET_SELFPARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x1D2FE930)
#define RPG_CLIENT_CAKERACELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x1D2FE4A0)
#define RPG_CLIENT_CAKERACELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0x1D2FE570)
#define RPG_CLIENT_CAKERACELOBBY__ISINMATCHEDSTATE_OFFSET UNITYSDK_OFFSET(0x1D2FE8B0)
#define RPG_CLIENT_CAKERACELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0x1D2FDC10)
#define RPG_CLIENT_CAKERACELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D2FE400)
#define RPG_CLIENT_CAKERACELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0x1D2FDE20)
#define RPG_CLIENT_CAKERACELOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0x1D2FDC70)
#define RPG_CLIENT_CAKERACELOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1D2FE450)
#define RPG_CLIENT_CAKERACELOBBY__SORTPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x1D2FE7A0)
#define RPG_CLIENT_CAKERACELOBBY__SYNCPARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x1D2FDE70)
#define RPG_CLIENT_CAKERACELOBBY___SORTPARTICIPANTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D2FEAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceLobby_TypeDefinitionIndex = 64490;

	class CakeRaceLobby : public ::RPG::Client::BaseLobby
	{
	public:
		::RPG::Client::CakeRaceFieldData* _FieldData_k__BackingField; // 0x60
		::RPG::Client::CakeRaceParticipantData* _SelfParticipantData_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* _Participants; // 0x70
		::RPG::Client::CakeRaceParticipantData* _LeaderParticipantData_k__BackingField; // 0x78
		::System::Boolean _IsSorted; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_CTOR_OFFSET))(this);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnRoomInit(::PJMGBLIFDFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONROOMINIT_OFFSET))(this, a1);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ONSTATECHANGED_OFFSET))(this);
		}

		::System::Void StartMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_STARTMATCH_OFFSET))(this);
		}

		::System::Void ChangeSelfState(::CJHHGHKGAIL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJHHGHKGAIL))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_CHANGESELFSTATE_OFFSET))(this, a1);
		}

		::System::Void _SyncParticipants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__SYNCPARTICIPANTS_OFFSET))(this);
		}

		::System::Void _SortParticipants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__SORTPARTICIPANTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _GetMembersByLobbyState()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__GETMEMBERSBYLOBBYSTATE_OFFSET))(this);
		}

		::System::Boolean _IsInMatchedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY__ISINMATCHEDSTATE_OFFSET))(this);
		}

		::RPG::Client::CakeRaceParticipantData* get_LeaderParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_LEADERPARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_LeaderParticipantData(::RPG::Client::CakeRaceParticipantData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_LEADERPARTICIPANTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceParticipantData* get_SelfParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_SELFPARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_SelfParticipantData(::RPG::Client::CakeRaceParticipantData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_SELFPARTICIPANTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* get_Participants()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_PARTICIPANTS_OFFSET))(this);
		}

		::RPG::Client::CakeRaceFieldData* get_FieldData()
		{
			return ((::RPG::Client::CakeRaceFieldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_FIELDDATA_OFFSET))(this);
		}

		::System::Void set_FieldData(::RPG::Client::CakeRaceFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_SET_FIELDDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceLobby* get_Instance()
		{
			return ((::RPG::Client::CakeRaceLobby*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 __SortParticipants_b__8_0(::RPG::Client::CakeRaceParticipantData* a1, ::RPG::Client::CakeRaceParticipantData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___SORTPARTICIPANTS_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
