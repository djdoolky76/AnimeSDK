#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/DllImportSearchPath.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTDLLIMPORTSEARCHPATHSATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C87F0)

namespace System::Runtime::InteropServices
{
	class DefaultDllImportSearchPathsAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::InteropServices::DllImportSearchPath _paths; // 0x10
		::System::Void _ctor(::System::Runtime::InteropServices::DllImportSearchPath a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::DllImportSearchPath))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTDLLIMPORTSEARCHPATHSATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
