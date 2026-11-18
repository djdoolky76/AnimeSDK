#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKNBLKMBGFK;

#define PKNBLKMBGFK___C_DKCHALEAHFF_OFFSET UNITYSDK_OFFSET(0x1FB395A0)
#define PKNBLKMBGFK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB39550)
#define PKNBLKMBGFK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB39590)

inline static constexpr unsigned int PKNBLKMBGFK___c_TypeDefinitionIndex = 18151;

class PKNBLKMBGFK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PKNBLKMBGFK___c_TypeDefinitionIndex)->GetStaticField(0x8020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKNBLKMBGFK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNBLKMBGFK___C__CTOR_OFFSET))(this);
	}

	::PKNBLKMBGFK* DKCHALEAHFF()
	{
		return ((::PKNBLKMBGFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNBLKMBGFK___C_DKCHALEAHFF_OFFSET))(this);
	}
};
