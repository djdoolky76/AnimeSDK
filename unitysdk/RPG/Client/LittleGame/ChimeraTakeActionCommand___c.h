#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD423570)
#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD4235B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__EXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0xD4235C0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTakeActionCommand___c_TypeDefinitionIndex = 76635;

	class ChimeraTakeActionCommand___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x2E9C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x2E9C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C_CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__EXECUTE_B__2_0_OFFSET))(this);
		}

	};
}
