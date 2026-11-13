#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE2FF0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE3030)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1DFE3040)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0x1DFE30F0)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL___C___CTOR_B__1_2_OFFSET UNITYSDK_OFFSET(0x1DFE3100)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleViewModel___c_TypeDefinitionIndex = 84033;

	class ChimeraDuelBattleViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEB40);
		}

		static ::System::Action** StaticGet___9__1_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEB48);
		}

		static ::System::Action** StaticGet___9__1_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEB50);
		}

		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.ChimeraDuel", "<>c")->GetStaticField(0xEB58);
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
