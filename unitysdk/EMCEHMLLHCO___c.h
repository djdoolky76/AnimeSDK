#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define EMCEHMLLHCO___C_DKHCHMAFAIP_OFFSET UNITYSDK_OFFSET(0x16160660)
#define EMCEHMLLHCO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16160610)
#define EMCEHMLLHCO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16160650)

inline static constexpr unsigned int EMCEHMLLHCO___c_TypeDefinitionIndex = 83868;

class EMCEHMLLHCO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EMCEHMLLHCO___c_TypeDefinitionIndex)->GetStaticField(0x3ABD0);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__2_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(EMCEHMLLHCO___c_TypeDefinitionIndex)->GetStaticField(0x3ABD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMCEHMLLHCO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCEHMLLHCO___C__CTOR_OFFSET))(this);
	}

	::System::Void DKHCHMAFAIP(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EMCEHMLLHCO___C_DKHCHMAFAIP_OFFSET))(this, LJBPECKCCEA);
	}
};
