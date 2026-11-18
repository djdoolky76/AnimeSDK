#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define DGNGDPKJONA___C_KLOHPOHCOAK_OFFSET UNITYSDK_OFFSET(0x149A6170)
#define DGNGDPKJONA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149A6120)
#define DGNGDPKJONA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149A6160)

inline static constexpr unsigned int DGNGDPKJONA___c_TypeDefinitionIndex = 73809;

class DGNGDPKJONA___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__2_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(DGNGDPKJONA___c_TypeDefinitionIndex)->GetStaticField(0x31440);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DGNGDPKJONA___c_TypeDefinitionIndex)->GetStaticField(0x31448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGNGDPKJONA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGDPKJONA___C__CTOR_OFFSET))(this);
	}

	::System::Void KLOHPOHCOAK(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DGNGDPKJONA___C_KLOHPOHCOAK_OFFSET))(this, DJCNCELJPOM);
	}
};
