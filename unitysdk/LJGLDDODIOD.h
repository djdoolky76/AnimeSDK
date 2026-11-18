#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFGMBAOFEKD.h"
#include "unitysdk/System/ValueType.h"

class FHKMGCCINCF;

#define LJGLDDODIOD_IDOPCGGBENC_OFFSET UNITYSDK_OFFSET(0x749920)
#define LJGLDDODIOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DB5690)
#define LJGLDDODIOD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x749910)
#define LJGLDDODIOD__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int LJGLDDODIOD_TypeDefinitionIndex = 69971;

struct alignas(4) LJGLDDODIOD
{
	static ::LJGLDDODIOD* StaticGet_CGICCOBHACH()
	{
		return (::LJGLDDODIOD*)Il2CppClass::FromTypeDefinitionIndex(LJGLDDODIOD_TypeDefinitionIndex)->GetStaticField(0xEE10);
	}
	static ::LJGLDDODIOD* StaticGet_BMEHNDKCFNA()
	{
		return (::LJGLDDODIOD*)Il2CppClass::FromTypeDefinitionIndex(LJGLDDODIOD_TypeDefinitionIndex)->GetStaticField(0xEE18);
	}
	static ::LJGLDDODIOD* StaticGet_MLEJHMCIFCE()
	{
		return (::LJGLDDODIOD*)Il2CppClass::FromTypeDefinitionIndex(LJGLDDODIOD_TypeDefinitionIndex)->GetStaticField(0xEE20);
	}
	::System::Int32 KOMCHMAIGIL; // 0x10
	::JFGMBAOFEKD FNCNAPAJKBE; // 0x14

	::System::Void _ctor(::System::Int32 COMDNFILAIC, ::JFGMBAOFEKD CHFENFPFHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::JFGMBAOFEKD))((::PBYTE)hIl2Cpp + LJGLDDODIOD__CTOR_OFFSET))(this, COMDNFILAIC, CHFENFPFHLB);
	}

	::System::Void _ctor_1(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJGLDDODIOD__CTOR_1_OFFSET))(this, COMDNFILAIC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJGLDDODIOD__CCTOR_OFFSET))();
	}

	::FHKMGCCINCF* IDOPCGGBENC()
	{
		return ((::FHKMGCCINCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGLDDODIOD_IDOPCGGBENC_OFFSET))(this);
	}
};
