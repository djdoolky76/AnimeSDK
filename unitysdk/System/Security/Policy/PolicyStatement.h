#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Policy/PolicyStatementAttribute.h"
#include "unitysdk/System/Object.h"
namespace System::Security { class PermissionSet; }

namespace System::Security::Policy
{
	class PolicyStatement : public ::System::Object
	{
	public:
		::System::Security::PermissionSet* perms; // 0x10
		::System::Security::Policy::PolicyStatementAttribute attrs; // 0x18
	};
}
