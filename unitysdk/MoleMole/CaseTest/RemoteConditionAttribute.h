#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CASETEST_REMOTECONDITIONATTRIBUTE_GET_ID_OFFSET UNITYSDK_OFFSET(0x18B7C890)
#define MOLEMOLE_CASETEST_REMOTECONDITIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7C8A0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteConditionAttribute_TypeDefinitionIndex = 64989;

	class RemoteConditionAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _Id_k__BackingField; // 0x10

		::System::Void _ctor(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTECONDITIONATTRIBUTE__CTOR_OFFSET))(this, id);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTECONDITIONATTRIBUTE_GET_ID_OFFSET))(this);
		}
	};
}
