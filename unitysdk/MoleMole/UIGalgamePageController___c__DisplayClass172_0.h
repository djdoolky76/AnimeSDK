#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HAABHOKOFCM;
class PFBIICNDBJA;
namespace MoleMole { class UIGalgamePageController; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS172_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1803D500)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS172_0__GENERATEUIZOOMPLAYABLE_B__0_OFFSET UNITYSDK_OFFSET(0x1803D510)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass172_0_TypeDefinitionIndex = 44748;

	class UIGalgamePageController___c__DisplayClass172_0 : public ::System::Object
	{
	public:
		::HAABHOKOFCM* uizoomPlayItem; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::PFBIICNDBJA* stageZoomInfo; // 0x20
		::System::Int32 stageNodeIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS172_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateUIZoomPlayable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS172_0__GENERATEUIZOOMPLAYABLE_B__0_OFFSET))(this);
		}
	};
}
