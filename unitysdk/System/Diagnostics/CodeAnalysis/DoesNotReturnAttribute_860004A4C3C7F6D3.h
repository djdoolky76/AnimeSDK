#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNATTRIBUTE_860004A4C3C7F6D3_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED872F0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DoesNotReturnAttribute_860004A4C3C7F6D3_TypeDefinitionIndex = 6582;

	class DoesNotReturnAttribute_860004A4C3C7F6D3 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNATTRIBUTE_860004A4C3C7F6D3_CTOR_OFFSET))(this);
		}

	};
}
