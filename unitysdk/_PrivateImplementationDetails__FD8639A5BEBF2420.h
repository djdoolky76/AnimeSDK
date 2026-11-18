#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__FD8639A5BEBF2420___StaticArrayInitTypeSize_12.h"

namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__FD8639A5BEBF2420_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1F0DD340)

inline static constexpr unsigned int _PrivateImplementationDetails__FD8639A5BEBF2420_TypeDefinitionIndex = 35916;

class _PrivateImplementationDetails__FD8639A5BEBF2420 : public ::System::Object
{
public:
	static ::System::Int64* StaticGet__699FB291AF1B60327B8807FDCF384191B0AFB631()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__FD8639A5BEBF2420_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::_PrivateImplementationDetails__FD8639A5BEBF2420___StaticArrayInitTypeSize_12* StaticGet_E429CCA3F703A39CC5954A6572FEC9086135B34E()
	{
		return (::_PrivateImplementationDetails__FD8639A5BEBF2420___StaticArrayInitTypeSize_12*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__FD8639A5BEBF2420_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::UInt32 ComputeStringHash(::System::String* s)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__FD8639A5BEBF2420_COMPUTESTRINGHASH_OFFSET))(s);
	}
};
