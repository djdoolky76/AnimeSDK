#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHDGNBKBNDB;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionTeamMember; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0xCB30770)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATE_OFFSET UNITYSDK_OFFSET(0xCB2DC70)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CTOR_OFFSET UNITYSDK_OFFSET(0xCB310B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_CHIMERA_OFFSET UNITYSDK_OFFSET(0xCB310A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCB2DCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionTeamMember_TypeDefinitionIndex = 63335;

	class ChimeraDuelGameSessionTeamMember : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* _Chimera_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionChimera* get_Chimera()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_GET_CHIMERA_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeamMember* Create(::NHDGNBKBNDB* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::NHDGNBKBNDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionTeamMember* CreateFake(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeamMember*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONTEAMMEMBER_CREATEFAKE_OFFSET))(a1);
		}

	};
}
