#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AA1C3B6AC8AA4294_F93D6FB6265D66FD_FA49F3B0F955F003_OFFSET UNITYSDK_OFFSET(0x23CB900)
#define AA1C3B6AC8AA4294_F93D6FB6265D66FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x23CB9F0)
#define AA1C3B6AC8AA4294_F93D6FB6265D66FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA1C3B6AC8AA4294_F93D6FB6265D66FD_TypeDefinitionIndex = 3797;

class AA1C3B6AC8AA4294_F93D6FB6265D66FD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_EC55C50C9A9401F0()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(AA1C3B6AC8AA4294_F93D6FB6265D66FD_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AA1C3B6AC8AA4294_F93D6FB6265D66FD__CCTOR_OFFSET))();
	}

	static ::System::Char FA49F3B0F955F003(::System::Char A97F5B807CC19082)
	{
		return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + AA1C3B6AC8AA4294_F93D6FB6265D66FD_FA49F3B0F955F003_OFFSET))(A97F5B807CC19082);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA1C3B6AC8AA4294_F93D6FB6265D66FD__CTOR_OFFSET))(this);
	}
};
