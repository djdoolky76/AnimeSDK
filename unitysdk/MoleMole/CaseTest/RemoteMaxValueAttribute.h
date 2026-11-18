#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CASETEST_REMOTEMAXVALUEATTRIBUTE_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0xFFBFE70)
#define MOLEMOLE_CASETEST_REMOTEMAXVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFBFE80)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteMaxValueAttribute_TypeDefinitionIndex = 52755;

	class RemoteMaxValueAttribute : public ::System::Attribute
	{
	public:
		::System::Double _MaxValue_k__BackingField; // 0x10

		::System::Void _ctor(::System::Double maxValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEMAXVALUEATTRIBUTE__CTOR_OFFSET))(this, maxValue);
		}

		::System::Double get_MaxValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEMAXVALUEATTRIBUTE_GET_MAXVALUE_OFFSET))(this);
		}
	};
}
