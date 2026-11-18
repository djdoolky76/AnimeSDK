#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEB33A10)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS50_0__UPDATETIPINFO_B__0_OFFSET UNITYSDK_OFFSET(0xEB37B30)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass50_0_TypeDefinitionIndex = 76196;

	class VOPerformSubSystem___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Action* __9__0; // 0x10
		::System::Action* onSuccessFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTipInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS50_0__UPDATETIPINFO_B__0_OFFSET))(this);
		}
	};
}
