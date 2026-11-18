#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADLCDHJKFIO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SUIBIANTEMPLEBANGBOOSELECTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162F5170)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleBangbooSelectDialogContext_TypeDefinitionIndex = 44066;

	class SuibianTempleBangbooSelectDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::UInt32>* OnSelectBuddy; // 0x28
		::System::Int32 ProductID; // 0x30
		::System::UInt32 CurShelveID; // 0x34
		::System::UInt32 InitSelectBuddy; // 0x38
		::ADLCDHJKFIO Type; // 0x3C
		::System::Boolean ConfirmDontCloseUI; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 WorkBenchID; // 0x44
		::System::UInt32 ProductWorkerBuddy; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEBANGBOOSELECTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
