#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE85D30)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE85D70)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C___PUSHINITCOMMANDS_B__29_0_OFFSET UNITYSDK_OFFSET(0x1CE85D80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance___c_TypeDefinitionIndex = 61745;

	class ChimeraGameInstance___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x127D0);
		}

		static ::System::Action** StaticGet___9__29_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x127D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C_CTOR_OFFSET))(this);
		}

		::System::Void __PushInitCommands_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C___PUSHINITCOMMANDS_B__29_0_OFFSET))(this);
		}

	};
}
