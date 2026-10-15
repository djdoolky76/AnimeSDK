#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HCFEFFEAIJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C1A310)
#define HCFEFFEAIJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1A350)
#define HCFEFFEAIJH___C___TRYAPPLY_B__0_0_OFFSET UNITYSDK_OFFSET(0x15C1A360)

	class HCFEFFEAIJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13A0);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCFEFFEAIJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFEFFEAIJH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __TryApply_b__0_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + HCFEFFEAIJH___C___TRYAPPLY_B__0_0_OFFSET))(this, a1);
		}

	};
