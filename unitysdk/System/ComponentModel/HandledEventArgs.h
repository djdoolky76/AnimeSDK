#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x1CBD82E0)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x1CBD82F0)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBD8280)
#define SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD8220)

namespace System::ComponentModel
{
	inline static constexpr unsigned int HandledEventArgs_TypeDefinitionIndex = 2884;

	class HandledEventArgs : public ::System::EventArgs
	{
	public:
		::System::Boolean handled; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean defaultHandledValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS__CTOR_1_OFFSET))(this, defaultHandledValue);
		}

		::System::Boolean get_Handled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_GET_HANDLED_OFFSET))(this);
		}

		::System::Void set_Handled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_HANDLEDEVENTARGS_SET_HANDLED_OFFSET))(this, value);
		}
	};
}
