#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F1C8A76FE26E681F;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AFCEE3894E2B4391_F5628F8349D4A8A6_B33098E28BA70BDD_OFFSET UNITYSDK_OFFSET(0x21B05C0)
#define AFCEE3894E2B4391_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x21B0680)
#define AFCEE3894E2B4391_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AFCEE3894E2B4391_F5628F8349D4A8A6_TypeDefinitionIndex = 8821;

class AFCEE3894E2B4391_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::AFCEE3894E2B4391_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::AFCEE3894E2B4391_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AFCEE3894E2B4391_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::F1C8A76FE26E681F*, ::System::String*>** StaticGet_BD38FA80B668E0D5()
	{
		return (::System::Func_2<::F1C8A76FE26E681F*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AFCEE3894E2B4391_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCEE3894E2B4391_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEE3894E2B4391_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* B33098E28BA70BDD(::F1C8A76FE26E681F* F5006C45C2B93A1C)
	{
		return ((::System::String*(*)(::PVOID, ::F1C8A76FE26E681F*))((::PBYTE)hIl2Cpp + AFCEE3894E2B4391_F5628F8349D4A8A6_B33098E28BA70BDD_OFFSET))(this, F5006C45C2B93A1C);
	}
};
