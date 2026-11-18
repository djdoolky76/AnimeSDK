#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowAchievementDialogOpenCardWidgetController.h"

class AHMJIPEODPP;
class HGAJKHIMKJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0x188F5C40)
#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0x188F6120)
#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188F6170)
#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETBADGEMAP_OFFSET UNITYSDK_OFFSET(0x188F6180)
#define MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETCARDLIST_OFFSET UNITYSDK_OFFSET(0x188F6190)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDreamAchievementDialogWidgetController_TypeDefinitionIndex = 81004;

	class UIBangbooDreamAchievementDialogWidgetController : public ::MoleMole::UIHollowAchievementDialogOpenCardWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::AHMJIPEODPP* GetBadgeMap()
		{
			return ((::AHMJIPEODPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GetCardList(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* rawCards)
		{
			return ((::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER_GETCARDLIST_OFFSET))(this, rawCards);
		}

		::AHMJIPEODPP* __base_GetBadgeMap()
		{
			return ((::AHMJIPEODPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETBADGEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* __base_GetCardList(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* P0)
		{
			return ((::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMACHIEVEMENTDIALOGWIDGETCONTROLLER___BASE_GETCARDLIST_OFFSET))(this, P0);
		}
	};
}
