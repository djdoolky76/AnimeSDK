#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186E6DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectPopWindowController_Context_TypeDefinitionIndex = 61160;

	class UINewbieGuideSelectPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* IdList; // 0x28
		::System::Int32 GroupId; // 0x30
		::System::Boolean IsAvatar; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 ActivityId; // 0x38
		::System::Int32 SelectIndex; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
