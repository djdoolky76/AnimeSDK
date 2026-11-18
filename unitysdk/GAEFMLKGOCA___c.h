#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GAEFMLKGOCA;

#define GAEFMLKGOCA___C_LHKEFJHELKG_OFFSET UNITYSDK_OFFSET(0x1FAA6830)
#define GAEFMLKGOCA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA67E0)
#define GAEFMLKGOCA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA6820)

inline static constexpr unsigned int GAEFMLKGOCA___c_TypeDefinitionIndex = 18079;

class GAEFMLKGOCA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GAEFMLKGOCA___c_TypeDefinitionIndex)->GetStaticField(0x8630);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAEFMLKGOCA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFMLKGOCA___C__CTOR_OFFSET))(this);
	}

	::GAEFMLKGOCA* LHKEFJHELKG()
	{
		return ((::GAEFMLKGOCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFMLKGOCA___C_LHKEFJHELKG_OFFSET))(this);
	}
};
