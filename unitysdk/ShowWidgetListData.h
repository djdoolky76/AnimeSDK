#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadCustomList; }

#define SHOWWIDGETLISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x119ADBB0)

inline static constexpr unsigned int ShowWidgetListData_TypeDefinitionIndex = 53636;

class ShowWidgetListData : public ::System::Object
{
public:
	::MoleMole::MonoGamepadCustomList* GamepadList; // 0x10
	::System::Int32 MinCount; // 0x18
	::System::Int32 ScrollToIndex; // 0x1C
	::System::Int32 SelectIndex; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWWIDGETLISTDATA__CTOR_OFFSET))(this);
	}
};
