#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IMatchThreeScore; }
namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MATCHTHREEGAME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFEF1C0)
#define RPG_CLIENT_MATCHTHREEGAME___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFEF200)
#define RPG_CLIENT_MATCHTHREEGAME___C__CREATEPVPGAME_B__50_0_OFFSET UNITYSDK_OFFSET(0xDFEF410)
#define RPG_CLIENT_MATCHTHREEGAME___C__GETALLOPPONENTS_B__69_0_OFFSET UNITYSDK_OFFSET(0xDFEF470)
#define RPG_CLIENT_MATCHTHREEGAME___C__GETRESULTSCORES_B__75_0_OFFSET UNITYSDK_OFFSET(0xDFEF5E0)
#define RPG_CLIENT_MATCHTHREEGAME___C__INITPLAYERS_B__70_0_OFFSET UNITYSDK_OFFSET(0xDFEF4A0)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_0_OFFSET UNITYSDK_OFFSET(0xDFEF210)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_1_OFFSET UNITYSDK_OFFSET(0xDFEF340)
#define RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_2_OFFSET UNITYSDK_OFFSET(0xDFEF380)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c_TypeDefinitionIndex = 67869;

	class MatchThreeGame___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__44_1()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A200);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A208);
		}

		static ::System::Comparison_1<::RPG::Client::IMatchThreeScore*>** StaticGet___9__75_0()
		{
			return (::System::Comparison_1<::RPG::Client::IMatchThreeScore*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A210);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A218);
		}

		static ::System::Predicate_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__70_0()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeGameOpponent*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A220);
		}

		static ::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>** StaticGet___9__44_2()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A228);
		}

		static ::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A230);
		}

		static ::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>** StaticGet___9__69_0()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreeGameOpponent*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshLocalRankData_b__44_0(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_0_OFFSET))(this, a1);
		}

		::System::Int32 __RefreshLocalRankData_b__44_1(::RPG::Client::MatchThreeGameOpponent* a1, ::RPG::Client::MatchThreeGameOpponent* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean __RefreshLocalRankData_b__44_2(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C___REFRESHLOCALRANKDATA_B__44_2_OFFSET))(this, a1);
		}

		::System::UInt32 _CreatePVPGame_b__50_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__CREATEPVPGAME_B__50_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllOpponents_b__69_0(::RPG::Client::MatchThreeGameOpponent* a1, ::RPG::Client::MatchThreeGameOpponent* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__GETALLOPPONENTS_B__69_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _InitPlayers_b__70_0(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__INITPLAYERS_B__70_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetResultScores_b__75_0(::RPG::Client::IMatchThreeScore* a1, ::RPG::Client::IMatchThreeScore* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IMatchThreeScore*, ::RPG::Client::IMatchThreeScore*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__GETRESULTSCORES_B__75_0_OFFSET))(this, a1, a2);
		}

	};
}
