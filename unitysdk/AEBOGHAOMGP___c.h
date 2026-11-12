#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MemberInfo; }

#define AEBOGHAOMGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7B1470)
#define AEBOGHAOMGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B14A0)
#define AEBOGHAOMGP___C___GETMEMBERSTOPARSE_B__1_0_OFFSET UNITYSDK_OFFSET(0xB7B14B0)
#define AEBOGHAOMGP___C___GETMEMBERSTOPARSE_B__1_1_OFFSET UNITYSDK_OFFSET(0xB7B1820)
#define AEBOGHAOMGP___C___GETMEMBERSTOPARSE_B__1_2_OFFSET UNITYSDK_OFFSET(0xB7B18E0)
#define AEBOGHAOMGP___C___GETMEMBERSTOPARSE_B__1_3_OFFSET UNITYSDK_OFFSET(0xB7B1910)

inline static constexpr unsigned int AEBOGHAOMGP___c_TypeDefinitionIndex = 69183;

	class AEBOGHAOMGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E40);
		}

		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E48);
		}

		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E50);
		}

		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E58);
		}

		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBOGHAOMGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBOGHAOMGP___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>* __GetMembersToParse_b__1_0(::System::Type* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AEBOGHAOMGP___C___GETMEMBERSTOPARSE_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetMembersToParse_b__1_1(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + AEBOGHAOMGP___C___GETMEMBERSTOPARSE_B__1_1_OFFSET))(this, a1);
		}

		::System::Int32 __GetMembersToParse_b__1_2(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + AEBOGHAOMGP___C___GETMEMBERSTOPARSE_B__1_2_OFFSET))(this, a1);
		}

		::System::Reflection::MemberInfo* __GetMembersToParse_b__1_3(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + AEBOGHAOMGP___C___GETMEMBERSTOPARSE_B__1_3_OFFSET))(this, a1);
		}

	};
