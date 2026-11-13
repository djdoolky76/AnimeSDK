#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BNIPDPNMLPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A76E7A0)
#define BNIPDPNMLPA_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x1A76E7B0)
#define BNIPDPNMLPA_GET_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x1A76E7D0)
#define BNIPDPNMLPA_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x1A76E7C0)
#define BNIPDPNMLPA_SET_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x1A76E7E0)

inline static constexpr unsigned int BNIPDPNMLPA_TypeDefinitionIndex = 83057;

	class BNIPDPNMLPA : public ::System::Object
	{
	public:
		::System::Boolean _SwitchTab_k__BackingField; // 0x10
		::System::Boolean _CloseWindow_k__BackingField; // 0x11
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BNIPDPNMLPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_CloseWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIPDPNMLPA_GET_CLOSEWINDOW_OFFSET))(this);
		}

		::System::Void set_CloseWindow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNIPDPNMLPA_SET_CLOSEWINDOW_OFFSET))(this, a1);
		}

		::System::Boolean get_SwitchTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIPDPNMLPA_GET_SWITCHTAB_OFFSET))(this);
		}

		::System::Void set_SwitchTab(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNIPDPNMLPA_SET_SWITCHTAB_OFFSET))(this, a1);
		}

	};
