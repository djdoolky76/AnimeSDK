#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_GAMEPHASECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0A5780)
#define RPG_CLIENT_GAMEPHASECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0A57C0)
#define RPG_CLIENT_GAMEPHASECONTEXT___C___ONPSNLOGOUTHANDLER_B__10_0_OFFSET UNITYSDK_OFFSET(0xD0A57D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseContext___c_TypeDefinitionIndex = 61105;

	class GamePhaseContext___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60760);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnPSNLogOutHandler_b__10_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___C___ONPSNLOGOUTHANDLER_B__10_0_OFFSET))(this, a1);
		}

	};
}
