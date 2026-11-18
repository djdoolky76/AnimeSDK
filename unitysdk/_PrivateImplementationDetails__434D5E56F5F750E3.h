#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__434D5E56F5F750E3_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1F5F3430)

inline static constexpr unsigned int _PrivateImplementationDetails__434D5E56F5F750E3_TypeDefinitionIndex = 32569;

class _PrivateImplementationDetails__434D5E56F5F750E3 : public ::System::Object
{
public:
	static ::System::UInt32 ComputeStringHash(::System::String* s)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__434D5E56F5F750E3_COMPUTESTRINGHASH_OFFSET))(s);
	}
};
