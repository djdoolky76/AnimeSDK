#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AceFlags_TypeDefinitionIndex = 965;

	enum class AceFlags : ::System::Byte
	{
		None = 0,
		ObjectInherit = 1,
		ContainerInherit = 2,
		NoPropagateInherit = 4,
		InheritOnly = 8,
		InheritanceFlags = 15,
		Inherited = 16,
		SuccessfulAccess = 64,
		FailedAccess = 128,
		AuditFlags = 192,
	};
}
