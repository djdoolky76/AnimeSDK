#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define A418C49FA6A8C1F7_BB6D09C3491971F6_F5628F8349D4A8A6_E4010D837850975C_OFFSET UNITYSDK_OFFSET(0x2721EE0)
#define A418C49FA6A8C1F7_BB6D09C3491971F6_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET UNITYSDK_OFFSET(0x2721EE0)
#define A418C49FA6A8C1F7_BB6D09C3491971F6_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x42C7BD0)
#define A418C49FA6A8C1F7_BB6D09C3491971F6_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int BB6D09C3491971F6_F5628F8349D4A8A6_TypeDefinitionIndex = 14119;

	class BB6D09C3491971F6_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::A418C49FA6A8C1F7::BB6D09C3491971F6_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::A418C49FA6A8C1F7::BB6D09C3491971F6_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BB6D09C3491971F6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::String*, ::System::String*, ::System::String*>** StaticGet_BD38FA80B668E0D5()
		{
			return (::System::Func_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BB6D09C3491971F6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_3<::System::String*, ::System::String*, ::System::String*>** StaticGet_B8CA52E4DE85C79A()
		{
			return (::System::Func_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BB6D09C3491971F6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BB6D09C3491971F6_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BB6D09C3491971F6_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::String* F25B2DADEF28F0D9(::System::String* B9AEC57275825552, ::System::String* BBCFEC7DB309E927)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BB6D09C3491971F6_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET))(this, B9AEC57275825552, BBCFEC7DB309E927);
		}

		::System::String* E4010D837850975C(::System::String* B9AEC57275825552, ::System::String* BBCFEC7DB309E927)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_BB6D09C3491971F6_F5628F8349D4A8A6_E4010D837850975C_OFFSET))(this, B9AEC57275825552, BBCFEC7DB309E927);
		}
	};
}
