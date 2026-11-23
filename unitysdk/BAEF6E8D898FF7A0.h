#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BAEF6E8D898FF7A0_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1F7C000)
#define BAEF6E8D898FF7A0_F011D624E8AE8E98_OFFSET UNITYSDK_OFFSET(0x1F7C060)
#define BAEF6E8D898FF7A0_F0715F86377A7DD9_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define BAEF6E8D898FF7A0_F84AD4FF860E18BA_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define BAEF6E8D898FF7A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BAEF6E8D898FF7A0_TypeDefinitionIndex = 7891;

class BAEF6E8D898FF7A0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEF6E8D898FF7A0__CTOR_OFFSET))(this);
	}

	static ::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAEF6E8D898FF7A0_A1E97155B145443C_OFFSET))();
	}

	::System::Void F0715F86377A7DD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEF6E8D898FF7A0_F0715F86377A7DD9_OFFSET))(this);
	}

	static ::System::Int32 F011D624E8AE8E98(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BAEF6E8D898FF7A0_F011D624E8AE8E98_OFFSET))(E83E519C5C42896F);
	}

	::System::Void F84AD4FF860E18BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEF6E8D898FF7A0_F84AD4FF860E18BA_OFFSET))(this);
	}
};
