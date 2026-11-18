#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class LDINEKAEDFN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1769AA80)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1769A780)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1769A820)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_SETENTRANCEVIDEOFOCUS_OFFSET UNITYSDK_OFFSET(0x1769AAF0)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1769ABA0)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1769AC00)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1769ACA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossEntranceWidgetController_TypeDefinitionIndex = 46447;

	class UIHardCoreBossEntranceWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 PrepEntranceSlotIndex; // 0x2C8
		::System::Byte _padding0[0x4];
		::System::Action_1<::System::Int32>* OnClickEntranceCallback; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetEntranceVideoFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_SETENTRANCEVIDEOFOCUS_OFFSET))(this, focus);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::LDINEKAEDFN* OGMPOGIHBIK()
		{
			return ((::LDINEKAEDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
