#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define MOLEMOLE_CASETEST_REMOTELABELTEXTATTRIBUTE_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x11A53DB0)
#define MOLEMOLE_CASETEST_REMOTELABELTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A53DC0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteLabelTextAttribute_TypeDefinitionIndex = 57325;

	class RemoteLabelTextAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Label_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTELABELTEXTATTRIBUTE__CTOR_OFFSET))(this, label);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTELABELTEXTATTRIBUTE_GET_LABEL_OFFSET))(this);
		}
	};
}
