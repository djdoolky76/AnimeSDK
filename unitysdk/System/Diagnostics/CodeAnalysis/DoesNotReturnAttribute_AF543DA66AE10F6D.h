#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNATTRIBUTE_AF543DA66AE10F6D_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8FC0)

namespace System::Diagnostics::CodeAnalysis
{
	class DoesNotReturnAttribute_AF543DA66AE10F6D : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNATTRIBUTE_AF543DA66AE10F6D_CTOR_OFFSET))(this);
		}

	};
}
