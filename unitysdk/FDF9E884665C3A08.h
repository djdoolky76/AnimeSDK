#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FE9C907BDD20CC3F;
namespace B5697911AA1516DC { class F40B84B868E9F623; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class F34A365CFD193D25;

#define FDF9E884665C3A08_A365E04B43C8D90A_OFFSET UNITYSDK_OFFSET(0x41BEB00)
#define FDF9E884665C3A08__CCTOR_OFFSET UNITYSDK_OFFSET(0x41BEF80)

inline static constexpr unsigned int FDF9E884665C3A08_TypeDefinitionIndex = 20769;

class FDF9E884665C3A08 : public ::System::Object
{
public:
	static ::F34A365CFD193D25<::System::Type*, ::FE9C907BDD20CC3F*>** StaticGet_B1B8886BDF86A4C3()
	{
		return (::F34A365CFD193D25<::System::Type*, ::FE9C907BDD20CC3F*>**)Il2CppClass::FromTypeDefinitionIndex(FDF9E884665C3A08_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_F0CB9AC64AFB5604()
	{
		return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(FDF9E884665C3A08_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_2<::System::Type*, ::FE9C907BDD20CC3F*>** StaticGet_AFA98CEC88DD52B0()
	{
		return (::System::Action_2<::System::Type*, ::FE9C907BDD20CC3F*>**)Il2CppClass::FromTypeDefinitionIndex(FDF9E884665C3A08_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::B5697911AA1516DC::F40B84B868E9F623** StaticGet_B922A81C14CCE32B()
	{
		return (::B5697911AA1516DC::F40B84B868E9F623**)Il2CppClass::FromTypeDefinitionIndex(FDF9E884665C3A08_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDF9E884665C3A08__CCTOR_OFFSET))();
	}

	static ::FE9C907BDD20CC3F* A365E04B43C8D90A(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::FE9C907BDD20CC3F*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FDF9E884665C3A08_A365E04B43C8D90A_OFFSET))(A288CB28FC2A6DA3);
	}
};
