#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Ntlm
{
	enum class NtlmAuthLevel : ::System::Int32
	{
		LM_and_NTLM = 0,
		LM_and_NTLM_and_try_NTLMv2_Session = 1,
		NTLM_only = 2,
		NTLMv2_only = 3,
	};
}
