#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD425430)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD425470)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C__EXECUTE_B__0_0_OFFSET UNITYSDK_OFFSET(0xD425480)

namespace RPG::Client::LittleGame
{
	class ChimeraWorkFinishCommand___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x2EC50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x2EC58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C_CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C__EXECUTE_B__0_0_OFFSET))(this);
		}

	};
}
