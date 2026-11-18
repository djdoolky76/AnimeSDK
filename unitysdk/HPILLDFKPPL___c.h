#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define HPILLDFKPPL___C_BALHPFFNLAG_OFFSET UNITYSDK_OFFSET(0xEA0EC10)
#define HPILLDFKPPL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA0EBC0)
#define HPILLDFKPPL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA0EC00)

inline static constexpr unsigned int HPILLDFKPPL___c_TypeDefinitionIndex = 86386;

class HPILLDFKPPL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HPILLDFKPPL___c_TypeDefinitionIndex)->GetStaticField(0x44390);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPILLDFKPPL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILLDFKPPL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BALHPFFNLAG(::System::Type* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HPILLDFKPPL___C_BALHPFFNLAG_OFFSET))(this, IMLLDOHDCNC);
	}
};
