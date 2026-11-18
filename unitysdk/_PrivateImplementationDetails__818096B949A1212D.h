#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__818096B949A1212D_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1AD9F880)

inline static constexpr unsigned int _PrivateImplementationDetails__818096B949A1212D_TypeDefinitionIndex = 13901;

class _PrivateImplementationDetails__818096B949A1212D : public ::System::Object
{
public:
	static ::System::UInt32 ComputeStringHash(::System::String* s)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__818096B949A1212D_COMPUTESTRINGHASH_OFFSET))(s);
	}
};
