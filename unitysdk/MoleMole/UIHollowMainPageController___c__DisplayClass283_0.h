#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKPDNOHGJH_BJHFJALHFDH_LHAPNHBHGPM.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
class PNJDGHBEMLK;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS283_0__CHANGECHESSBOARDUPORDOWNNEW_B__0_OFFSET UNITYSDK_OFFSET(0x16F0B410)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS283_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0B400)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass283_0_TypeDefinitionIndex = 84624;

	class UIHollowMainPageController___c__DisplayClass283_0 : public ::System::Object
	{
	public:
		::PNJDGHBEMLK* curProxy; // 0x10
		::System::Action* onAnimFinish; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* neighbors; // 0x20
		::PNJDGHBEMLK* prvProxy; // 0x28
		::MoleMole::UIHollowMainPageController* __4__this; // 0x30
		::FBAMLABJMKF* newChessboard; // 0x38
		::MoleMole::HollowChessboard::HollowEntity* tempLightEntity; // 0x40
		::LOKPDNOHGJH_BJHFJALHFDH_LHAPNHBHGPM directionType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS283_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeChessboardUpOrDownNew_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS283_0__CHANGECHESSBOARDUPORDOWNNEW_B__0_OFFSET))(this);
		}
	};
}
