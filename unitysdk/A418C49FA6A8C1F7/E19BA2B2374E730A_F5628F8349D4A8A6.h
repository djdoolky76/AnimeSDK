#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define A418C49FA6A8C1F7_E19BA2B2374E730A_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET UNITYSDK_OFFSET(0x42DE630)
#define A418C49FA6A8C1F7_E19BA2B2374E730A_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x42DED00)
#define A418C49FA6A8C1F7_E19BA2B2374E730A_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int E19BA2B2374E730A_F5628F8349D4A8A6_TypeDefinitionIndex = 13260;

	class E19BA2B2374E730A_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::A418C49FA6A8C1F7::E19BA2B2374E730A_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::A418C49FA6A8C1F7::E19BA2B2374E730A_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E19BA2B2374E730A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::String*, ::System::UInt32, ::System::UInt32>** StaticGet_BD38FA80B668E0D5()
		{
			return (::System::Func_3<::System::String*, ::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(E19BA2B2374E730A_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E19BA2B2374E730A_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E19BA2B2374E730A_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::UInt32 F25B2DADEF28F0D9(::System::String* B9AEC57275825552, ::System::UInt32 FC300ADBDFF24726)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_E19BA2B2374E730A_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET))(this, B9AEC57275825552, FC300ADBDFF24726);
		}
	};
}
