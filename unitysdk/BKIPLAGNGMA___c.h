#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define BKIPLAGNGMA___C_IGIBOECHDDF_OFFSET UNITYSDK_OFFSET(0x113EEB70)
#define BKIPLAGNGMA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x113EEB20)
#define BKIPLAGNGMA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x113EEB60)

inline static constexpr unsigned int BKIPLAGNGMA___c_TypeDefinitionIndex = 61128;

class BKIPLAGNGMA___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__3_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(BKIPLAGNGMA___c_TypeDefinitionIndex)->GetStaticField(0x3A450);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKIPLAGNGMA___c_TypeDefinitionIndex)->GetStaticField(0x3A458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKIPLAGNGMA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIPLAGNGMA___C__CTOR_OFFSET))(this);
	}

	::System::Void IGIBOECHDDF(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BKIPLAGNGMA___C_IGIBOECHDDF_OFFSET))(this, LJBPECKCCEA);
	}
};
