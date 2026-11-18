#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHNGOMIKGCD.h"
#include "unitysdk/KFMDJFHBBAD.h"

#define FEEKCJGAEAJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x140EC760)
#define FEEKCJGAEAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x140EC750)

inline static constexpr unsigned int FEEKCJGAEAJ_TypeDefinitionIndex = 77112;

class FEEKCJGAEAJ : public ::KFMDJFHBBAD
{
public:
	static ::Il2CppArray<::EHNGOMIKGCD>** StaticGet_GOJDEIGKMOL()
	{
		return (::Il2CppArray<::EHNGOMIKGCD>**)Il2CppClass::FromTypeDefinitionIndex(FEEKCJGAEAJ_TypeDefinitionIndex)->GetStaticField(0x507B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEKCJGAEAJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEEKCJGAEAJ__CCTOR_OFFSET))();
	}
};
