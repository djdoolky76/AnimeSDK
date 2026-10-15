#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__8E2FBD436556F7D9___StaticArrayInitTypeSize_48.h"
namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__8E2FBD436556F7D9_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1BC1DCC0)

	class _PrivateImplementationDetails__8E2FBD436556F7D9 : public ::System::Object
	{
	public:
		static ::_PrivateImplementationDetails__8E2FBD436556F7D9___StaticArrayInitTypeSize_48* StaticGet__629A86A77E567D25C2F90C4038BEF4AAD179E773()
		{
			return (::_PrivateImplementationDetails__8E2FBD436556F7D9___StaticArrayInitTypeSize_48*)UnitySDK::FromName("", "<PrivateImplementationDetails>")->GetStaticField(0x0);
		}

		static ::System::Int64* StaticGet__699FB291AF1B60327B8807FDCF384191B0AFB631()
		{
			return (::System::Int64*)UnitySDK::FromName("", "<PrivateImplementationDetails>")->GetStaticField(0x0);
		}

		static ::System::UInt32 ComputeStringHash(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__8E2FBD436556F7D9_COMPUTESTRINGHASH_OFFSET))(a1);
		}

	};
