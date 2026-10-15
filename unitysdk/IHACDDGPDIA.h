#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IHACDDGPDIA_CTOR_OFFSET UNITYSDK_OFFSET(0x164169A0)
#define IHACDDGPDIA_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x164169B0)
#define IHACDDGPDIA_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x164169C0)

inline static constexpr unsigned int IHACDDGPDIA_TypeDefinitionIndex = 79201;

	class IHACDDGPDIA : public ::System::Object
	{
	public:
		::System::Boolean _CloseWindow_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHACDDGPDIA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_CloseWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHACDDGPDIA_GET_CLOSEWINDOW_OFFSET))(this);
		}

		::System::Void set_CloseWindow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHACDDGPDIA_SET_CLOSEWINDOW_OFFSET))(this, a1);
		}

	};
