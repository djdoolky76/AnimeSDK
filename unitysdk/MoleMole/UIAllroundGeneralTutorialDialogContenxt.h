#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KGMDCDKMBEJ_HKEFCDFAGCF;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D2DDA0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2DD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialDialogContenxt_TypeDefinitionIndex = 78430;

	class UIAllroundGeneralTutorialDialogContenxt : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* OverrideTitleText; // 0x28
		::System::Action* OnGroupButtonClick; // 0x30
		::System::String* GroupButtonText; // 0x38
		::System::Action* OnTutorialBtnClickCallback; // 0x40
		::System::String* OverrideSubTitleText; // 0x48
		::KGMDCDKMBEJ_HKEFCDFAGCF* popupGroupData; // 0x50
		::System::Int32 trainQuestID; // 0x58
		::System::Boolean CanShowSkillTipsBtn; // 0x5C
		::System::Boolean CanShowBottomTips; // 0x5D
		::System::Boolean CanCloseOnlyReachEnd; // 0x5E
		::System::Boolean isTrain; // 0x5F
		::System::Boolean CanShowTutorialBtn; // 0x60
		::System::Byte _padding0[0x3];
		::System::Int32 avatarId; // 0x64

		::System::Void _ctor(::KGMDCDKMBEJ_HKEFCDFAGCF* popupGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::KGMDCDKMBEJ_HKEFCDFAGCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET))(this, popupGroupData);
		}

		::System::Void _ctor_1(::System::Int32 trainQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET))(this, trainQuestID);
		}
	};
}
