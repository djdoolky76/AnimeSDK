#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPKHADAMILM;
namespace MoleMole { class UIZenkovDelegateBoardPageController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS91_0__APPLYCACHEDNORMALORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1671A0E0)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1671A0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass91_0_TypeDefinitionIndex = 51369;

	class UIZenkovDelegateBoardPageController___c__DisplayClass91_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovDelegateBoardPageController* __4__this; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* orderMap; // 0x18
		::System::Int32 fallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ApplyCachedNormalOrder_b__0(::BPKHADAMILM* a, ::BPKHADAMILM* b)
		{
			return ((::System::Int32(*)(::PVOID, ::BPKHADAMILM*, ::BPKHADAMILM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS91_0__APPLYCACHEDNORMALORDER_B__0_OFFSET))(this, a, b);
		}
	};
}
