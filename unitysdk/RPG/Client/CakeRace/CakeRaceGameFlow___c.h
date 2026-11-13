#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD8F970)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8F9B0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__ONENTERED_B__32_1_OFFSET UNITYSDK_OFFSET(0x1BD8F9C0)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLEEXITGAME_B__72_3_OFFSET UNITYSDK_OFFSET(0x1BD8FB10)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLEJOINLOBBY_B__68_1_OFFSET UNITYSDK_OFFSET(0x1BD8FA30)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLESTARTGAME_B__70_1_OFFSET UNITYSDK_OFFSET(0x1BD8FAA0)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow___c_TypeDefinitionIndex = 78776;

	class CakeRaceGameFlow___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__32_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x6AA90);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__68_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x6AA98);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x6AAA0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__70_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x6AAA8);
		}

		static ::System::Action** StaticGet___9__72_3()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.CakeRace", "<>c")->GetStaticField(0x6AAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnEntered_b__32_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__ONENTERED_B__32_1_OFFSET))(this, a1);
		}

		::System::Void __HandleJoinLobby_b__68_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLEJOINLOBBY_B__68_1_OFFSET))(this, a1);
		}

		::System::Void __HandleStartGame_b__70_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLESTARTGAME_B__70_1_OFFSET))(this, a1);
		}

		::System::Void __HandleExitGame_b__72_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C___HANDLEEXITGAME_B__72_3_OFFSET))(this);
		}

	};
}
