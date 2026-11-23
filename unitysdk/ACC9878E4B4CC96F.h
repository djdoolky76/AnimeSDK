#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACC9878E4B4CC96F_B86637F7714C2607_OFFSET UNITYSDK_OFFSET(0x3C17390)
#define ACC9878E4B4CC96F_EFCB8391D468982E_OFFSET UNITYSDK_OFFSET(0x3C17300)
#define ACC9878E4B4CC96F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ACC9878E4B4CC96F_TypeDefinitionIndex = 11468;

class ACC9878E4B4CC96F : public ::System::Object
{
public:
	static ::ACC9878E4B4CC96F** StaticGet_FB476095FE79B3AD()
	{
		return (::ACC9878E4B4CC96F**)Il2CppClass::FromTypeDefinitionIndex(ACC9878E4B4CC96F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::ACC9878E4B4CC96F** StaticGet_FAFB300193AF9F73()
	{
		return (::ACC9878E4B4CC96F**)Il2CppClass::FromTypeDefinitionIndex(ACC9878E4B4CC96F_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::ACC9878E4B4CC96F* EFCB8391D468982E()
	{
		return ((::ACC9878E4B4CC96F*(*)())((::PBYTE)hIl2Cpp + ACC9878E4B4CC96F_EFCB8391D468982E_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACC9878E4B4CC96F__CTOR_OFFSET))(this);
	}

	static ::ACC9878E4B4CC96F* B86637F7714C2607()
	{
		return ((::ACC9878E4B4CC96F*(*)())((::PBYTE)hIl2Cpp + ACC9878E4B4CC96F_B86637F7714C2607_OFFSET))();
	}
};
