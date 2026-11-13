#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeV2PvpScoreData; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D71CFD0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71D010)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D71D020)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_1_OFFSET UNITYSDK_OFFSET(0x1D71D060)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_2_OFFSET UNITYSDK_OFFSET(0x1D71D0A0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D71D0E0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D71D110)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_2_OFFSET UNITYSDK_OFFSET(0x1D71D140)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_3_OFFSET UNITYSDK_OFFSET(0x1D71D170)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex = 67982;

	class MatchThreeV2PvpScoreInfos___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5EDE0);
		}

		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__6_2()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5EDE8);
		}

		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__6_3()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5EDF0);
		}

		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__6_0()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5EDF8);
		}

		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__6_1()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5EE00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5EE08);
		}

		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__5_2()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5EE10);
		}

		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__5_1()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5EE18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetScoreData_b__5_0(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetScoreData_b__5_1(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetScoreData_b__5_2(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetScoreData_b__6_0(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetScoreData_b__6_1(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetScoreData_b__6_2(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetScoreData_b__6_3(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_3_OFFSET))(this, a1);
		}

	};
}
