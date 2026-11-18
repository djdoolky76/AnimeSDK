#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1823EEE0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__0_OFFSET UNITYSDK_OFFSET(0x1823EEF0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__1_OFFSET UNITYSDK_OFFSET(0x1823F0F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__2_OFFSET UNITYSDK_OFFSET(0x1823FBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c__DisplayClass25_0_TypeDefinitionIndex = 52848;

	class UIQuestionsAnswerPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MoleMole::UIQuestionsAnswerPageController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Boolean restart; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 stageId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartGame_b__0(::DJDDGKFCNAJ_IGOPHLMOGAO reason)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__0_OFFSET))(this, reason);
		}

		::System::Void _StartGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__1_OFFSET))(this);
		}

		::System::Void _StartGame_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__2_OFFSET))(this);
		}
	};
}
