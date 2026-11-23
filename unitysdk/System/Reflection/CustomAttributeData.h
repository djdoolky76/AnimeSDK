#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBAC78B43000B152.h"
#include "unitysdk/FDD6FAC360A804DC.h"
#include "unitysdk/System/Object.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class A88B292D144E3748; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class CustomAttributeData_B94EF4179FF15E34; }
namespace System::Reflection { class E3BD8E2448A9C8D9; }
namespace System::Reflection { class F60CD5AA5C2080DF; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x3CCDA70)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_AEDB75B4A1EDCD99_OFFSET UNITYSDK_OFFSET(0x3CCD8E0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_B0CF17800F847F2C_OFFSET UNITYSDK_OFFSET(0x3CCE800)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E2408A58C653A6A5_OFFSET UNITYSDK_OFFSET(0x3CCDE90)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E4CF12B6170DB4A0_OFFSET UNITYSDK_OFFSET(0x3CCDE80)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E5E0B5796F7D05D0_OFFSET UNITYSDK_OFFSET(0x3B5C490)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E69F0BE055DB45B4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x3CCD400)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x3CCE010)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EFF227F6EF2E4894_1_OFFSET UNITYSDK_OFFSET(0x3CCD9D0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EFF227F6EF2E4894_2_OFFSET UNITYSDK_OFFSET(0x3CCD980)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EFF227F6EF2E4894_3_OFFSET UNITYSDK_OFFSET(0x3CCD930)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EFF227F6EF2E4894_OFFSET UNITYSDK_OFFSET(0x3CCDA20)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_F577DF907818EA73_OFFSET UNITYSDK_OFFSET(0x3CCE820)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CCE720)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BF9B10)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1666CA0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x3CCE650)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeData_TypeDefinitionIndex = 10632;

	class CustomAttributeData : public ::System::Object
	{
	public:
		::System::Reflection::ConstructorInfo* BB3F93E20F01DB40; // 0x10
		::System::Collections::Generic::IList_1<::FDD6FAC360A804DC>* A9A74DA6414AFACE; // 0x18
		::System::Collections::Generic::IList_1<::EBAC78B43000B152>* F544D2E5EEFE3C14; // 0x20
		::System::Reflection::CustomAttributeData_B94EF4179FF15E34* FB142BD1A56EE2FA; // 0x28

		static ::System::Void E4CF12B6170DB4A0(::System::Reflection::ConstructorInfo* BE6B6BEF6E8B35AA, ::System::Reflection::F60CD5AA5C2080DF* B476B7AD17F6C7E5, ::System::IntPtr F220A2D27F7C6B6C, ::System::UInt32 AA254E7FD5EA1788, ::Il2CppArray<::System::Object*>*& ED5E0353506BAEA4, ::Il2CppArray<::System::Object*>*& E9FFFB9723644B7C)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::F60CD5AA5C2080DF*, ::System::IntPtr, ::System::UInt32, ::Il2CppArray<::System::Object*>*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E4CF12B6170DB4A0_OFFSET))(BE6B6BEF6E8B35AA, B476B7AD17F6C7E5, F220A2D27F7C6B6C, AA254E7FD5EA1788, ED5E0353506BAEA4, E9FFFB9723644B7C);
		}

		::System::Reflection::ConstructorInfo* E69F0BE055DB45B4()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E69F0BE055DB45B4_OFFSET))(this);
		}

		::System::Void _ctor(::System::Reflection::ConstructorInfo* EFA6C8DBC91AA06A, ::System::Reflection::F60CD5AA5C2080DF* B476B7AD17F6C7E5, ::System::IntPtr F220A2D27F7C6B6C, ::System::UInt32 AA254E7FD5EA1788)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Reflection::F60CD5AA5C2080DF*, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_OFFSET))(this, EFA6C8DBC91AA06A, B476B7AD17F6C7E5, F220A2D27F7C6B6C, AA254E7FD5EA1788);
		}

		::System::Collections::Generic::IList_1<::EBAC78B43000B152>* F577DF907818EA73()
		{
			return ((::System::Collections::Generic::IList_1<::EBAC78B43000B152>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_F577DF907818EA73_OFFSET))(this);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* EFF227F6EF2E4894(::System::Reflection::F60CD5AA5C2080DF* F249A74E7BFBE1A7)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::F60CD5AA5C2080DF*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EFF227F6EF2E4894_OFFSET))(F249A74E7BFBE1A7);
		}

		::System::Collections::Generic::IList_1<::FDD6FAC360A804DC>* B0CF17800F847F2C()
		{
			return ((::System::Collections::Generic::IList_1<::FDD6FAC360A804DC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_B0CF17800F847F2C_OFFSET))(this);
		}

		::System::Type* E5E0B5796F7D05D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E5E0B5796F7D05D0_OFFSET))(this);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* AEDB75B4A1EDCD99(::System::RuntimeType* F249A74E7BFBE1A7)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_AEDB75B4A1EDCD99_OFFSET))(F249A74E7BFBE1A7);
		}

		::System::Void _ctor_1(::System::Reflection::ConstructorInfo* EFA6C8DBC91AA06A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_1_OFFSET))(this, EFA6C8DBC91AA06A);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_AE1A0863005E0599_OFFSET))(this);
		}

		::System::Void E2408A58C653A6A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E2408A58C653A6A5_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Reflection::ConstructorInfo* EFA6C8DBC91AA06A, ::System::Collections::Generic::IList_1<::FDD6FAC360A804DC>* ED5E0353506BAEA4, ::System::Collections::Generic::IList_1<::EBAC78B43000B152>* E9FFFB9723644B7C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IList_1<::FDD6FAC360A804DC>*, ::System::Collections::Generic::IList_1<::EBAC78B43000B152>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_2_OFFSET))(this, EFA6C8DBC91AA06A, ED5E0353506BAEA4, E9FFFB9723644B7C);
		}

		::System::Boolean E7483E7CBF06BCFD(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E7483E7CBF06BCFD_OFFSET))(this, A86A90C31A146E9C);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* EFF227F6EF2E4894_1(::System::Reflection::MemberInfo* F249A74E7BFBE1A7)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EFF227F6EF2E4894_1_OFFSET))(F249A74E7BFBE1A7);
		}

		::System::String* E80B9F472EEFDF74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_E80B9F472EEFDF74_OFFSET))(this);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_3_OFFSET))(this);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* EFF227F6EF2E4894_2(::System::Reflection::A88B292D144E3748* F249A74E7BFBE1A7)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::A88B292D144E3748*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EFF227F6EF2E4894_2_OFFSET))(F249A74E7BFBE1A7);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* EFF227F6EF2E4894_3(::System::Reflection::E3BD8E2448A9C8D9* F249A74E7BFBE1A7)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::E3BD8E2448A9C8D9*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EFF227F6EF2E4894_3_OFFSET))(F249A74E7BFBE1A7);
		}
	};
}
