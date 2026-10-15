#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"
#include "unitysdk/System/Attribute.h"

namespace System::Security::Permissions
{
	inline static constexpr unsigned int SecurityAttribute_TypeDefinitionIndex = 966;

	class SecurityAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean m_Unrestricted; // 0x10
		::System::Byte _padding0[0x3];
		::System::Security::Permissions::SecurityAction m_Action; // 0x14
	};
}
