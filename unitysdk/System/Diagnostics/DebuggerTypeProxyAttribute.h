#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_DIAGNOSTICS_DEBUGGERTYPEPROXYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D1FB0)

namespace System::Diagnostics
{
	class DebuggerTypeProxyAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeName; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERTYPEPROXYATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
