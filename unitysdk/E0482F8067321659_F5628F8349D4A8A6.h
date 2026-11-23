#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3A019B3697FD5CF;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define E0482F8067321659_F5628F8349D4A8A6_B33098E28BA70BDD_OFFSET UNITYSDK_OFFSET(0x21C6800)
#define E0482F8067321659_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x21C77C0)
#define E0482F8067321659_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E0482F8067321659_F5628F8349D4A8A6_TypeDefinitionIndex = 8906;

class E0482F8067321659_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E0482F8067321659_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E0482F8067321659_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E0482F8067321659_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::F3A019B3697FD5CF*, ::System::String*>** StaticGet_BD38FA80B668E0D5()
	{
		return (::System::Func_2<::F3A019B3697FD5CF*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(E0482F8067321659_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E0482F8067321659_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0482F8067321659_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* B33098E28BA70BDD(::F3A019B3697FD5CF* F5006C45C2B93A1C)
	{
		return ((::System::String*(*)(::PVOID, ::F3A019B3697FD5CF*))((::PBYTE)hIl2Cpp + E0482F8067321659_F5628F8349D4A8A6_B33098E28BA70BDD_OFFSET))(this, F5006C45C2B93A1C);
	}
};
