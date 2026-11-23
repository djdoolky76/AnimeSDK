#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define A418C49FA6A8C1F7_EA138063AB914728_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET UNITYSDK_OFFSET(0x428CA30)
#define A418C49FA6A8C1F7_EA138063AB914728_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x428D450)
#define A418C49FA6A8C1F7_EA138063AB914728_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int EA138063AB914728_F5628F8349D4A8A6_TypeDefinitionIndex = 13855;

	class EA138063AB914728_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::A418C49FA6A8C1F7::EA138063AB914728_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::A418C49FA6A8C1F7::EA138063AB914728_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EA138063AB914728_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::String*, ::System::Int64, ::System::Int64>** StaticGet_BD38FA80B668E0D5()
		{
			return (::System::Func_3<::System::String*, ::System::Int64, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(EA138063AB914728_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EA138063AB914728_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EA138063AB914728_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int64 F25B2DADEF28F0D9(::System::String* B9AEC57275825552, ::System::Int64 F3BB7A1DA5160A74)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EA138063AB914728_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET))(this, B9AEC57275825552, F3BB7A1DA5160A74);
		}
	};
}
