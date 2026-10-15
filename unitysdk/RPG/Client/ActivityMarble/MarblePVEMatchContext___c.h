#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MarbleBattleSealData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC544D50)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC544D90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C___REQUESTPVEBATTLEFINISH_B__8_0_OFFSET UNITYSDK_OFFSET(0xC544DA0)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVEMatchContext___c_TypeDefinitionIndex = 75990;

	class MarblePVEMatchContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityMarble", "<>c")->GetStaticField(0x32580);
		}

		static ::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.ActivityMarble", "<>c")->GetStaticField(0x32588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __RequestPVEBattleFinish_b__8_0(::RPG::Client::MarbleBattleSealData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT___C___REQUESTPVEBATTLEFINISH_B__8_0_OFFSET))(this, a1);
		}

	};
}
