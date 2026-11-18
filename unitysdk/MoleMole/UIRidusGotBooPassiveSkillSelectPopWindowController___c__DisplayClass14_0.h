#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJIFILPGMCF;

#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC5A00)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__ISSELECTED_B__0_OFFSET UNITYSDK_OFFSET(0x14CC5A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPassiveSkillSelectPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 48196;

	class UIRidusGotBooPassiveSkillSelectPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsSelected_b__0(::FJIFILPGMCF* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJIFILPGMCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__ISSELECTED_B__0_OFFSET))(this, x);
		}
	};
}
