#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPKHADAMILM;

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS101_1__APPLYCACHEDSEASONORDER_B__1_OFFSET UNITYSDK_OFFSET(0x12FA6F20)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS101_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA6F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass101_1_TypeDefinitionIndex = 51364;

	template <typename T>
	class UIZenkovDelegateBoardPageController___c__DisplayClass101_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS101_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _ApplyCachedSeasonOrder_b__1(::BPKHADAMILM* q)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPKHADAMILM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS101_1__APPLYCACHEDSEASONORDER_B__1_OFFSET))(this, q);
		}
	};
}
