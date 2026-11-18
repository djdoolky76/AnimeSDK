#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__157DA9D2C9889DF2___StaticArrayInitTypeSize_14.h"

namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__157DA9D2C9889DF2_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1FDA09F0)

inline static constexpr unsigned int _PrivateImplementationDetails__157DA9D2C9889DF2_TypeDefinitionIndex = 32859;

class _PrivateImplementationDetails__157DA9D2C9889DF2 : public ::System::Object
{
public:
	static ::_PrivateImplementationDetails__157DA9D2C9889DF2___StaticArrayInitTypeSize_14* StaticGet__73A7CA944158467943BFEB320F79099327A00212()
	{
		return (::_PrivateImplementationDetails__157DA9D2C9889DF2___StaticArrayInitTypeSize_14*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__157DA9D2C9889DF2_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::UInt32 ComputeStringHash(::System::String* s)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__157DA9D2C9889DF2_COMPUTESTRINGHASH_OFFSET))(s);
	}
};
