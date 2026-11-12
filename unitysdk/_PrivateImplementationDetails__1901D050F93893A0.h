#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__1901D050F93893A0___StaticArrayInitTypeSize_48.h"
namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__1901D050F93893A0_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1CDA6B40)

inline static constexpr unsigned int _PrivateImplementationDetails__1901D050F93893A0_TypeDefinitionIndex = 9574;

	class _PrivateImplementationDetails__1901D050F93893A0 : public ::System::Object
	{
	public:
		static ::_PrivateImplementationDetails__1901D050F93893A0___StaticArrayInitTypeSize_48* StaticGet__629A86A77E567D25C2F90C4038BEF4AAD179E773()
		{
			return (::_PrivateImplementationDetails__1901D050F93893A0___StaticArrayInitTypeSize_48*)UnitySDK::FromName("", "<PrivateImplementationDetails>")->GetStaticField(0x0);
		}

		static ::System::Int64* StaticGet__699FB291AF1B60327B8807FDCF384191B0AFB631()
		{
			return (::System::Int64*)UnitySDK::FromName("", "<PrivateImplementationDetails>")->GetStaticField(0x0);
		}

		static ::System::UInt32 ComputeStringHash(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__1901D050F93893A0_COMPUTESTRINGHASH_OFFSET))(a1);
		}

	};
