#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB0CE30)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB0CE70)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xCB0CE80)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xCB0CF30)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_2_OFFSET UNITYSDK_OFFSET(0xCB0CF40)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleViewModel___c_TypeDefinitionIndex = 81253;

	class ChimeraDuelBattleViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xFAB0);
		}

		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xFAB8);
		}

		static ::System::Action** StaticGet___9__1_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xFAC0);
		}

		static ::System::Action** StaticGet___9__1_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xFAC8);
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
