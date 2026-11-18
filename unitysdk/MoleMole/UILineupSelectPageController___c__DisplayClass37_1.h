#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS37_1__CTOR_OFFSET UNITYSDK_OFFSET(0x196F6360)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS37_1__ONADDBUTTONCLICK_B__2_OFFSET UNITYSDK_OFFSET(0x196F8460)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass37_1_TypeDefinitionIndex = 68673;

	template <typename T>
	class UILineupSelectPageController___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS37_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnAddButtonClick_b__2(::BPHGNMNLLHF* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS37_1__ONADDBUTTONCLICK_B__2_OFFSET))(this, a);
		}
	};
}
