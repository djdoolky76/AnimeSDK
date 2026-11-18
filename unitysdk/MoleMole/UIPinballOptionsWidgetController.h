#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FDMPHHOHNKH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIPinballOptionsWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1906C860)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1906C430)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1906C4D0)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x1906C590)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1906C710)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1906C720)
#define MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1906C7C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballOptionsWidgetController_TypeDefinitionIndex = 72429;

	class UIPinballOptionsWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIPinballOptionsWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPinballOptionsWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}

		::FDMPHHOHNKH* OGMPOGIHBIK()
		{
			return ((::FDMPHHOHNKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLOPTIONSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
