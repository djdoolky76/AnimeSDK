#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralNumTabBtnWidgetController_GeneralNumTabBtnData.h"

#define MIDOGLOBPKA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4E4D0)

inline static constexpr unsigned int MIDOGLOBPKA_TypeDefinitionIndex = 43455;

class MIDOGLOBPKA : public ::MoleMole::UIGeneralNumTabBtnWidgetController_GeneralNumTabBtnData
{
public:
	::System::Int32 GAFENBKNOOK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDOGLOBPKA__CTOR_OFFSET))(this);
	}
};
