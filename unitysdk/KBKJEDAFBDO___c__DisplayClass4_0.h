#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBKJEDAFBDO;
namespace RPG::Client { class Stage; }

#define KBKJEDAFBDO___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB30CE60)
#define KBKJEDAFBDO___C__DISPLAYCLASS4_0__ENTERREGION_B__0_OFFSET UNITYSDK_OFFSET(0xB312190)

	class KBKJEDAFBDO___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::KBKJEDAFBDO* __4__this; // 0x10
		::RPG::Client::Stage* currentStage; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _EnterRegion_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO___C__DISPLAYCLASS4_0__ENTERREGION_B__0_OFFSET))(this);
		}

	};
