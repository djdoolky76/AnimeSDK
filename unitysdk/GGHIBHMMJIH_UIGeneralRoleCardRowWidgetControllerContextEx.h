#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralRoleCardRowWidgetController_Context.h"

class BPHGNMNLLHF;

#define GGHIBHMMJIH_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13D49D20)
#define GGHIBHMMJIH_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x13D49CB0)

inline static constexpr unsigned int GGHIBHMMJIH_UIGeneralRoleCardRowWidgetControllerContextEx_TypeDefinitionIndex = 45799;

class GGHIBHMMJIH_UIGeneralRoleCardRowWidgetControllerContextEx : public ::MoleMole::UIGeneralRoleCardRowWidgetController_Context
{
public:
	::BPHGNMNLLHF* avatarItem; // 0x70

	::System::Void _ctor(::System::Int32 robotId)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_OFFSET))(this, robotId);
	}

	::System::Void _ctor_1(::BPHGNMNLLHF* data)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_UIGENERALROLECARDROWWIDGETCONTROLLERCONTEXTEX__CTOR_1_OFFSET))(this, data);
	}
};
