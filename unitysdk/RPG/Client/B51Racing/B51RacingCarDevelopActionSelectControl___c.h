#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconItemViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC725810)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC725850)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C___REFRESHDATA_B__51_0_OFFSET UNITYSDK_OFFSET(0xC725860)

namespace RPG::Client::B51Racing
{
	class B51RacingCarDevelopActionSelectControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*, ::RPG::GameCore::B51RacingStatType>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*, ::RPG::GameCore::B51RacingStatType>**)UnitySDK::FromName("RPG.Client.B51Racing", "<>c")->GetStaticField(0x5CBF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.B51Racing", "<>c")->GetStaticField(0x5CBF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::B51RacingStatType __RefreshData_b__51_0(::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel* a1)
		{
			return ((::RPG::GameCore::B51RacingStatType(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C___REFRESHDATA_B__51_0_OFFSET))(this, a1);
		}

	};
}
