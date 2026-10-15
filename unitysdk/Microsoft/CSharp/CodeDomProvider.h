#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MICROSOFT_CSHARP_CODEDOMPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE91CF0)

namespace Microsoft::CSharp
{
	class CodeDomProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CODEDOMPROVIDER_CTOR_OFFSET))(this);
		}

	};
}
