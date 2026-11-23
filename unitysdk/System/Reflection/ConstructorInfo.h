#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAD914528AA19877.h"
#include "unitysdk/System/Reflection/BF260D6A8F0D7450.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_REFLECTION_CONSTRUCTORINFO_A7EF90431CDD2732_OFFSET UNITYSDK_OFFSET(0x3C3D350)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_AB5BE41A5064DDFC_OFFSET UNITYSDK_OFFSET(0x3B685E0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x3B83C30)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x3B83B80)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_F3A7145D0655067C_OFFSET UNITYSDK_OFFSET(0x165D460)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x3C3D270)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C3D2B0)
#define SYSTEM_REFLECTION_CONSTRUCTORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

namespace System::Reflection
{
	inline static constexpr unsigned int ConstructorInfo_TypeDefinitionIndex = 11599;

	class ConstructorInfo : public ::BAD914528AA19877
	{
	public:
		static ::System::String** StaticGet_F3BFEC9BB33B1C2D()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConstructorInfo_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_BA670B673640E635()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConstructorInfo_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Object*>* B652C74F012A9C5B)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_INVOKE_OFFSET))(this, B652C74F012A9C5B);
		}

		::System::Boolean E7483E7CBF06BCFD(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_E7483E7CBF06BCFD_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Reflection::BF260D6A8F0D7450 F3A7145D0655067C()
		{
			return ((::System::Reflection::BF260D6A8F0D7450(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_F3A7145D0655067C_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO__CCTOR_OFFSET))();
		}

		static ::System::Boolean A7EF90431CDD2732(::System::Reflection::ConstructorInfo* A11D4EC92205DAEE, ::System::Reflection::ConstructorInfo* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_A7EF90431CDD2732_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		static ::System::Boolean AB5BE41A5064DDFC(::System::Reflection::ConstructorInfo* A11D4EC92205DAEE, ::System::Reflection::ConstructorInfo* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_AB5BE41A5064DDFC_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO_AE1A0863005E0599_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CONSTRUCTORINFO__CTOR_OFFSET))(this);
		}
	};
}
