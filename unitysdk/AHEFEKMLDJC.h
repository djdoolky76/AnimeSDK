#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AHEFEKMLDJC_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7D330)
#define AHEFEKMLDJC_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xEB7D340)
#define AHEFEKMLDJC_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xEB7D350)

inline static constexpr unsigned int AHEFEKMLDJC_TypeDefinitionIndex = 80276;

	class AHEFEKMLDJC : public ::System::Object
	{
	public:
		::System::Boolean _CloseWindow_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHEFEKMLDJC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_CloseWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEFEKMLDJC_GET_CLOSEWINDOW_OFFSET))(this);
		}

		::System::Void set_CloseWindow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHEFEKMLDJC_SET_CLOSEWINDOW_OFFSET))(this, a1);
		}

	};
