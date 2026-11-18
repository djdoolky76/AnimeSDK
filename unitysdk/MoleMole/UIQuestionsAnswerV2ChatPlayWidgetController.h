#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswerChatPlayWidgetController.h"

class KOEKBEMHBMG_ANJAMGIMHIH;

#define MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER_REFRESHOPTION_OFFSET UNITYSDK_OFFSET(0x182431C0)
#define MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18243450)
#define MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER___BASE_REFRESHOPTION_OFFSET UNITYSDK_OFFSET(0x18243460)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV2ChatPlayWidgetController_TypeDefinitionIndex = 76547;

	class UIQuestionsAnswerV2ChatPlayWidgetController : public ::MoleMole::UIQuestionsAnswerChatPlayWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshOption(::System::Int32 i, ::KOEKBEMHBMG_ANJAMGIMHIH* view)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KOEKBEMHBMG_ANJAMGIMHIH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER_REFRESHOPTION_OFFSET))(this, i, view);
		}

		::System::Void __base_RefreshOption(::System::Int32 P0, ::KOEKBEMHBMG_ANJAMGIMHIH* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KOEKBEMHBMG_ANJAMGIMHIH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2CHATPLAYWIDGETCONTROLLER___BASE_REFRESHOPTION_OFFSET))(this, P0, P1);
		}
	};
}
