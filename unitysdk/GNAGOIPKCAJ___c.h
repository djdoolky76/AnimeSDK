#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNAGOIPKCAJ;

#define GNAGOIPKCAJ___C_LEKBCLFGAHO_OFFSET UNITYSDK_OFFSET(0x1FF6DF60)
#define GNAGOIPKCAJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6DF10)
#define GNAGOIPKCAJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6DF50)

inline static constexpr unsigned int GNAGOIPKCAJ___c_TypeDefinitionIndex = 18061;

class GNAGOIPKCAJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GNAGOIPKCAJ___c_TypeDefinitionIndex)->GetStaticField(0x8100);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNAGOIPKCAJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAGOIPKCAJ___C__CTOR_OFFSET))(this);
	}

	::GNAGOIPKCAJ* LEKBCLFGAHO()
	{
		return ((::GNAGOIPKCAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAGOIPKCAJ___C_LEKBCLFGAHO_OFFSET))(this);
	}
};
