#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OPMPJAJDJID;

#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1828FF50)
#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS74_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1828FF60)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseMainPageController___c__DisplayClass74_0_TypeDefinitionIndex = 70754;

	class UITowerDefenseMainPageController___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::Single deltaTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__0(::OPMPJAJDJID* bullet)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPMPJAJDJID*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS74_0__UPDATE_B__0_OFFSET))(this, bullet);
		}
	};
}
