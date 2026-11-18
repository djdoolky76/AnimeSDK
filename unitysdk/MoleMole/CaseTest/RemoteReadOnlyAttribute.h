#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CASETEST_REMOTEREADONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x174E38A0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteReadOnlyAttribute_TypeDefinitionIndex = 55091;

	class RemoteReadOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEREADONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
