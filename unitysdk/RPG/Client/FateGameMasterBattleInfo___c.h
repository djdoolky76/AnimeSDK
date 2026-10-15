#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE89020)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE89060)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETCURPLAYERRIVALMASTER_B__12_0_OFFSET UNITYSDK_OFFSET(0xCE890E0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETPLAYERMASTER_B__9_0_OFFSET UNITYSDK_OFFSET(0xCE89070)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterBattleInfo___c_TypeDefinitionIndex = 64088;

	class FateGameMasterBattleInfo___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4CA70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4CA78);
		}

		static ::System::Predicate_1<::RPG::Client::IFateGameMasterInfoRealItem*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::RPG::Client::IFateGameMasterInfoRealItem*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4CA80);
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

		::System::Boolean _GetCurPlayerRivalMaster_b__12_0(::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO___C__GETCURPLAYERRIVALMASTER_B__12_0_OFFSET))(this, a1);
		}

	};
}
