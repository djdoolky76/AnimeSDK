#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BF260D6A8F0D7450.h"
#include "unitysdk/System/Reflection/MemberInfo.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_PROPERTYINFO_A7EF90431CDD2732_OFFSET UNITYSDK_OFFSET(0x3B68610)
#define SYSTEM_REFLECTION_PROPERTYINFO_A809A657BBE1334E_2_OFFSET UNITYSDK_OFFSET(0x3C02D10)
#define SYSTEM_REFLECTION_PROPERTYINFO_A809A657BBE1334E_OFFSET UNITYSDK_OFFSET(0x3C02CE0)
#define SYSTEM_REFLECTION_PROPERTYINFO_AB5BE41A5064DDFC_OFFSET UNITYSDK_OFFSET(0x3B685E0)
#define SYSTEM_REFLECTION_PROPERTYINFO_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x3B68490)
#define SYSTEM_REFLECTION_PROPERTYINFO_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x3B683B0)
#define SYSTEM_REFLECTION_PROPERTYINFO_EFD9D6E57EB44EA4_1_OFFSET UNITYSDK_OFFSET(0x3C02CC0)
#define SYSTEM_REFLECTION_PROPERTYINFO_EFD9D6E57EB44EA4_OFFSET UNITYSDK_OFFSET(0x3BB9380)
#define SYSTEM_REFLECTION_PROPERTYINFO_F3A7145D0655067C_OFFSET UNITYSDK_OFFSET(0x27FF630)
#define SYSTEM_REFLECTION_PROPERTYINFO_F680B89DDAD02010_OFFSET UNITYSDK_OFFSET(0x3BCECC0)
#define SYSTEM_REFLECTION_PROPERTYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace System::Reflection
{
	inline static constexpr unsigned int PropertyInfo_TypeDefinitionIndex = 11366;

	class PropertyInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_AE1A0863005E0599_OFFSET))(this);
		}

		::System::Object* EFD9D6E57EB44EA4(::System::Object* A86A90C31A146E9C, ::Il2CppArray<::System::Object*>* B48C66E5FB2449C6)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_EFD9D6E57EB44EA4_OFFSET))(this, A86A90C31A146E9C, B48C66E5FB2449C6);
		}

		::System::Void A809A657BBE1334E(::System::Object* A86A90C31A146E9C, ::System::Object* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_A809A657BBE1334E_OFFSET))(this, A86A90C31A146E9C, E937D4885DAA1AE8);
		}

		::System::Object* EFD9D6E57EB44EA4_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_EFD9D6E57EB44EA4_1_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Boolean E7483E7CBF06BCFD(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_E7483E7CBF06BCFD_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Reflection::BF260D6A8F0D7450 F3A7145D0655067C()
		{
			return ((::System::Reflection::BF260D6A8F0D7450(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_F3A7145D0655067C_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* F680B89DDAD02010()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_F680B89DDAD02010_OFFSET))(this);
		}

		::System::Void A809A657BBE1334E_2(::System::Object* A86A90C31A146E9C, ::System::Object* E937D4885DAA1AE8, ::Il2CppArray<::System::Object*>* B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_A809A657BBE1334E_2_OFFSET))(this, A86A90C31A146E9C, E937D4885DAA1AE8, B48C66E5FB2449C6);
		}

		static ::System::Boolean A7EF90431CDD2732(::System::Reflection::PropertyInfo* A11D4EC92205DAEE, ::System::Reflection::PropertyInfo* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_A7EF90431CDD2732_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		static ::System::Boolean AB5BE41A5064DDFC(::System::Reflection::PropertyInfo* A11D4EC92205DAEE, ::System::Reflection::PropertyInfo* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_AB5BE41A5064DDFC_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}
	};
}
