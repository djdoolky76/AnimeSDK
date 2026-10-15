#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHHGBMIEBOE;
namespace RPG::Client { class CakeRaceGameGuessParticipantData; }
namespace RPG::Client { class CakeRaceParticipantData; }

#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC917C00)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC918EB0)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_GUESSCOIN_OFFSET UNITYSDK_OFFSET(0xC918E60)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0xC918DF0)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0xC918E10)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_SET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0xC918E00)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__INIT_OFFSET UNITYSDK_OFFSET(0xC918EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessParticipantData_TypeDefinitionIndex = 63043;

	class CakeRaceGameGuessParticipantData : public ::System::Object
	{
	public:
		::FHHGBMIEBOE* _GuessPlayerData; // 0x10
		::RPG::Client::CakeRaceParticipantData* _ParticipantData_k__BackingField; // 0x18
		::System::Void _ctor(::FHHGBMIEBOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHHGBMIEBOE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceParticipantData* get_ParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_ParticipantData(::RPG::Client::CakeRaceParticipantData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_SET_PARTICIPANTDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ParticipantID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::UInt32 get_GuessCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_GUESSCOIN_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameGuessParticipantData* Create(::FHHGBMIEBOE* a1)
		{
			return ((::RPG::Client::CakeRaceGameGuessParticipantData*(*)(::FHHGBMIEBOE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__INIT_OFFSET))(this);
		}

	};
}
