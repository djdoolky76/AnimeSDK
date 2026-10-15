#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJKOBOHPAB;
namespace RPG::Client { class ChallengePeakTeamContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC9B1990)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS42_0___CHECKHAVEEQUIPMENTCONFLICT_B__1_OFFSET UNITYSDK_OFFSET(0xC9B2110)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext___c__DisplayClass42_0_TypeDefinitionIndex = 63196;

	class ChallengePeakTeamContext___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeakTeamContext* __4__this; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* lineupAvatarIDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckHaveEquipmentConflict_b__1(::KLJKOBOHPAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLJKOBOHPAB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS42_0___CHECKHAVEEQUIPMENTCONFLICT_B__1_OFFSET))(this, a1);
		}

	};
}
