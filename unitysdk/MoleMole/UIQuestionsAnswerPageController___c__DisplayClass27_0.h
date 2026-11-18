#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__BACKTOSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x1823FEE0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__BACKTOSELECT_B__1_OFFSET UNITYSDK_OFFSET(0x18240D10)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1823FED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c__DisplayClass27_0_TypeDefinitionIndex = 52849;

	class UIQuestionsAnswerPageController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* __9__1; // 0x10
		::MoleMole::UIQuestionsAnswerPageController* __4__this; // 0x18
		::System::Boolean isFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _BackToSelect_b__0(::DJDDGKFCNAJ_IGOPHLMOGAO reason)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__BACKTOSELECT_B__0_OFFSET))(this, reason);
		}

		::System::Void _BackToSelect_b__1(::DJDDGKFCNAJ_IGOPHLMOGAO hidereason)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__BACKTOSELECT_B__1_OFFSET))(this, hidereason);
		}
	};
}
