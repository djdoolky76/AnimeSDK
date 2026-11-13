#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HCFEFFEAIJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7ACAE0)
#define HCFEFFEAIJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ACB20)
#define HCFEFFEAIJH___C___TRYAPPLY_B__0_0_OFFSET UNITYSDK_OFFSET(0x1B7ACB30)

inline static constexpr unsigned int HCFEFFEAIJH___c_TypeDefinitionIndex = 80219;

	class HCFEFFEAIJH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73470);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73478);
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
