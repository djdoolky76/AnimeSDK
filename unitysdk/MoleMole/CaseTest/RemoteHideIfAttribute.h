#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x121A1EC0)
#define MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE_GET_EXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0x121A1EE0)
#define MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE_GET_HASEXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0x121A1ED0)
#define MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x121A1F00)
#define MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x121A1EF0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteHideIfAttribute_TypeDefinitionIndex = 43713;

	class RemoteHideIfAttribute : public ::System::Attribute
	{
	public:
		::System::Object* _ExpectedValue_k__BackingField; // 0x10
		::System::Boolean _HasExpectedValue_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 _ConditionId_k__BackingField; // 0x1C

		::System::Void _ctor(::System::Int32 conditionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE__CTOR_OFFSET))(this, conditionId);
		}

		::System::Void _ctor_1(::System::Int32 conditionId, ::System::Object* expectedValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE__CTOR_1_OFFSET))(this, conditionId, expectedValue);
		}

		::System::Int32 get_ConditionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE_GET_CONDITIONID_OFFSET))(this);
		}

		::System::Boolean get_HasExpectedValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE_GET_HASEXPECTEDVALUE_OFFSET))(this);
		}

		::System::Object* get_ExpectedValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEHIDEIFATTRIBUTE_GET_EXPECTEDVALUE_OFFSET))(this);
		}
	};
}
