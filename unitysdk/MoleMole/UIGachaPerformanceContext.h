#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOODBBDOICG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAPERFORMANCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17595D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformanceContext_TypeDefinitionIndex = 86796;

	class UIGachaPerformanceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnUIClose; // 0x28
		::System::Action* OnPlayEnd; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* ItemResults; // 0x38
		::System::Boolean AnimaCheckMode; // 0x40
		::System::Boolean ShowBackBtn; // 0x41
		::System::Boolean SkipOpenning; // 0x42
		::System::Boolean IsNonGacha; // 0x43
		::IOODBBDOICG GachaType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
