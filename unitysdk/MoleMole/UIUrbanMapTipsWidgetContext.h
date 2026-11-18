#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDOLCBBOINH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x113671D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTipsWidgetContext_TypeDefinitionIndex = 76920;

	class UIUrbanMapTipsWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::Boolean>* IsMuteClick; // 0x28
		::System::Int32 MapAreaId; // 0x30
		::System::Boolean NetFlag; // 0x34
		::System::Byte _padding0[0x3];
		::JDOLCBBOINH SectionOrFloor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
