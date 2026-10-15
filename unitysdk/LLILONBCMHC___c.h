#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LLILONBCMHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB771250)
#define LLILONBCMHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB771290)
#define LLILONBCMHC___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB7712A0)

	class LLILONBCMHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66180);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLILONBCMHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLILONBCMHC___C_CTOR_OFFSET))(this);
		}

		::System::Single _OnTaskBegin_b__1_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLILONBCMHC___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

	};
