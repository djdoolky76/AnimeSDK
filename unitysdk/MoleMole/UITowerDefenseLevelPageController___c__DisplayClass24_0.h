#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEGDHBLHFJG;
namespace MoleMole { class UITowerDefenseLevelPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13BBC960)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHDETAIL_B__0_OFFSET UNITYSDK_OFFSET(0x13BBC970)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHDETAIL_B__2_OFFSET UNITYSDK_OFFSET(0x13BBCAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseLevelPageController___c__DisplayClass24_0_TypeDefinitionIndex = 45981;

	class UITowerDefenseLevelPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* monsterList; // 0x10
		::MoleMole::UITowerDefenseLevelPageController* __4__this; // 0x18
		::FEGDHBLHFJG* template_; // 0x20
		::System::Action* __9__2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshDetail_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHDETAIL_B__0_OFFSET))(this);
		}

		::System::Void _RefreshDetail_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS24_0__REFRESHDETAIL_B__2_OFFSET))(this);
		}
	};
}
