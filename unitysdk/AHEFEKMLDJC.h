#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AHEFEKMLDJC_CTOR_OFFSET UNITYSDK_OFFSET(0xF13C830)
#define AHEFEKMLDJC_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xF13C840)
#define AHEFEKMLDJC_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0xF13C850)

inline static constexpr unsigned int AHEFEKMLDJC_TypeDefinitionIndex = 83053;

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
