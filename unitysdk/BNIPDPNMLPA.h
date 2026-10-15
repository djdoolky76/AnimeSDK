#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BNIPDPNMLPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDB870)
#define BNIPDPNMLPA_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xBDDB880)
#define BNIPDPNMLPA_GET_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0xBDDB8A0)
#define BNIPDPNMLPA_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xBDDB890)
#define BNIPDPNMLPA_SET_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0xBDDB8B0)

inline static constexpr unsigned int BNIPDPNMLPA_TypeDefinitionIndex = 80281;

	class BNIPDPNMLPA : public ::System::Object
	{
	public:
		::System::Boolean _CloseWindow_k__BackingField; // 0x10
		::System::Boolean _SwitchTab_k__BackingField; // 0x11
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
