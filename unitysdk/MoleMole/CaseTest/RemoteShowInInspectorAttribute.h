#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CASETEST_REMOTESHOWININSPECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xFA982A0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteShowInInspectorAttribute_TypeDefinitionIndex = 74923;

	class RemoteShowInInspectorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTESHOWININSPECTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
