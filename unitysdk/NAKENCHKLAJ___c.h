#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MemberInfo; }

#define NAKENCHKLAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBAA3500)
#define NAKENCHKLAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA3530)
#define NAKENCHKLAJ___C___GETMEMBERSTOPARSE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBAA3540)
#define NAKENCHKLAJ___C___GETMEMBERSTOPARSE_B__1_1_OFFSET UNITYSDK_OFFSET(0xBAA3600)
#define NAKENCHKLAJ___C___GETMEMBERSTOPARSE_B__1_2_OFFSET UNITYSDK_OFFSET(0xBAA3630)

	class NAKENCHKLAJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B080);
		}

		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B088);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B090);
		}

		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAKENCHKLAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKENCHKLAJ___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetMembersToParse_b__1_0(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NAKENCHKLAJ___C___GETMEMBERSTOPARSE_B__1_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetMembersToParse_b__1_1(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NAKENCHKLAJ___C___GETMEMBERSTOPARSE_B__1_1_OFFSET))(this, a1);
		}

		::System::Reflection::MemberInfo* __GetMembersToParse_b__1_2(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NAKENCHKLAJ___C___GETMEMBERSTOPARSE_B__1_2_OFFSET))(this, a1);
		}

	};
