#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class LPCBLAPJNIB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x15C38280)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C37F10)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C37FB0)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_SETDIGITIMGFORMAT_OFFSET UNITYSDK_OFFSET(0x15C383C0)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_SETNUM_OFFSET UNITYSDK_OFFSET(0x15C382F0)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C38470)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C384D0)
#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C38570)

namespace MoleMole
{
	inline static constexpr unsigned int UINumDigitsWidgetController_TypeDefinitionIndex = 80395;

	class UINumDigitsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetNum(::System::Int32 num, ::System::Boolean hideLeadingZeros, ::System::Boolean animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_SETNUM_OFFSET))(this, num, hideLeadingZeros, animation);
		}

		::System::Void SetDigitImgFormat(::System::String* format)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_SETDIGITIMGFORMAT_OFFSET))(this, format);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::LPCBLAPJNIB* OGMPOGIHBIK()
		{
			return ((::LPCBLAPJNIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
