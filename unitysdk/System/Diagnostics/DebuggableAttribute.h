#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/DebuggableAttribute_DebuggingModes.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGABLEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A3530)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggableAttribute_TypeDefinitionIndex = 1576;

	class DebuggableAttribute : public ::System::Attribute
	{
	public:
		::System::Diagnostics::DebuggableAttribute_DebuggingModes m_debuggingModes; // 0x10
		::System::Void _ctor(::System::Diagnostics::DebuggableAttribute_DebuggingModes a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::DebuggableAttribute_DebuggingModes))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGABLEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
