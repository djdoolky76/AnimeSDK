#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System { template <typename T> class Func_1; }

#define BICEJNENNGP___C_GOAJNKNEPNM_OFFSET UNITYSDK_OFFSET(0x169F4330)
#define BICEJNENNGP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169F42E0)
#define BICEJNENNGP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169F4320)

inline static constexpr unsigned int BICEJNENNGP___c_TypeDefinitionIndex = 40653;

class BICEJNENNGP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BICEJNENNGP___c_TypeDefinitionIndex)->GetStaticField(0x40170);
	}
	static ::System::Func_1<::IBENDELLLAO*>** StaticGet___9__34_1()
	{
		return (::System::Func_1<::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(BICEJNENNGP___c_TypeDefinitionIndex)->GetStaticField(0x40178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BICEJNENNGP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICEJNENNGP___C__CTOR_OFFSET))(this);
	}

	::IBENDELLLAO* GOAJNKNEPNM()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICEJNENNGP___C_GOAJNKNEPNM_OFFSET))(this);
	}
};
