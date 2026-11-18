#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define MOLEMOLE_CASETEST_REMOTEFOLDOUTGROUPATTRIBUTE_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x121A1E90)
#define MOLEMOLE_CASETEST_REMOTEFOLDOUTGROUPATTRIBUTE_GET_GROUPPATH_OFFSET UNITYSDK_OFFSET(0x121A1E80)
#define MOLEMOLE_CASETEST_REMOTEFOLDOUTGROUPATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x121A1EA0)
#define MOLEMOLE_CASETEST_REMOTEFOLDOUTGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x121A1EB0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteFoldoutGroupAttribute_TypeDefinitionIndex = 51298;

	class RemoteFoldoutGroupAttribute : public ::System::Attribute
	{
	public:
		::System::String* _GroupPath_k__BackingField; // 0x10
		::System::Boolean _Expanded_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single _Order_k__BackingField; // 0x1C

		::System::Void _ctor(::System::String* groupPath, ::System::Boolean expanded, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEFOLDOUTGROUPATTRIBUTE__CTOR_OFFSET))(this, groupPath, expanded, order);
		}

		::System::String* get_GroupPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEFOLDOUTGROUPATTRIBUTE_GET_GROUPPATH_OFFSET))(this);
		}

		::System::Boolean get_Expanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEFOLDOUTGROUPATTRIBUTE_GET_EXPANDED_OFFSET))(this);
		}

		::System::Single get_Order()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEFOLDOUTGROUPATTRIBUTE_GET_ORDER_OFFSET))(this);
		}
	};
}
