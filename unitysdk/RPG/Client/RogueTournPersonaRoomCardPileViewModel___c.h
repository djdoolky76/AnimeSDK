#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E7300)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E7340)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C___SETUPPILECARDS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1E0E7350)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C___SETUPPILECARDS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1E0E7360)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPileViewModel___c_TypeDefinitionIndex = 74992;

	class RogueTournPersonaRoomCardPileViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73060);
		}

		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73068);
		}

		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* __SetupPileCards_b__10_0(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C___SETUPPILECARDS_B__10_0_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* __SetupPileCards_b__10_1(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C___SETUPPILECARDS_B__10_1_OFFSET))(this, a1);
		}

	};
}
