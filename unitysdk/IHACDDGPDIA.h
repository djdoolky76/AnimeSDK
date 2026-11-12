#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IHACDDGPDIA_CTOR_OFFSET UNITYSDK_OFFSET(0x173C8BA0)
#define IHACDDGPDIA_GET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x173C8BB0)
#define IHACDDGPDIA_SET_CLOSEWINDOW_OFFSET UNITYSDK_OFFSET(0x173C8BC0)

inline static constexpr unsigned int IHACDDGPDIA_TypeDefinitionIndex = 81978;

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
