#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class HHMKCBFMIGN;

#define AKGKKCGGEAH___C_PGFGHDMJGAK_OFFSET UNITYSDK_OFFSET(0x143B2810)
#define AKGKKCGGEAH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143B27C0)
#define AKGKKCGGEAH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143B2800)

inline static constexpr unsigned int AKGKKCGGEAH___c_TypeDefinitionIndex = 64524;

class AKGKKCGGEAH___c : public ::System::Object
{
public:
	static ::HHMKCBFMIGN** StaticGet___9__12_15()
	{
		return (::HHMKCBFMIGN**)Il2CppClass::FromTypeDefinitionIndex(AKGKKCGGEAH___c_TypeDefinitionIndex)->GetStaticField(0x42D10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AKGKKCGGEAH___c_TypeDefinitionIndex)->GetStaticField(0x42D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGKKCGGEAH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKKCGGEAH___C__CTOR_OFFSET))(this);
	}

	::System::Void PGFGHDMJGAK(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + AKGKKCGGEAH___C_PGFGHDMJGAK_OFFSET))(this, NFFNEFLKPDG);
	}
};
