#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B563C754644AB54D.h"
#include "unitysdk/System/ValueType.h"

namespace IFix::Core
{
	inline static constexpr unsigned int Instruction_TypeDefinitionIndex = 6946;

	struct alignas(4) Instruction
	{
		// static const ::System::UInt64 Field_0 = 0x49E85D573E; // 0x0
		::Class_1_B563C754644AB54D Code; // 0x10
		::System::Int32 Operand; // 0x14
	};
}
