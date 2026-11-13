#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHESSROGUEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8AF050)
#define RPG_CLIENT_CHESSROGUEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AF080)
#define RPG_CLIENT_CHESSROGUEMODULE___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D8AF090)
#define RPG_CLIENT_CHESSROGUEMODULE___C__ONLOGINFINISH_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D8AF130)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModule___c_TypeDefinitionIndex = 68877;

	class ChessRogueModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xB8C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xB8C8);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xB8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C__INIT_B__1_0_OFFSET))(this);
		}

		::System::Void _OnLoginFinish_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C__ONLOGINFINISH_B__2_0_OFFSET))(this);
		}

	};
}
