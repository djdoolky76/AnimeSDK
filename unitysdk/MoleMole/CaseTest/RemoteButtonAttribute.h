#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define MOLEMOLE_CASETEST_REMOTEBUTTONATTRIBUTE_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x19086E00)
#define MOLEMOLE_CASETEST_REMOTEBUTTONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19086E20)
#define MOLEMOLE_CASETEST_REMOTEBUTTONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19086E10)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteButtonAttribute_TypeDefinitionIndex = 69611;

	class RemoteButtonAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Label_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEBUTTONATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEBUTTONATTRIBUTE__CTOR_1_OFFSET))(this, label);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEBUTTONATTRIBUTE_GET_LABEL_OFFSET))(this);
		}
	};
}
