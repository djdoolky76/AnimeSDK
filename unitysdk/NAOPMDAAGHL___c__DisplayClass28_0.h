#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAOPMDAAGHL;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define NAOPMDAAGHL___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBAAECC0)
#define NAOPMDAAGHL___C__DISPLAYCLASS28_0__CREATETABLEENTITYANDVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xBAB1760)

inline static constexpr unsigned int NAOPMDAAGHL___c__DisplayClass28_0_TypeDefinitionIndex = 77262;

	class NAOPMDAAGHL___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* onTableLoad; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateTableEntityAndView_b__0(::NAOPMDAAGHL* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAOPMDAAGHL*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL___C__DISPLAYCLASS28_0__CREATETABLEENTITYANDVIEW_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
