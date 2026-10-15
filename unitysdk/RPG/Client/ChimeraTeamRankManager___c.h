#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraTeamData; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB5F1B0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB5F1E0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__GET_PLAYERFINISHWORKCNT_B__19_0_OFFSET UNITYSDK_OFFSET(0xCB5F210)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__SYNCPLAYERFINISHWORKCNT_B__5_0_OFFSET UNITYSDK_OFFSET(0xCB5F1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c_TypeDefinitionIndex = 63438;

	class ChimeraTeamRankManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14390);
		}

		static ::System::Predicate_1<::RPG::Client::ChimeraTeamData*>** StaticGet___9__19_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChimeraTeamData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14398);
		}

		static ::System::Predicate_1<::RPG::Client::ChimeraTeamData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChimeraTeamData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x143A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncPlayerFinishWorkCnt_b__5_0(::RPG::Client::ChimeraTeamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__SYNCPLAYERFINISHWORKCNT_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_PlayerFinishWorkCnt_b__19_0(::RPG::Client::ChimeraTeamData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__GET_PLAYERFINISHWORKCNT_B__19_0_OFFSET))(this, a1);
		}

	};
}
