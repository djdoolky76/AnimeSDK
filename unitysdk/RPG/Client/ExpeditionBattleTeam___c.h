#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ExpeditionBattleTeamMember; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLETEAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB88730)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB88770)
#define RPG_CLIENT_EXPEDITIONBATTLETEAM___C__GETMEMBERCOUNT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1CB88780)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleTeam___c_TypeDefinitionIndex = 65298;

	class ExpeditionBattleTeam___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5CB20);
		}

		static ::System::Func_2<::RPG::Client::ExpeditionBattleTeamMember*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::ExpeditionBattleTeamMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5CB28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMemberCount_b__15_0(::RPG::Client::ExpeditionBattleTeamMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeamMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAM___C__GETMEMBERCOUNT_B__15_0_OFFSET))(this, a1);
		}

	};
}
