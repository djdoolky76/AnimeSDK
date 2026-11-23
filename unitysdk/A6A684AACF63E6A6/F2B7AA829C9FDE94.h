#pragma once
#include "unitysdk/unitysdk.h"

namespace A6A684AACF63E6A6
{
	inline static constexpr unsigned int F2B7AA829C9FDE94_TypeDefinitionIndex = 15069;

	enum class F2B7AA829C9FDE94 : ::System::Int32
	{
		NoFlag = 0,
		IgnoreNotTimeValid = 1,
		IgnoreCtlNotTimeValid = 2,
		IgnoreNotTimeNested = 4,
		IgnoreInvalidBasicConstraints = 8,
		AllowUnknownCertificateAuthority = 16,
		IgnoreWrongUsage = 32,
		IgnoreInvalidName = 64,
		IgnoreInvalidPolicy = 128,
		IgnoreEndRevocationUnknown = 256,
		IgnoreCtlSignerRevocationUnknown = 512,
		IgnoreCertificateAuthorityRevocationUnknown = 1024,
		IgnoreRootRevocationUnknown = 2048,
		AllFlags = 4095,
	};
}
