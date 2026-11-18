#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELBLLFHAKCB.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define KOFMFBLEMKK___C_JJOFIDBNBFA_OFFSET UNITYSDK_OFFSET(0x151728F0)
#define KOFMFBLEMKK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151728A0)
#define KOFMFBLEMKK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151728E0)

inline static constexpr unsigned int KOFMFBLEMKK___c_TypeDefinitionIndex = 44735;

class KOFMFBLEMKK___c : public ::System::Object
{
public:
	static ::System::Func_2<::ELBLLFHAKCB, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::ELBLLFHAKCB, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KOFMFBLEMKK___c_TypeDefinitionIndex)->GetStaticField(0x4E6D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KOFMFBLEMKK___c_TypeDefinitionIndex)->GetStaticField(0x4E6D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOFMFBLEMKK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMFBLEMKK___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JJOFIDBNBFA(::ELBLLFHAKCB IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::ELBLLFHAKCB))((::PBYTE)hIl2Cpp + KOFMFBLEMKK___C_JJOFIDBNBFA_OFFSET))(this, IMLLDOHDCNC);
	}
};
