#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYSUMMONLEVEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5AC770)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5AC7B0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL___C__GETSORTEDMONSTERS_B__23_0_OFFSET UNITYSDK_OFFSET(0xC5AC7C0)

namespace RPG::Client
{
	class ActivitySummonLevel___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DF00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DF08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedMonsters_b__23_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL___C__GETSORTEDMONSTERS_B__23_0_OFFSET))(this, a1, a2);
		}

	};
}
