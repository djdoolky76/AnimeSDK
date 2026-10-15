#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_CLSCOMPLIANTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B39A0)

namespace System
{
	class CLSCompliantAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean m_compliant; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CLSCOMPLIANTATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
