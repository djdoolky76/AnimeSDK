#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_STARFIGHTUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE120D10)
#define RPG_CLIENT_STARFIGHTUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE120D50)
#define RPG_CLIENT_STARFIGHTUTILS___C__GETMONSTERDATALIST_B__0_0_OFFSET UNITYSDK_OFFSET(0xE120D60)
#define RPG_CLIENT_STARFIGHTUTILS___C__GETMONSTERDATALIST_B__0_1_OFFSET UNITYSDK_OFFSET(0xE120D80)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightUtils___c_TypeDefinitionIndex = 67986;

	class StarFightUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__0_1()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F8D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F8D8);
		}

		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetMonsterDataList_b__0_0(::RPG::Client::MonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS___C__GETMONSTERDATALIST_B__0_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterDataList_b__0_1(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS___C__GETMONSTERDATALIST_B__0_1_OFFSET))(this, a1, a2);
		}

	};
}
