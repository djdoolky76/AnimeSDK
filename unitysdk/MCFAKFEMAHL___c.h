#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MCFAKFEMAHL___C_GIEHPNACCMD_OFFSET UNITYSDK_OFFSET(0x13D159E0)
#define MCFAKFEMAHL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D15990)
#define MCFAKFEMAHL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D159D0)

inline static constexpr unsigned int MCFAKFEMAHL___c_TypeDefinitionIndex = 92322;

class MCFAKFEMAHL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MCFAKFEMAHL___c_TypeDefinitionIndex)->GetStaticField(0x4A2C0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MCFAKFEMAHL___c_TypeDefinitionIndex)->GetStaticField(0x4A2C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCFAKFEMAHL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFAKFEMAHL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GIEHPNACCMD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFAKFEMAHL___C_GIEHPNACCMD_OFFSET))(this);
	}
};
