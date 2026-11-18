#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GDADIACNEHG;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1706A3E0)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1706A470)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETHINT_OFFSET UNITYSDK_OFFSET(0x1706A7D0)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETIMG_OFFSET UNITYSDK_OFFSET(0x1706A940)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETINFO_OFFSET UNITYSDK_OFFSET(0x1706A4F0)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1706A9D0)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1706AA30)
#define MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1706AAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDungeonBuffIconWidgetController_TypeDefinitionIndex = 74217;

	class UIDungeonBuffIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GDADIACNEHG* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetInfo(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETINFO_OFFSET))(this, id);
		}

		::System::Void SetHint(::System::Int32 hintType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETHINT_OFFSET))(this, hintType);
		}

		::System::Void SetImg(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER_SETIMG_OFFSET))(this, path);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUNGEONBUFFICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
