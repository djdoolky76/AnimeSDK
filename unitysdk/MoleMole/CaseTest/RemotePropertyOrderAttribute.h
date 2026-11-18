#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CASETEST_REMOTEPROPERTYORDERATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x11A53DD0)
#define MOLEMOLE_CASETEST_REMOTEPROPERTYORDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A53DE0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemotePropertyOrderAttribute_TypeDefinitionIndex = 75352;

	class RemotePropertyOrderAttribute : public ::System::Attribute
	{
	public:
		::System::Single _Order_k__BackingField; // 0x10

		::System::Void _ctor(::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEPROPERTYORDERATTRIBUTE__CTOR_OFFSET))(this, order);
		}

		::System::Single get_Order()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEPROPERTYORDERATTRIBUTE_GET_ORDER_OFFSET))(this);
		}
	};
}
