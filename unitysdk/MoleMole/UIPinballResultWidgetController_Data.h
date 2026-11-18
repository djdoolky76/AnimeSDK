#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15D28380)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballResultWidgetController_Data_TypeDefinitionIndex = 63144;

	class UIPinballResultWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 Id; // 0x10
		::System::Int32 Count; // 0x14

		::System::Void _ctor(::System::Int32 id, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this, id, count);
		}
	};
}
