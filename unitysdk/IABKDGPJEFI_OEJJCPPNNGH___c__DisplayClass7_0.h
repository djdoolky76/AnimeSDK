#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IABKDGPJEFI_OEJJCPPNNGH;
namespace System::Diagnostics { class Stopwatch; }

#define IABKDGPJEFI_OEJJCPPNNGH___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFD6C0)
#define IABKDGPJEFI_OEJJCPPNNGH___C__DISPLAYCLASS7_0___WAITREADY_B__0_OFFSET UNITYSDK_OFFSET(0x15DFD6D0)

inline static constexpr unsigned int IABKDGPJEFI_OEJJCPPNNGH___c__DisplayClass7_0_TypeDefinitionIndex = 80167;

	class IABKDGPJEFI_OEJJCPPNNGH___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Diagnostics::Stopwatch* stopwatch; // 0x10
		::IABKDGPJEFI_OEJJCPPNNGH* __4__this; // 0x18
		::System::Boolean hasReportedStall; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __WaitReady_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH___C__DISPLAYCLASS7_0___WAITREADY_B__0_OFFSET))(this);
		}

	};
