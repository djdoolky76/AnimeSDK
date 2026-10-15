#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChenLingBattleStageData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA751F0)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCA75230)
#define RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C__GETFINISHSTAGECOUNT_B__15_0_OFFSET UNITYSDK_OFFSET(0xCA75240)

namespace RPG::Client
{
	class ChenLingBattleStageInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E910);
		}

		static ::System::Func_2<::RPG::Client::ChenLingBattleStageData*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::ChenLingBattleStageData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFinishStageCount_b__15_0(::RPG::Client::ChenLingBattleStageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattleStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESTAGEINFO___C__GETFINISHSTAGECOUNT_B__15_0_OFFSET))(this, a1);
		}

	};
}
