#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DEIIJNHACAO___C_PJHEGCAJMIP_OFFSET UNITYSDK_OFFSET(0x183357E0)
#define DEIIJNHACAO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18335790)
#define DEIIJNHACAO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183357D0)

inline static constexpr unsigned int DEIIJNHACAO___c_TypeDefinitionIndex = 64879;

class DEIIJNHACAO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DEIIJNHACAO___c_TypeDefinitionIndex)->GetStaticField(0x31410);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__53_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DEIIJNHACAO___c_TypeDefinitionIndex)->GetStaticField(0x31418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEIIJNHACAO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIIJNHACAO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean PJHEGCAJMIP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIIJNHACAO___C_PJHEGCAJMIP_OFFSET))(this);
	}
};
