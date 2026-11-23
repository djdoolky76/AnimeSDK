#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF1237522147A967;
namespace MiHoYo::SDK::Win { class PayPlatInfoModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define F7B467A7AF91AF01_F5628F8349D4A8A6_BA8DE2926D349CB6_OFFSET UNITYSDK_OFFSET(0x3923C40)
#define F7B467A7AF91AF01_F5628F8349D4A8A6_E356E5F5000E2CBE_OFFSET UNITYSDK_OFFSET(0x3923D10)
#define F7B467A7AF91AF01_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3925470)
#define F7B467A7AF91AF01_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7B467A7AF91AF01_F5628F8349D4A8A6_TypeDefinitionIndex = 12339;

class F7B467A7AF91AF01_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F7B467A7AF91AF01_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F7B467A7AF91AF01_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F7B467A7AF91AF01_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet_E023781C30A28988()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(F7B467A7AF91AF01_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::FF1237522147A967*, ::MiHoYo::SDK::Win::PayPlatInfoModel*>** StaticGet_FCE5FD1F72139C86()
	{
		return (::System::Func_2<::FF1237522147A967*, ::MiHoYo::SDK::Win::PayPlatInfoModel*>**)Il2CppClass::FromTypeDefinitionIndex(F7B467A7AF91AF01_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F7B467A7AF91AF01_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7B467A7AF91AF01_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void BA8DE2926D349CB6(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F7B467A7AF91AF01_F5628F8349D4A8A6_BA8DE2926D349CB6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::MiHoYo::SDK::Win::PayPlatInfoModel* E356E5F5000E2CBE(::FF1237522147A967* EFDF7E5E52A7C55A)
	{
		return ((::MiHoYo::SDK::Win::PayPlatInfoModel*(*)(::PVOID, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + F7B467A7AF91AF01_F5628F8349D4A8A6_E356E5F5000E2CBE_OFFSET))(this, EFDF7E5E52A7C55A);
	}
};
