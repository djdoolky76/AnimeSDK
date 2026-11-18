#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MOLEMOLE_CASETEST_REMOTEENABLEGUIATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x12759410)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int RemoteEnableGUIAttribute_TypeDefinitionIndex = 57560;

	class RemoteEnableGUIAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_REMOTEENABLEGUIATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
