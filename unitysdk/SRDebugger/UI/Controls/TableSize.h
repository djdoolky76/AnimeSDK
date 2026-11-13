#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger::UI::Controls { class TableSize; }
namespace System { class String; }

#define SRDEBUGGER_UI_CONTROLS_TABLESIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D44D1B0)
#define SRDEBUGGER_UI_CONTROLS_TABLESIZE_SYSTEM_ICOMPARABLE_SRDEBUGGER_UI_CONTROLS_TABLESIZE__COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D44D180)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int TableSize_TypeDefinitionIndex = 38962;

	class TableSize : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Int64 size; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_TABLESIZE_CTOR_OFFSET))(this);
		}

		::System::Int32 System_IComparable_SRDebugger_UI_Controls_TableSize__CompareTo(::SRDebugger::UI::Controls::TableSize* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::SRDebugger::UI::Controls::TableSize*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_TABLESIZE_SYSTEM_ICOMPARABLE_SRDEBUGGER_UI_CONTROLS_TABLESIZE__COMPARETO_OFFSET))(this, a1);
		}

	};
}
