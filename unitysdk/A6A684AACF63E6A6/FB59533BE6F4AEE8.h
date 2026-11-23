#pragma once
#include "unitysdk/unitysdk.h"

namespace A6A684AACF63E6A6
{
	inline static constexpr unsigned int FB59533BE6F4AEE8_TypeDefinitionIndex = 15255;

	enum class FB59533BE6F4AEE8 : ::System::Int32
	{
		NoError = 0,
		NotTimeValid = 1,
		NotTimeNested = 2,
		Revoked = 4,
		NotSignatureValid = 8,
		NotValidForUsage = 16,
		UntrustedRoot = 32,
		RevocationStatusUnknown = 64,
		Cyclic = 128,
		InvalidExtension = 256,
		InvalidPolicyConstraints = 512,
		InvalidBasicConstraints = 1024,
		InvalidNameConstraints = 2048,
		HasNotSupportedNameConstraint = 4096,
		HasNotDefinedNameConstraint = 8192,
		HasNotPermittedNameConstraint = 16384,
		HasExcludedNameConstraint = 32768,
		PartialChain = 65536,
		CtlNotTimeValid = 131072,
		CtlNotSignatureValid = 262144,
		CtlNotValidForUsage = 524288,
		OfflineRevocation = 16777216,
		NoIssuanceChainPolicy = 33554432,
		ExplicitDistrust = 67108864,
		HasNotSupportedCriticalExtension = 134217728,
		HasWeakSignature = 1048576,
	};
}
