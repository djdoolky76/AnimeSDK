#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__338F4797F493B315___StaticArrayInitTypeSize_20.h"
#include "unitysdk/_PrivateImplementationDetails__338F4797F493B315___StaticArrayInitTypeSize_24.h"

namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__338F4797F493B315_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1F7736C0)

inline static constexpr unsigned int _PrivateImplementationDetails__338F4797F493B315_TypeDefinitionIndex = 33091;

class _PrivateImplementationDetails__338F4797F493B315 : public ::System::Object
{
public:
	static ::_PrivateImplementationDetails__338F4797F493B315___StaticArrayInitTypeSize_24* StaticGet__6D78A7DEB7B1A2A73F2CDFA8EFC4FE6DDCC4E47A()
	{
		return (::_PrivateImplementationDetails__338F4797F493B315___StaticArrayInitTypeSize_24*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__338F4797F493B315_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::_PrivateImplementationDetails__338F4797F493B315___StaticArrayInitTypeSize_20* StaticGet_CDA46F1C24B92FA8375164475268E0375C6A403D()
	{
		return (::_PrivateImplementationDetails__338F4797F493B315___StaticArrayInitTypeSize_20*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__338F4797F493B315_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::UInt32 ComputeStringHash(::System::String* s)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__338F4797F493B315_COMPUTESTRINGHASH_OFFSET))(s);
	}
};
