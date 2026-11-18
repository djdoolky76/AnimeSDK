#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEAENLLEMDA;
class BPKHADAMILM;
namespace MoleMole { class UIZenkovDelegateBoardPageController; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE53D670)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_0__ONCLICKHANDIN_B__0_OFFSET UNITYSDK_OFFSET(0xE53D680)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_0__ONCLICKHANDIN_B__1_OFFSET UNITYSDK_OFFSET(0xE53DBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass25_0_TypeDefinitionIndex = 51368;

	class UIZenkovDelegateBoardPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovDelegateBoardPageController* __4__this; // 0x10
		::System::Predicate_1<::BPKHADAMILM*>* __9__1; // 0x18
		::System::UInt32 handInQuestId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickHandIn_b__0(::AEAENLLEMDA* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::AEAENLLEMDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_0__ONCLICKHANDIN_B__0_OFFSET))(this, rsp);
		}

		::System::Boolean _OnClickHandIn_b__1(::BPKHADAMILM* q)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPKHADAMILM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_0__ONCLICKHANDIN_B__1_OFFSET))(this, q);
		}
	};
}
