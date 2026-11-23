#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A8069BCB7920317A_BE7F60CDFD913CDE_OFFSET UNITYSDK_OFFSET(0x3F0AF40)
#define A8069BCB7920317A_EB82022B4FE75DFB_OFFSET UNITYSDK_OFFSET(0x3F0AF90)
#define A8069BCB7920317A_F145965D6C04C365_OFFSET UNITYSDK_OFFSET(0x3F0AE40)
#define A8069BCB7920317A__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F0AEE0)
#define A8069BCB7920317A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8069BCB7920317A_TypeDefinitionIndex = 20913;

class A8069BCB7920317A : public ::System::Object
{
public:
	static ::System::String** StaticGet_A758D42DE3879155()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A8069BCB7920317A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_ED7172D75E576E84()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A8069BCB7920317A_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::String* BE7F60CDFD913CDE()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + A8069BCB7920317A_BE7F60CDFD913CDE_OFFSET))();
	}

	static ::System::Void EB82022B4FE75DFB(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + A8069BCB7920317A_EB82022B4FE75DFB_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A8069BCB7920317A__CCTOR_OFFSET))();
	}

	static ::System::Void F145965D6C04C365(::System::String* BC39742B384E6AC5)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + A8069BCB7920317A_F145965D6C04C365_OFFSET))(BC39742B384E6AC5);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8069BCB7920317A__CTOR_OFFSET))(this);
	}
};
