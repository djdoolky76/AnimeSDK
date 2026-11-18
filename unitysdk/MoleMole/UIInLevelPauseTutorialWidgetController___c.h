#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseTutorialWidgetController_TutorialData; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176C6C10)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176C6C50)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__INITEXTERNALPOPUPS_B__10_0_OFFSET UNITYSDK_OFFSET(0x176C6C60)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__INITHOLLOWINFO_B__11_0_OFFSET UNITYSDK_OFFSET(0x176C6CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTutorialWidgetController___c_TypeDefinitionIndex = 84809;

	class UIInLevelPauseTutorialWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTutorialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42210);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTutorialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42218);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTutorialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitExternalPopups_b__10_0(::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* a, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__INITEXTERNALPOPUPS_B__10_0_OFFSET))(this, a, b);
		}

		::System::Int32 _InitHollowInfo_b__11_0(::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* a, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__INITHOLLOWINFO_B__11_0_OFFSET))(this, a, b);
		}
	};
}
