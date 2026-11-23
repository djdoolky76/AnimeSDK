#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define A418C49FA6A8C1F7_FEF44AC67BAB5453_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET UNITYSDK_OFFSET(0x43469A0)
#define A418C49FA6A8C1F7_FEF44AC67BAB5453_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x4346E20)
#define A418C49FA6A8C1F7_FEF44AC67BAB5453_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int FEF44AC67BAB5453_F5628F8349D4A8A6_TypeDefinitionIndex = 13534;

	class FEF44AC67BAB5453_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::A418C49FA6A8C1F7::FEF44AC67BAB5453_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::A418C49FA6A8C1F7::FEF44AC67BAB5453_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FEF44AC67BAB5453_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::String*, ::System::UInt64, ::System::UInt64>** StaticGet_BD38FA80B668E0D5()
		{
			return (::System::Func_3<::System::String*, ::System::UInt64, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(FEF44AC67BAB5453_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FEF44AC67BAB5453_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FEF44AC67BAB5453_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::UInt64 F25B2DADEF28F0D9(::System::String* B9AEC57275825552, ::System::UInt64 F3BB7A1DA5160A74)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_FEF44AC67BAB5453_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET))(this, B9AEC57275825552, F3BB7A1DA5160A74);
		}
	};
}
