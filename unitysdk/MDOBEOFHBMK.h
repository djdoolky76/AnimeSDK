#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDOBEOFHBMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB8ADB40)
#define MDOBEOFHBMK_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xB8ADB50)
#define MDOBEOFHBMK_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xB8ADB60)

inline static constexpr unsigned int MDOBEOFHBMK_TypeDefinitionIndex = 80276;

	class MDOBEOFHBMK : public ::System::Object
	{
	public:
		::System::Boolean _CloseWindow_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDOBEOFHBMK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_CloseWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOBEOFHBMK_GET_CLOSEWINDOW_OFFSET))(this);
		}

		::System::Void set_CloseWindow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDOBEOFHBMK_SET_CLOSEWINDOW_OFFSET))(this, a1);
		}

	};
