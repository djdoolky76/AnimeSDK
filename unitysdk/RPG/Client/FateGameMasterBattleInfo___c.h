#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE914B0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE914F0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETCURPLAYERRIVALMASTER_B__12_0_OFFSET UNITYSDK_OFFSET(0xCE91570)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETPLAYERMASTER_B__9_0_OFFSET UNITYSDK_OFFSET(0xCE91500)

namespace RPG::Client
{
	class FateGameMasterBattleInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x596E0);
		}

		static ::System::Predicate_1<::System::ValueTuple>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::System::ValueTuple>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x596E8);
		}

		static ::System::Predicate_1<::RPG::Client::IFateGameMasterInfoRealItem*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::RPG::Client::IFateGameMasterInfoRealItem*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x596F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPlayerMaster_b__9_0(::RPG::Client::IFateGameMasterInfoRealItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoRealItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETPLAYERMASTER_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCurPlayerRivalMaster_b__12_0(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETCURPLAYERRIVALMASTER_B__12_0_OFFSET))(this, a1);
		}

	};
}
