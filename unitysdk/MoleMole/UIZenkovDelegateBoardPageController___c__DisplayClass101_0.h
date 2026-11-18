#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPKHADAMILM;
namespace MoleMole { class UIZenkovDelegateBoardPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS101_0__APPLYCACHEDSEASONORDER_B__0_OFFSET UNITYSDK_OFFSET(0x164F3CC0)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164F3CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass101_0_TypeDefinitionIndex = 51360;

	class UIZenkovDelegateBoardPageController___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovDelegateBoardPageController* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* orderMap; // 0x18
		::System::Int32 fallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ApplyCachedSeasonOrder_b__0(::BPKHADAMILM* a, ::BPKHADAMILM* b)
		{
			return ((::System::Int32(*)(::PVOID, ::BPKHADAMILM*, ::BPKHADAMILM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS101_0__APPLYCACHEDSEASONORDER_B__0_OFFSET))(this, a, b);
		}
	};
}
