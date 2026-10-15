#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD405630)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD405670)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C___ONCLEAR_B__7_0_OFFSET UNITYSDK_OFFSET(0xD405680)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingGameInstance___c_TypeDefinitionIndex = 77798;

	class ChenLingGameInstance___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame.ChenLing", "<>c")->GetStaticField(0x22580);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.ChenLing", "<>c")->GetStaticField(0x22588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnClear_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C___ONCLEAR_B__7_0_OFFSET))(this);
		}

	};
}
