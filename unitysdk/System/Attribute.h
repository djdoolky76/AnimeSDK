#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class F60CD5AA5C2080DF; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_ATTRIBUTE_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x3C58960)
#define SYSTEM_ATTRIBUTE_BB16E8F5602F7B15_1_OFFSET UNITYSDK_OFFSET(0x3C57F40)
#define SYSTEM_ATTRIBUTE_BB16E8F5602F7B15_2_OFFSET UNITYSDK_OFFSET(0x3C580A0)
#define SYSTEM_ATTRIBUTE_BB16E8F5602F7B15_3_OFFSET UNITYSDK_OFFSET(0x3C57FF0)
#define SYSTEM_ATTRIBUTE_BB16E8F5602F7B15_OFFSET UNITYSDK_OFFSET(0x3C57E90)
#define SYSTEM_ATTRIBUTE_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x3C57BF0)
#define SYSTEM_ATTRIBUTE_ED96C9EDFB6991C0_OFFSET UNITYSDK_OFFSET(0x3C57A20)
#define SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_1_OFFSET UNITYSDK_OFFSET(0x3C58170)
#define SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_2_OFFSET UNITYSDK_OFFSET(0x3C58160)
#define SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_3_OFFSET UNITYSDK_OFFSET(0x3C58150)
#define SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_4_OFFSET UNITYSDK_OFFSET(0x3C58720)
#define SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_OFFSET UNITYSDK_OFFSET(0x3C583F0)
#define SYSTEM_ATTRIBUTE_F7F1B01DD303B2EF_1_OFFSET UNITYSDK_OFFSET(0x3C58B90)
#define SYSTEM_ATTRIBUTE_F7F1B01DD303B2EF_OFFSET UNITYSDK_OFFSET(0x3C58AE0)
#define SYSTEM_ATTRIBUTE_F8124BEC5FBC811E_1_OFFSET UNITYSDK_OFFSET(0x3C58C40)
#define SYSTEM_ATTRIBUTE_F8124BEC5FBC811E_OFFSET UNITYSDK_OFFSET(0x3C58CB0)
#define SYSTEM_ATTRIBUTE_F91469E552431C49_1_OFFSET UNITYSDK_OFFSET(0x3C58D30)
#define SYSTEM_ATTRIBUTE_F91469E552431C49_OFFSET UNITYSDK_OFFSET(0x3C58D20)
#define SYSTEM_ATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System
{
	inline static constexpr unsigned int Attribute_TypeDefinitionIndex = 11668;

	class Attribute : public ::System::Object
	{
	public:
		static ::System::Boolean F91469E552431C49(::System::Reflection::MemberInfo* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_F91469E552431C49_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216);
		}

		static ::System::Attribute* BB16E8F5602F7B15(::System::Reflection::F60CD5AA5C2080DF* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::System::Attribute*(*)(::System::Reflection::F60CD5AA5C2080DF*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_BB16E8F5602F7B15_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216, BF6DD47BE003A608);
		}

		static ::Il2CppArray<::System::Attribute*>* EFF227F6EF2E4894(::System::Reflection::MemberInfo* FDA7979CE82824CB, ::System::Type* A288CB28FC2A6DA3, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_OFFSET))(FDA7979CE82824CB, A288CB28FC2A6DA3, BF6DD47BE003A608);
		}

		static ::System::Attribute* BB16E8F5602F7B15_1(::System::Reflection::F60CD5AA5C2080DF* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216)
		{
			return ((::System::Attribute*(*)(::System::Reflection::F60CD5AA5C2080DF*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_BB16E8F5602F7B15_1_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216);
		}

		static ::Il2CppArray<::System::Attribute*>* F7F1B01DD303B2EF(::System::Reflection::EventInfo* FDA7979CE82824CB, ::System::Type* A288CB28FC2A6DA3, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::EventInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_F7F1B01DD303B2EF_OFFSET))(FDA7979CE82824CB, A288CB28FC2A6DA3, BF6DD47BE003A608);
		}

		static ::Il2CppArray<::System::Attribute*>* EFF227F6EF2E4894_1(::System::Reflection::F60CD5AA5C2080DF* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::F60CD5AA5C2080DF*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_1_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216, BF6DD47BE003A608);
		}

		static ::Il2CppArray<::System::Attribute*>* EFF227F6EF2E4894_2(::System::Reflection::MemberInfo* FDA7979CE82824CB, ::System::Type* A288CB28FC2A6DA3)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_2_OFFSET))(FDA7979CE82824CB, A288CB28FC2A6DA3);
		}

		::System::Boolean E7483E7CBF06BCFD(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_E7483E7CBF06BCFD_OFFSET))(this, A86A90C31A146E9C);
		}

		static ::System::Boolean F8124BEC5FBC811E(::System::Reflection::PropertyInfo* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_F8124BEC5FBC811E_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216, BF6DD47BE003A608);
		}

		static ::System::Boolean F91469E552431C49_1(::System::Reflection::MemberInfo* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_F91469E552431C49_1_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216, BF6DD47BE003A608);
		}

		static ::Il2CppArray<::System::Attribute*>* F7F1B01DD303B2EF_1(::System::Reflection::PropertyInfo* FDA7979CE82824CB, ::System::Type* A288CB28FC2A6DA3, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::PropertyInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_F7F1B01DD303B2EF_1_OFFSET))(FDA7979CE82824CB, A288CB28FC2A6DA3, BF6DD47BE003A608);
		}

		static ::Il2CppArray<::System::Attribute*>* EFF227F6EF2E4894_3(::System::Reflection::MemberInfo* FDA7979CE82824CB)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_3_OFFSET))(FDA7979CE82824CB);
		}

		static ::System::Attribute* BB16E8F5602F7B15_2(::System::Reflection::MemberInfo* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_BB16E8F5602F7B15_2_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216);
		}

		static ::Il2CppArray<::System::Attribute*>* EFF227F6EF2E4894_4(::System::Reflection::MemberInfo* FDA7979CE82824CB, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_EFF227F6EF2E4894_4_OFFSET))(FDA7979CE82824CB, BF6DD47BE003A608);
		}

		static ::System::Boolean ED96C9EDFB6991C0(::System::Object* B0A648D7E0B8EE10, ::System::Object* F04E58FA4DF8A25D)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_ED96C9EDFB6991C0_OFFSET))(B0A648D7E0B8EE10, F04E58FA4DF8A25D);
		}

		static ::System::Boolean F8124BEC5FBC811E_1(::System::Reflection::EventInfo* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_F8124BEC5FBC811E_1_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216, BF6DD47BE003A608);
		}

		static ::System::Attribute* BB16E8F5602F7B15_3(::System::Reflection::MemberInfo* FDA7979CE82824CB, ::System::Type* A67E7F50FDF4F216, ::System::Boolean BF6DD47BE003A608)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_BB16E8F5602F7B15_3_OFFSET))(FDA7979CE82824CB, A67E7F50FDF4F216, BF6DD47BE003A608);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE_AE1A0863005E0599_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
