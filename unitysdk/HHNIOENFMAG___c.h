#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HHNIOENFMAG_LMKPOPLOOBG.h"

#define HHNIOENFMAG___C_NKPMJNKNBFB_OFFSET UNITYSDK_OFFSET(0x15B4AEF0)
#define HHNIOENFMAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B4AEA0)
#define HHNIOENFMAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4AEE0)

inline static constexpr unsigned int HHNIOENFMAG___c_TypeDefinitionIndex = 67830;

class HHNIOENFMAG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HHNIOENFMAG___c_TypeDefinitionIndex)->GetStaticField(0x3B0D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHNIOENFMAG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNIOENFMAG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 NKPMJNKNBFB(::HHNIOENFMAG_LMKPOPLOOBG EJCBEJMGFAJ, ::HHNIOENFMAG_LMKPOPLOOBG EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::HHNIOENFMAG_LMKPOPLOOBG, ::HHNIOENFMAG_LMKPOPLOOBG))((::PBYTE)hIl2Cpp + HHNIOENFMAG___C_NKPMJNKNBFB_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
