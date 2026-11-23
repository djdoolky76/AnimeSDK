#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B916BB7AD5B79707;
namespace System { template <typename T> class Action_1; }

#define FF701F6A5CAFD81F_F5628F8349D4A8A6_F2658A26201B13B6_OFFSET UNITYSDK_OFFSET(0x199B940)
#define FF701F6A5CAFD81F_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x199B980)
#define FF701F6A5CAFD81F_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF701F6A5CAFD81F_F5628F8349D4A8A6_TypeDefinitionIndex = 163;

class FF701F6A5CAFD81F_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FF701F6A5CAFD81F_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FF701F6A5CAFD81F_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FF701F6A5CAFD81F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::B916BB7AD5B79707*>** StaticGet_A7ECC368172C7170()
	{
		return (::System::Action_1<::B916BB7AD5B79707*>**)Il2CppClass::FromTypeDefinitionIndex(FF701F6A5CAFD81F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FF701F6A5CAFD81F_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF701F6A5CAFD81F_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F2658A26201B13B6(::B916BB7AD5B79707* EC35F88C87A83BEB)
	{
		return ((::System::Void(*)(::PVOID, ::B916BB7AD5B79707*))((::PBYTE)hIl2Cpp + FF701F6A5CAFD81F_F5628F8349D4A8A6_F2658A26201B13B6_OFFSET))(this, EC35F88C87A83BEB);
	}
};
