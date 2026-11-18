#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define KMDPDFLDFBC___C_KFMMDMGMBLH_OFFSET UNITYSDK_OFFSET(0x13C85A80)
#define KMDPDFLDFBC___C_OCLEPLNFJCP_OFFSET UNITYSDK_OFFSET(0x13C85BB0)
#define KMDPDFLDFBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C85A30)
#define KMDPDFLDFBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85A70)

inline static constexpr unsigned int KMDPDFLDFBC___c_TypeDefinitionIndex = 85057;

class KMDPDFLDFBC___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__2_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(KMDPDFLDFBC___c_TypeDefinitionIndex)->GetStaticField(0x41450);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KMDPDFLDFBC___c_TypeDefinitionIndex)->GetStaticField(0x41458);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__5_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(KMDPDFLDFBC___c_TypeDefinitionIndex)->GetStaticField(0x41460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMDPDFLDFBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDPDFLDFBC___C__CTOR_OFFSET))(this);
	}

	::System::Void KFMMDMGMBLH(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KMDPDFLDFBC___C_KFMMDMGMBLH_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void OCLEPLNFJCP(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KMDPDFLDFBC___C_OCLEPLNFJCP_OFFSET))(this, DJCNCELJPOM);
	}
};
