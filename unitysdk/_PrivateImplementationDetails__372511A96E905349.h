#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/_PrivateImplementationDetails__372511A96E905349___StaticArrayInitTypeSize_127.h"
namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__372511A96E905349_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1EE49E80)

	class _PrivateImplementationDetails__372511A96E905349 : public ::System::Object
	{
	public:
		static ::_PrivateImplementationDetails__372511A96E905349___StaticArrayInitTypeSize_127* StaticGet_A097044521F478B3A2A9A3AC52887BA733E4DE56()
		{
			return (::_PrivateImplementationDetails__372511A96E905349___StaticArrayInitTypeSize_127*)UnitySDK::FromName("", "<PrivateImplementationDetails>")->GetStaticField(0x0);
		}

		static ::System::UInt32 ComputeStringHash(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__372511A96E905349_COMPUTESTRINGHASH_OFFSET))(a1);
		}

	};
