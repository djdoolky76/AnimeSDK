#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define FNKPGLGBLKO_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14114620)

inline static constexpr unsigned int FNKPGLGBLKO_PanelData_TypeDefinitionIndex = 72226;

class FNKPGLGBLKO_PanelData : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Boolean IsSelectBuddy; // 0x28
	::System::Boolean IsOnlyOne; // 0x29
	::System::Byte _padding0[0x2];
	::System::Int32 SelectId; // 0x2C
	::System::Int32 NodeId; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPGLGBLKO_PANELDATA__CTOR_OFFSET))(this);
	}
};
