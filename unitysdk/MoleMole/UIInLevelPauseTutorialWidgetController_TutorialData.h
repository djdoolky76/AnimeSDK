#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KGMDCDKMBEJ_HKEFCDFAGCF;

#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_TUTORIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F581E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTutorialWidgetController_TutorialData_TypeDefinitionIndex = 84808;

	class UIInLevelPauseTutorialWidgetController_TutorialData : public ::System::Object
	{
	public:
		::KGMDCDKMBEJ_HKEFCDFAGCF* data; // 0x10
		::System::Int32 trainQuestID; // 0x18
		::System::Int32 groupId; // 0x1C
		::System::Boolean isTrain; // 0x20
		::System::Boolean redPoind; // 0x21
		::System::Boolean getInCurQuest; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_TUTORIALDATA__CTOR_OFFSET))(this);
		}
	};
}
