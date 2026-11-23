#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E427A58A65B84FA2;
namespace System { class String; }

#define F7A83BC73F42C8A3_E3D17824AB1D819C_OFFSET UNITYSDK_OFFSET(0x3A5AA30)
#define F7A83BC73F42C8A3__CTOR_OFFSET UNITYSDK_OFFSET(0x3A5AA70)

inline static constexpr unsigned int F7A83BC73F42C8A3_TypeDefinitionIndex = 13019;

class F7A83BC73F42C8A3 : public ::System::Object
{
public:
	::System::String* E44AF6A3A2DC1EEA; // 0x10
	::System::String* F8A3E49E4F4FAD77; // 0x18

	::System::Void _ctor(::E427A58A65B84FA2* AD4834887E87082A)
	{
		return ((::System::Void(*)(::PVOID, ::E427A58A65B84FA2*))((::PBYTE)hIl2Cpp + F7A83BC73F42C8A3__CTOR_OFFSET))(this, AD4834887E87082A);
	}

	::System::Boolean E3D17824AB1D819C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F7A83BC73F42C8A3_E3D17824AB1D819C_OFFSET))(this);
	}
};
