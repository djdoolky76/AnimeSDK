#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CASETEST_REMOTEHIDEININSPECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E6B0A0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteHideInInspectorAttribute_TypeDefinitionIndex = 44994;

	class RemoteHideInInspectorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEHIDEININSPECTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
