#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKPDNOHGJH_BJHFJALHFDH_LHAPNHBHGPM.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CHANGECHESSBOARDUPORDOWNMOVEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x16F0BD90)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0BD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass284_0_TypeDefinitionIndex = 84626;

	class UIHollowMainPageController___c__DisplayClass284_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* neighbors; // 0x10
		::MoleMole::HollowChessboard::HollowEntity* tempLightEntity; // 0x18
		::System::Action* onAnimFinish; // 0x20
		::FBAMLABJMKF* newChessboard; // 0x28
		::MoleMole::UIHollowMainPageController* __4__this; // 0x30
		::MoleMole::HollowChessboard::HollowChessboardUID fromChessboardUid; // 0x38
		::LOKPDNOHGJH_BJHFJALHFDH_LHAPNHBHGPM directionType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeChessboardUpOrDownMoveEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS284_0__CHANGECHESSBOARDUPORDOWNMOVEENTITY_B__0_OFFSET))(this);
		}
	};
}
