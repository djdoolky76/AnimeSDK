#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonopolyFriendRankingDisplayDataItem; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MONOPOLYFRIENDINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD88D5E0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD88D620)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0xD88D630)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_1_OFFSET UNITYSDK_OFFSET(0xD88D650)

namespace RPG::Client
{
	class MonopolyFriendInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CDB0);
		}

		static ::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CDB8);
		}

		static ::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortFriendRankData_b__8_0(::RPG::Client::MonopolyFriendRankingDisplayDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonopolyFriendRankingDisplayDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SortFriendRankData_b__8_1(::RPG::Client::MonopolyFriendRankingDisplayDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonopolyFriendRankingDisplayDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_1_OFFSET))(this, a1);
		}

	};
}
