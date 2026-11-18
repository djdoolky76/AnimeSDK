#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KMBMBCCCAKN___C_MPLKDDANAFF_OFFSET UNITYSDK_OFFSET(0x13C85A20)
#define KMBMBCCCAKN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C859D0)
#define KMBMBCCCAKN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85A10)

inline static constexpr unsigned int KMBMBCCCAKN___c_TypeDefinitionIndex = 64283;

class KMBMBCCCAKN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KMBMBCCCAKN___c_TypeDefinitionIndex)->GetStaticField(0x382A0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KMBMBCCCAKN___c_TypeDefinitionIndex)->GetStaticField(0x382A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMBMBCCCAKN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBMBCCCAKN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MPLKDDANAFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBMBCCCAKN___C_MPLKDDANAFF_OFFSET))(this);
	}
};
