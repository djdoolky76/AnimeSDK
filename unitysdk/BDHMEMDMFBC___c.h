#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class HHMKCBFMIGN;

#define BDHMEMDMFBC___C_BMHGBNBLNAM_OFFSET UNITYSDK_OFFSET(0x186663E0)
#define BDHMEMDMFBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18666390)
#define BDHMEMDMFBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186663D0)

inline static constexpr unsigned int BDHMEMDMFBC___c_TypeDefinitionIndex = 73531;

class BDHMEMDMFBC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BDHMEMDMFBC___c_TypeDefinitionIndex)->GetStaticField(0x4B490);
	}
	static ::HHMKCBFMIGN** StaticGet___9__52_15()
	{
		return (::HHMKCBFMIGN**)Il2CppClass::FromTypeDefinitionIndex(BDHMEMDMFBC___c_TypeDefinitionIndex)->GetStaticField(0x4B498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDHMEMDMFBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHMEMDMFBC___C__CTOR_OFFSET))(this);
	}

	::System::Void BMHGBNBLNAM(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + BDHMEMDMFBC___C_BMHGBNBLNAM_OFFSET))(this, KOIBHLHLMFC);
	}
};
