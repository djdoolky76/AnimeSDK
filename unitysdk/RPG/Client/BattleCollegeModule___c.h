#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleCollegeGroupData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BATTLECOLLEGEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1B7DA0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B7DD0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE___C__ISALLBATTLECOLLEGEFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B1B7DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeModule___c_TypeDefinitionIndex = 64319;

	class BattleCollegeModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BattleCollegeGroupData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::BattleCollegeGroupData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x627E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x627E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllBattleCollegeFinished_b__7_0(::RPG::Client::BattleCollegeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleCollegeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___C__ISALLBATTLECOLLEGEFINISHED_B__7_0_OFFSET))(this, a1);
		}

	};
}
