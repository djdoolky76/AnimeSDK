#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
namespace System { template <typename T> class Action_1; }

#define E9E84802C4DA3A4D_F5628F8349D4A8A6_B1BAF2FAD1863DEE_OFFSET UNITYSDK_OFFSET(0x1666A30)
#define E9E84802C4DA3A4D_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1666D60)
#define E9E84802C4DA3A4D_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9E84802C4DA3A4D_F5628F8349D4A8A6_TypeDefinitionIndex = 16;

class E9E84802C4DA3A4D_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E9E84802C4DA3A4D_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E9E84802C4DA3A4D_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E9E84802C4DA3A4D_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::A04FB906869DCF3A*>** StaticGet_B55D445D85F5FA3C()
	{
		return (::System::Action_1<::A04FB906869DCF3A*>**)Il2CppClass::FromTypeDefinitionIndex(E9E84802C4DA3A4D_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E9E84802C4DA3A4D_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E84802C4DA3A4D_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B1BAF2FAD1863DEE(::A04FB906869DCF3A* F9ADA718944F49ED)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + E9E84802C4DA3A4D_F5628F8349D4A8A6_B1BAF2FAD1863DEE_OFFSET))(this, F9ADA718944F49ED);
	}
};
