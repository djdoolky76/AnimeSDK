#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/B43CA80473D01A28.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

#define A29A0F59149A94C7_E36377DEAFD21D21_OFFSET UNITYSDK_OFFSET(0x3D44970)
#define A29A0F59149A94C7_E37D0559E828E236_OFFSET UNITYSDK_OFFSET(0x3D447E0)
#define A29A0F59149A94C7_F66D49BD6902CCCB_OFFSET UNITYSDK_OFFSET(0x3D44950)
#define A29A0F59149A94C7_FC766C60C933F43E_OFFSET UNITYSDK_OFFSET(0x3D447B0)
#define A29A0F59149A94C7__CTOR_OFFSET UNITYSDK_OFFSET(0x3D20CA0)

inline static constexpr unsigned int A29A0F59149A94C7_TypeDefinitionIndex = 10937;

struct alignas(8) A29A0F59149A94C7
{
	::PVOID E937D4885DAA1AE8; // 0x10

	::System::Int32 FC766C60C933F43E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A29A0F59149A94C7_FC766C60C933F43E_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* E37D0559E828E236()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A29A0F59149A94C7_E37D0559E828E236_OFFSET))(this);
	}

	::System::Void _ctor(::System::IntPtr B03018C24D85EDA4)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + A29A0F59149A94C7__CTOR_OFFSET))(this, B03018C24D85EDA4);
	}

	::System::Reflection::B43CA80473D01A28 F66D49BD6902CCCB()
	{
		return ((::System::Reflection::B43CA80473D01A28(*)(::PVOID))((::PBYTE)hIl2Cpp + A29A0F59149A94C7_F66D49BD6902CCCB_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* E36377DEAFD21D21()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A29A0F59149A94C7_E36377DEAFD21D21_OFFSET))(this);
	}
};
