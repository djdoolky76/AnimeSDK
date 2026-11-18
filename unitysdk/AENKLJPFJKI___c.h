#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AENKLJPFJKI;

#define AENKLJPFJKI___C_EDBKGJKBLIM_OFFSET UNITYSDK_OFFSET(0x1FF6B6E0)
#define AENKLJPFJKI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B690)
#define AENKLJPFJKI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B6D0)

inline static constexpr unsigned int AENKLJPFJKI___c_TypeDefinitionIndex = 18155;

class AENKLJPFJKI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AENKLJPFJKI___c_TypeDefinitionIndex)->GetStaticField(0x83D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AENKLJPFJKI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENKLJPFJKI___C__CTOR_OFFSET))(this);
	}

	::AENKLJPFJKI* EDBKGJKBLIM()
	{
		return ((::AENKLJPFJKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AENKLJPFJKI___C_EDBKGJKBLIM_OFFSET))(this);
	}
};
