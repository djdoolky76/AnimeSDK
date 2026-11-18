#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJGBDEGLCBJ;

#define DJGBDEGLCBJ___C_KAMODDMEPFH_OFFSET UNITYSDK_OFFSET(0x1FAC10F0)
#define DJGBDEGLCBJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC10A0)
#define DJGBDEGLCBJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC10E0)

inline static constexpr unsigned int DJGBDEGLCBJ___c_TypeDefinitionIndex = 18258;

class DJGBDEGLCBJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DJGBDEGLCBJ___c_TypeDefinitionIndex)->GetStaticField(0x84E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJGBDEGLCBJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGBDEGLCBJ___C__CTOR_OFFSET))(this);
	}

	::DJGBDEGLCBJ* KAMODDMEPFH()
	{
		return ((::DJGBDEGLCBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGBDEGLCBJ___C_KAMODDMEPFH_OFFSET))(this);
	}
};
