#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIOMFDOEHLH.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define GHEFCABMAGO___C_AAEGIEHBHBA_OFFSET UNITYSDK_OFFSET(0x15CE41F0)
#define GHEFCABMAGO___C_GIGGFDEJHKH_OFFSET UNITYSDK_OFFSET(0x15CE4110)
#define GHEFCABMAGO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CE40C0)
#define GHEFCABMAGO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE4100)

inline static constexpr unsigned int GHEFCABMAGO___c_TypeDefinitionIndex = 63999;

class GHEFCABMAGO___c : public ::System::Object
{
public:
	static ::System::Func_1<::OIOMFDOEHLH>** StaticGet___9__24_9()
	{
		return (::System::Func_1<::OIOMFDOEHLH>**)Il2CppClass::FromTypeDefinitionIndex(GHEFCABMAGO___c_TypeDefinitionIndex)->GetStaticField(0x4B980);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GHEFCABMAGO___c_TypeDefinitionIndex)->GetStaticField(0x4B988);
	}
	static ::System::Func_1<::OIOMFDOEHLH>** StaticGet___9__24_13()
	{
		return (::System::Func_1<::OIOMFDOEHLH>**)Il2CppClass::FromTypeDefinitionIndex(GHEFCABMAGO___c_TypeDefinitionIndex)->GetStaticField(0x4B990);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHEFCABMAGO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFCABMAGO___C__CTOR_OFFSET))(this);
	}

	::OIOMFDOEHLH GIGGFDEJHKH()
	{
		return ((::OIOMFDOEHLH(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFCABMAGO___C_GIGGFDEJHKH_OFFSET))(this);
	}

	::OIOMFDOEHLH AAEGIEHBHBA()
	{
		return ((::OIOMFDOEHLH(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFCABMAGO___C_AAEGIEHBHBA_OFFSET))(this);
	}
};
