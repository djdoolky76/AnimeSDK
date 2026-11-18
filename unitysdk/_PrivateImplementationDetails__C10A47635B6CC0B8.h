#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__C10A47635B6CC0B8___StaticArrayInitTypeSize_24.h"

namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__C10A47635B6CC0B8_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1DE6A7B0)

inline static constexpr unsigned int _PrivateImplementationDetails__C10A47635B6CC0B8_TypeDefinitionIndex = 31233;

class _PrivateImplementationDetails__C10A47635B6CC0B8 : public ::System::Object
{
public:
	static ::_PrivateImplementationDetails__C10A47635B6CC0B8___StaticArrayInitTypeSize_24* StaticGet_DFFB52E934170DC8777833E31572A366A4E4F554()
	{
		return (::_PrivateImplementationDetails__C10A47635B6CC0B8___StaticArrayInitTypeSize_24*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__C10A47635B6CC0B8_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::UInt32 ComputeStringHash(::System::String* s)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__C10A47635B6CC0B8_COMPUTESTRINGHASH_OFFSET))(s);
	}
};
