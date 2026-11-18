#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__DD677A5675D8EE07___StaticArrayInitTypeSize_127.h"

namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__DD677A5675D8EE07_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1EADC5C0)

inline static constexpr unsigned int _PrivateImplementationDetails__DD677A5675D8EE07_TypeDefinitionIndex = 26120;

class _PrivateImplementationDetails__DD677A5675D8EE07 : public ::System::Object
{
public:
	static ::_PrivateImplementationDetails__DD677A5675D8EE07___StaticArrayInitTypeSize_127* StaticGet_A097044521F478B3A2A9A3AC52887BA733E4DE56()
	{
		return (::_PrivateImplementationDetails__DD677A5675D8EE07___StaticArrayInitTypeSize_127*)Il2CppClass::FromTypeDefinitionIndex(_PrivateImplementationDetails__DD677A5675D8EE07_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::UInt32 ComputeStringHash(::System::String* s)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__DD677A5675D8EE07_COMPUTESTRINGHASH_OFFSET))(s);
	}
};
