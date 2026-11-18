#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPMAMCOGGMG;

#define PPMAMCOGGMG___C_LNGMGPKMAOH_OFFSET UNITYSDK_OFFSET(0x1F8C6470)
#define PPMAMCOGGMG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C6420)
#define PPMAMCOGGMG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C6460)

inline static constexpr unsigned int PPMAMCOGGMG___c_TypeDefinitionIndex = 18242;

class PPMAMCOGGMG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PPMAMCOGGMG___c_TypeDefinitionIndex)->GetStaticField(0x83B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPMAMCOGGMG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMAMCOGGMG___C__CTOR_OFFSET))(this);
	}

	::PPMAMCOGGMG* LNGMGPKMAOH()
	{
		return ((::PPMAMCOGGMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMAMCOGGMG___C_LNGMGPKMAOH_OFFSET))(this);
	}
};
