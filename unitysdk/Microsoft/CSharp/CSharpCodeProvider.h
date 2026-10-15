#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/CSharp/CodeDomProvider.h"

#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE91CE0)

namespace Microsoft::CSharp
{
	class CSharpCodeProvider : public ::Microsoft::CSharp::CodeDomProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER_CTOR_OFFSET))(this);
		}

	};
}
