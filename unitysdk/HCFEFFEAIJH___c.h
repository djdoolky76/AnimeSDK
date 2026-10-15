#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HCFEFFEAIJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C0D5E0)
#define HCFEFFEAIJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15C0D620)
#define HCFEFFEAIJH___C___TRYAPPLY_B__0_0_OFFSET UNITYSDK_OFFSET(0x15C0D630)

inline static constexpr unsigned int HCFEFFEAIJH___c_TypeDefinitionIndex = 77484;

	class HCFEFFEAIJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1220);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1228);
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
