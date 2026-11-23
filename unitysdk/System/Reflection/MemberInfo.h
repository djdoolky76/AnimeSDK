#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class E3BD8E2448A9C8D9; }

#define SYSTEM_REFLECTION_MEMBERINFO_A7EF90431CDD2732_OFFSET UNITYSDK_OFFSET(0x3CEC940)
#define SYSTEM_REFLECTION_MEMBERINFO_AB5BE41A5064DDFC_OFFSET UNITYSDK_OFFSET(0x3CEC500)
#define SYSTEM_REFLECTION_MEMBERINFO_AD9A8EF3311D3A57_OFFSET UNITYSDK_OFFSET(0x3CEC3E0)
#define SYSTEM_REFLECTION_MEMBERINFO_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x38B2050)
#define SYSTEM_REFLECTION_MEMBERINFO_B73BB2468697A504_OFFSET UNITYSDK_OFFSET(0x3CEC420)
#define SYSTEM_REFLECTION_MEMBERINFO_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x38B2040)
#define SYSTEM_REFLECTION_MEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberInfo_TypeDefinitionIndex = 10708;

	class MemberInfo : public ::System::Object
	{
	public:
		::System::Reflection::E3BD8E2448A9C8D9* B73BB2468697A504()
		{
			return ((::System::Reflection::E3BD8E2448A9C8D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_B73BB2468697A504_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean E7483E7CBF06BCFD(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_E7483E7CBF06BCFD_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_AE1A0863005E0599_OFFSET))(this);
		}

		::System::Int32 AD9A8EF3311D3A57()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_AD9A8EF3311D3A57_OFFSET))(this);
		}

		static ::System::Boolean AB5BE41A5064DDFC(::System::Reflection::MemberInfo* A11D4EC92205DAEE, ::System::Reflection::MemberInfo* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_AB5BE41A5064DDFC_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		static ::System::Boolean A7EF90431CDD2732(::System::Reflection::MemberInfo* A11D4EC92205DAEE, ::System::Reflection::MemberInfo* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_A7EF90431CDD2732_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}
	};
}
