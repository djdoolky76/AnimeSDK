#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PHBGAINMEEM;
namespace System { class String; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_BUILDRT_OFFSET UNITYSDK_OFFSET(0x196150D0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x196150A0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_RELEASE_OFFSET UNITYSDK_OFFSET(0x196151B0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x196150B0)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x196150C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController_UIBuddySelect_TypeDefinitionIndex = 68670;

	class UILineupSelectPageController_UIBuddySelect : public ::System::Object
	{
	public:
		::PHBGAINMEEM* _unit_k__BackingField; // 0x10
		::System::Int32 height; // 0x18
		::System::Int32 width; // 0x1C

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT__CTOR_OFFSET))(this, width, height);
		}

		::PHBGAINMEEM* get_unit()
		{
			return ((::PHBGAINMEEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_GET_UNIT_OFFSET))(this);
		}

		::System::Void set_unit(::PHBGAINMEEM* value)
		{
			return ((::System::Void(*)(::PVOID, ::PHBGAINMEEM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_SET_UNIT_OFFSET))(this, value);
		}

		::System::Void BuildRT(::System::String* ctrlName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_BUILDRT_OFFSET))(this, ctrlName);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER_UIBUDDYSELECT_RELEASE_OFFSET))(this);
		}
	};
}
