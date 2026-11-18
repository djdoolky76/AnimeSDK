#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CASETEST_REMOTEMINVALUEATTRIBUTE_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x11E6B0B0)
#define MOLEMOLE_CASETEST_REMOTEMINVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E6B0C0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteMinValueAttribute_TypeDefinitionIndex = 88236;

	class RemoteMinValueAttribute : public ::System::Attribute
	{
	public:
		::System::Double _MinValue_k__BackingField; // 0x10

		::System::Void _ctor(::System::Double minValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEMINVALUEATTRIBUTE__CTOR_OFFSET))(this, minValue);
		}

		::System::Double get_MinValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEMINVALUEATTRIBUTE_GET_MINVALUE_OFFSET))(this);
		}
	};
}
