#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONSTERDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE30F210)
#define RPG_CLIENT_MONSTERDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE30F240)
#define RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMIDLIST_B__19_0_OFFSET UNITYSDK_OFFSET(0xE30F310)
#define RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMSTAGEROW_B__16_0_OFFSET UNITYSDK_OFFSET(0xE30F250)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData___c_TypeDefinitionIndex = 64578;

	class MonsterData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67D40);
		}

		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67D48);
		}

		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x67D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateDataListFromStageRow_b__16_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMSTAGEROW_B__16_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CreateDataListFromIDList_b__19_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMIDLIST_B__19_0_OFFSET))(this, a1, a2);
		}

	};
}
