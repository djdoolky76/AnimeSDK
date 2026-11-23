#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E55CADE42775981D.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define A0482A0F1C7407FE_F5628F8349D4A8A6_E921712FC8BE8072_OFFSET UNITYSDK_OFFSET(0x3F6E620)
#define A0482A0F1C7407FE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F6E640)
#define A0482A0F1C7407FE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0482A0F1C7407FE_F5628F8349D4A8A6_TypeDefinitionIndex = 14252;

class A0482A0F1C7407FE_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A0482A0F1C7407FE_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A0482A0F1C7407FE_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A0482A0F1C7407FE_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::E55CADE42775981D, ::System::String*>** StaticGet_B2B462D767EFBA79()
	{
		return (::System::Func_2<::E55CADE42775981D, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A0482A0F1C7407FE_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0482A0F1C7407FE_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0482A0F1C7407FE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* E921712FC8BE8072(::E55CADE42775981D BB8C609F76620E45)
	{
		return ((::System::String*(*)(::PVOID, ::E55CADE42775981D))((::PBYTE)hIl2Cpp + A0482A0F1C7407FE_F5628F8349D4A8A6_E921712FC8BE8072_OFFSET))(this, BB8C609F76620E45);
	}
};
