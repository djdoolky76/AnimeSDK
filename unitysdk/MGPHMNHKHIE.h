#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MGPHMNHKHIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB92D1E0)
#define MGPHMNHKHIE_GET_CLOSEFULLSCREEN_OFFSET UNITYSDK_OFFSET(0xB92D210)
#define MGPHMNHKHIE_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xB92D1F0)
#define MGPHMNHKHIE_SET_CLOSEFULLSCREEN_OFFSET UNITYSDK_OFFSET(0xB92D220)
#define MGPHMNHKHIE_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xB92D200)

inline static constexpr unsigned int MGPHMNHKHIE_TypeDefinitionIndex = 80279;

	class MGPHMNHKHIE : public ::System::Object
	{
	public:
		::System::Boolean _CloseFullScreen_k__BackingField; // 0x10
		::System::Boolean _CloseWindow_k__BackingField; // 0x11
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGPHMNHKHIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_CloseWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPHMNHKHIE_GET_CLOSEWINDOW_OFFSET))(this);
		}

		::System::Void set_CloseWindow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGPHMNHKHIE_SET_CLOSEWINDOW_OFFSET))(this, a1);
		}

		::System::Boolean get_CloseFullScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPHMNHKHIE_GET_CLOSEFULLSCREEN_OFFSET))(this);
		}

		::System::Void set_CloseFullScreen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGPHMNHKHIE_SET_CLOSEFULLSCREEN_OFFSET))(this, a1);
		}

	};
