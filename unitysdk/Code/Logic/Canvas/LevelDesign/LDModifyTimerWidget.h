#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InLevelTimerWidgetOperation.h"

#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMODIFYTIMERWIDGET_INVOKE_OFFSET UNITYSDK_OFFSET(0x193F0E10)
#define CODE_LOGIC_CANVAS_LEVELDESIGN_LDMODIFYTIMERWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x193F1040)

namespace Code::Logic::Canvas::LevelDesign
{
	inline static constexpr unsigned int LDModifyTimerWidget_TypeDefinitionIndex = 42547;

	class LDModifyTimerWidget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMODIFYTIMERWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::InLevelTimerWidgetOperation OpUICode, ::System::Int32 OpUIValue)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelTimerWidgetOperation, ::System::Int32))((::PBYTE)hIl2Cpp + CODE_LOGIC_CANVAS_LEVELDESIGN_LDMODIFYTIMERWIDGET_INVOKE_OFFSET))(this, OpUICode, OpUIValue);
		}
	};
}
