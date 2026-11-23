#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define E0FCE41817D8561C_B86637F7714C2607_OFFSET UNITYSDK_OFFSET(0x3B47E50)
#define E0FCE41817D8561C_EFCB8391D468982E_OFFSET UNITYSDK_OFFSET(0x3B47DB0)
#define E0FCE41817D8561C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E0FCE41817D8561C_TypeDefinitionIndex = 10251;

class E0FCE41817D8561C : public ::System::Object
{
public:
	static ::E0FCE41817D8561C** StaticGet_FB476095FE79B3AD()
	{
		return (::E0FCE41817D8561C**)Il2CppClass::FromTypeDefinitionIndex(E0FCE41817D8561C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::E0FCE41817D8561C** StaticGet_FAFB300193AF9F73()
	{
		return (::E0FCE41817D8561C**)Il2CppClass::FromTypeDefinitionIndex(E0FCE41817D8561C_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0FCE41817D8561C__CTOR_OFFSET))(this);
	}

	static ::E0FCE41817D8561C* EFCB8391D468982E()
	{
		return ((::E0FCE41817D8561C*(*)())((::PBYTE)hIl2Cpp + E0FCE41817D8561C_EFCB8391D468982E_OFFSET))();
	}

	static ::E0FCE41817D8561C* B86637F7714C2607()
	{
		return ((::E0FCE41817D8561C*(*)())((::PBYTE)hIl2Cpp + E0FCE41817D8561C_B86637F7714C2607_OFFSET))();
	}
};
