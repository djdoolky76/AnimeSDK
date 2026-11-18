#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN_PLPDLPGLIAD;
namespace MoleMole { class UIZenkovTalentPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10587E90)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS30_0__ONNODESTATECHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x10587EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPageController___c__DisplayClass30_0_TypeDefinitionIndex = 43035;

	class UIZenkovTalentPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::EKGAHGCJOAN_PLPDLPGLIAD* node; // 0x10
		::MoleMole::UIZenkovTalentPageController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNodeStateChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS30_0__ONNODESTATECHANGED_B__0_OFFSET))(this);
		}
	};
}
