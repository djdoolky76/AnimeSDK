#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB14EC0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB14F00)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xCB14F10)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xCB14FC0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_2_OFFSET UNITYSDK_OFFSET(0xCB14FD0)

namespace RPG::Client::ChimeraDuel
{
	class ChimeraDuelBattleViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEB60);
		}

		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEB68);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEB70);
		}

		static ::System::Action** StaticGet___9__1_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEB78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_0_OFFSET))(this);
		}

		::System::Void __ctor_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_1_OFFSET))(this);
		}

		::System::Void __ctor_b__1_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_2_OFFSET))(this);
		}

	};
}
