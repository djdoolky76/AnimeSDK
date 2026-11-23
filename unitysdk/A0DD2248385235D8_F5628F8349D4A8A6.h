#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define A0DD2248385235D8_F5628F8349D4A8A6_A0950BD63EF959E1_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A0DD2248385235D8_F5628F8349D4A8A6_A320B6E0DBD7D517_OFFSET UNITYSDK_OFFSET(0x3AF7700)
#define A0DD2248385235D8_F5628F8349D4A8A6_B06193A16BFDC0EA_OFFSET UNITYSDK_OFFSET(0x3AF73B0)
#define A0DD2248385235D8_F5628F8349D4A8A6_ECE5B1885B5C5C25_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A0DD2248385235D8_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AF9670)
#define A0DD2248385235D8_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0DD2248385235D8_F5628F8349D4A8A6_TypeDefinitionIndex = 12196;

class A0DD2248385235D8_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A0DD2248385235D8_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A0DD2248385235D8_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A0DD2248385235D8_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet_AE9C5ABBADFAED14()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(A0DD2248385235D8_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet_B8CA52E4DE85C79A()
	{
		return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A0DD2248385235D8_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_F29C1BDBC7235176()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(A0DD2248385235D8_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::Action_2<::System::String*, ::System::String*>** StaticGet_B59FACF145743799()
	{
		return (::System::Action_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A0DD2248385235D8_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0DD2248385235D8_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A320B6E0DBD7D517(::System::Int32 FEC8DC0392823C8D, ::System::String* FECAF96EEBC85461)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F5628F8349D4A8A6_A320B6E0DBD7D517_OFFSET))(this, FEC8DC0392823C8D, FECAF96EEBC85461);
	}

	::System::Void A0950BD63EF959E1(::System::Boolean E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F5628F8349D4A8A6_A0950BD63EF959E1_OFFSET))(this, E82293C0814051A5);
	}

	::System::Void B06193A16BFDC0EA(::System::String* AF94CBD00018A704, ::System::String* AD4834887E87082A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F5628F8349D4A8A6_B06193A16BFDC0EA_OFFSET))(this, AF94CBD00018A704, AD4834887E87082A);
	}

	::System::Void ECE5B1885B5C5C25(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F5628F8349D4A8A6_ECE5B1885B5C5C25_OFFSET))(this, A6CAE7339066B0FB);
	}
};
