#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0F8473A52AFAD40.h"
#include "unitysdk/System/Object.h"

#define A2BC1D4DE3C05F8B_B7A13954A213E497_OFFSET UNITYSDK_OFFSET(0x3B83DE0)
#define A2BC1D4DE3C05F8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B83E40)
#define A2BC1D4DE3C05F8B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2BC1D4DE3C05F8B_TypeDefinitionIndex = 11072;

class A2BC1D4DE3C05F8B : public ::System::Object
{
public:
	static ::E0F8473A52AFAD40* StaticGet_AE2C4DCB2748857B()
	{
		return (::E0F8473A52AFAD40*)Il2CppClass::FromTypeDefinitionIndex(A2BC1D4DE3C05F8B_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2BC1D4DE3C05F8B__CTOR_OFFSET))(this);
	}

	::E0F8473A52AFAD40 B7A13954A213E497(::System::Boolean A5C23103284A7D2B)
	{
		return ((::E0F8473A52AFAD40(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A2BC1D4DE3C05F8B_B7A13954A213E497_OFFSET))(this, A5C23103284A7D2B);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A2BC1D4DE3C05F8B__CCTOR_OFFSET))();
	}
};
