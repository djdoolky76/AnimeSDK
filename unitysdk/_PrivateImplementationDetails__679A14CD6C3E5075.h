#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__679A14CD6C3E5075___StaticArrayInitTypeSize_48.h"

namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__679A14CD6C3E5075_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1C445520)

inline static constexpr unsigned int _PrivateImplementationDetails__679A14CD6C3E5075_TypeDefinitionIndex = 20862;

class _PrivateImplementationDetails__679A14CD6C3E5075 : public ::System::Object
{
public:
	static ::_PrivateImplementationDetails__679A14CD6C3E5075___StaticArrayInitTypeSize_48* StaticGet__629A86A77E567D25C2F90C4038BEF4AAD179E773()
	{
		return (::_PrivateImplementationDetails__679A14CD6C3E5075___StaticArrayInitTypeSize_48*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__679A14CD6C3E5075_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int64* StaticGet__699FB291AF1B60327B8807FDCF384191B0AFB631()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__679A14CD6C3E5075_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::UInt32 ComputeStringHash(::System::String* s)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__679A14CD6C3E5075_COMPUTESTRINGHASH_OFFSET))(s);
	}
};
