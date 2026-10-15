#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingDriverTabViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC724BB0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC724BF0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C___REFRESHBTNARROWVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0xC724C00)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDriverSelectPageControl___c_TypeDefinitionIndex = 81833;

	class B51RacingCarDriverSelectPageControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.B51Racing", "<>c")->GetStaticField(0x53550);
		}

		static ::System::Func_2<::RPG::Client::B51Racing::B51RacingDriverTabViewModel*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::B51Racing::B51RacingDriverTabViewModel*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.B51Racing", "<>c")->GetStaticField(0x53558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshBtnArrowView_b__19_0(::RPG::Client::B51Racing::B51RacingDriverTabViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDriverTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C___REFRESHBTNARROWVIEW_B__19_0_OFFSET))(this, a1);
		}

	};
}
