#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MATCHTHREEUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8E7740)
#define RPG_CLIENT_MATCHTHREEUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E7780)
#define RPG_CLIENT_MATCHTHREEUTILS___C__CREATEANDOPENLOBBY_B__2_3_OFFSET UNITYSDK_OFFSET(0x1D8E7790)
#define RPG_CLIENT_MATCHTHREEUTILS___C__SHOWCONFIRMGIVEUPDIALOG_B__15_0_OFFSET UNITYSDK_OFFSET(0x1D7043F0)
#define RPG_CLIENT_MATCHTHREEUTILS___C___BEGINJOINLOBBY_B__4_0_OFFSET UNITYSDK_OFFSET(0x1D8E7840)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeUtils___c_TypeDefinitionIndex = 67912;

	class MatchThreeUtils___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::BaseLobby*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::RPG::Client::BaseLobby*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D630);
		}

		static ::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::LuaUIController*>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::RPG::Client::BaseLobby*, ::RPG::Client::LuaUIController*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D638);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D640);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* _CreateAndOpenLobby_b__2_3(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C__CREATEANDOPENLOBBY_B__2_3_OFFSET))(this, a1);
		}

		::System::Void __BeginJoinLobby_b__4_0(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C___BEGINJOINLOBBY_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _ShowConfirmGiveUpDialog_b__15_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEUTILS___C__SHOWCONFIRMGIVEUPDIALOG_B__15_0_OFFSET))(this, a1);
		}

	};
}
