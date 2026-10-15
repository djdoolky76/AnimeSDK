#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNNMGIJMFK;
class CKCJOCJGHKC;
class EFCKAAKHBKG;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditTeamViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CREATEALL_OFFSET UNITYSDK_OFFSET(0xC966C30)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CREATEONE_OFFSET UNITYSDK_OFFSET(0xC966B60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC966B50)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditTeamViewModel_Factory_TypeDefinitionIndex = 81626;

	class ChallengeTierceTeamEditTeamViewModel_Factory : public ::System::Object
	{
	public:
		::ACNNMGIJMFK* _TeamConflictCheckService; // 0x10
		::EFCKAAKHBKG* _AvatarQueryService; // 0x18
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* _StageFactory; // 0x20
		::System::Void _ctor(::EFCKAAKHBKG* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* a2, ::ACNNMGIJMFK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EFCKAAKHBKG*, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory*, ::ACNNMGIJMFK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel* CreateOne(::CKCJOCJGHKC* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel*(*)(::PVOID, ::CKCJOCJGHKC*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CREATEONE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel*>* CreateAll(::CKCJOCJGHKC* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel*>*(*)(::PVOID, ::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CREATEALL_OFFSET))(this, a1);
		}

	};
}
