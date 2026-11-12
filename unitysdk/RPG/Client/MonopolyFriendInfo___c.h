#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonopolyFriendRankingDisplayDataItem; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MONOPOLYFRIENDINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2DFCA0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE2DFCE0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0xE2DFCF0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_1_OFFSET UNITYSDK_OFFSET(0xE2DFD10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyFriendInfo___c_TypeDefinitionIndex = 68194;

	class MonopolyFriendInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66FD0);
		}

		static ::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66FD8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x66FE0);
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
