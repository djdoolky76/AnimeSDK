#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAOPMDAAGHL;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define NAOPMDAAGHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBAB77B0)
#define NAOPMDAAGHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB77F0)
#define NAOPMDAAGHL___C__CREATECUSTOMERENTITYANDVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0xBAB7830)
#define NAOPMDAAGHL___C__CREATEEMPLOYEEENTITYANDVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0xBAB7890)
#define NAOPMDAAGHL___C__CREATEFOODENTITYANDVIEW_B__24_0_OFFSET UNITYSDK_OFFSET(0xBAB78C0)
#define NAOPMDAAGHL___C__CREATEHEADWAITERENTITYANDVIEW_B__17_0_OFFSET UNITYSDK_OFFSET(0xBAB7860)
#define NAOPMDAAGHL___C__CREATEOBSTACLEENTITYANDVIEW_B__32_0_OFFSET UNITYSDK_OFFSET(0xBAB78F0)
#define NAOPMDAAGHL___C__CREATESPECIALCUSTOMERENTITYANDVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0xBAB7800)
#define NAOPMDAAGHL___C__CREATETAKEOUTENTITYANDVIEW_B__34_0_OFFSET UNITYSDK_OFFSET(0xBAB7920)

	class NAOPMDAAGHL___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C470);
		}

		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C478);
		}

		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C480);
		}

		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C488);
		}

		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C490);
		}

		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C498);
		}

		static ::System::Action** StaticGet___9__34_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C4A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C4A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C_CTOR_OFFSET))(this);
		}

		::System::Void _CreateSpecialCustomerEntityAndView_b__11_0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__CREATESPECIALCUSTOMERENTITYANDVIEW_B__11_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateCustomerEntityAndView_b__12_0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__CREATECUSTOMERENTITYANDVIEW_B__12_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateHeadWaiterEntityAndView_b__17_0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__CREATEHEADWAITERENTITYANDVIEW_B__17_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateEmployeeEntityAndView_b__18_0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__CREATEEMPLOYEEENTITYANDVIEW_B__18_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateFoodEntityAndView_b__24_0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__CREATEFOODENTITYANDVIEW_B__24_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateObstacleEntityAndView_b__32_0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__CREATEOBSTACLEENTITYANDVIEW_B__32_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateTakeoutEntityAndView_b__34_0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__CREATETAKEOUTENTITYANDVIEW_B__34_0_OFFSET))(this, a1, a2, a3);
		}

	};
