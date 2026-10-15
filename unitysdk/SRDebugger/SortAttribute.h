#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRDEBUGGER_SORTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED53CF0)

namespace SRDebugger
{
	class SortAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 SortPriority; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SORTATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
