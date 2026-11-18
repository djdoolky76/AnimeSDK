#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define MOLEMOLE_CASETEST_REMOTEBOXGROUPATTRIBUTE_GET_GROUPPATH_OFFSET UNITYSDK_OFFSET(0xFA98270)
#define MOLEMOLE_CASETEST_REMOTEBOXGROUPATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xFA98280)
#define MOLEMOLE_CASETEST_REMOTEBOXGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xFA98290)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteBoxGroupAttribute_TypeDefinitionIndex = 42145;

	class RemoteBoxGroupAttribute : public ::System::Attribute
	{
	public:
		::System::String* _GroupPath_k__BackingField; // 0x10
		::System::Single _Order_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* groupPath, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEBOXGROUPATTRIBUTE__CTOR_OFFSET))(this, groupPath, order);
		}

		::System::String* get_GroupPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEBOXGROUPATTRIBUTE_GET_GROUPPATH_OFFSET))(this);
		}

		::System::Single get_Order()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEBOXGROUPATTRIBUTE_GET_ORDER_OFFSET))(this);
		}
	};
}
