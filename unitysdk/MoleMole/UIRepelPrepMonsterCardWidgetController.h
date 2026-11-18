#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CALIGLPABNP;
class KNPLNBCOBBJ;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x15C57C60)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x15C57A30)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C57970)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15C57A70)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_SETCARDCLICK_OFFSET UNITYSDK_OFFSET(0x15C57B10)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C57CD0)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C57CE0)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15C57D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepMonsterCardWidgetController_TypeDefinitionIndex = 79945;

	class UIRepelPrepMonsterCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::CALIGLPABNP* JAJENNKOKFK; // 0x2F8
		::System::Action_1<::System::Int32>* OFJCLIEIOFI; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetCardClick(::System::Action_1<::System::Int32>* cardClick, ::CALIGLPABNP* monsterConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_SETCARDCLICK_OFFSET))(this, cardClick, monsterConfig);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::KNPLNBCOBBJ* OGMPOGIHBIK()
		{
			return ((::KNPLNBCOBBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
