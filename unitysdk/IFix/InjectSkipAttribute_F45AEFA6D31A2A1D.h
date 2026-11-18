#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_INJECTSKIPATTRIBUTE_F45AEFA6D31A2A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E56C5A0)

namespace IFix
{
	inline static constexpr unsigned int InjectSkipAttribute_F45AEFA6D31A2A1D_TypeDefinitionIndex = 95329;

	class InjectSkipAttribute_F45AEFA6D31A2A1D : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_INJECTSKIPATTRIBUTE_F45AEFA6D31A2A1D__CTOR_OFFSET))(this);
		}
	};
}
