#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define CPMEKIGICIL___C_JOKGGMDPMFB_OFFSET UNITYSDK_OFFSET(0x1497CEC0)
#define CPMEKIGICIL___C_KOIOABFFLLH_OFFSET UNITYSDK_OFFSET(0x1497CED0)
#define CPMEKIGICIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1497CE70)
#define CPMEKIGICIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1497CEB0)

inline static constexpr unsigned int CPMEKIGICIL___c_TypeDefinitionIndex = 83475;

class CPMEKIGICIL___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__5_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(CPMEKIGICIL___c_TypeDefinitionIndex)->GetStaticField(0x312E0);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__2_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(CPMEKIGICIL___c_TypeDefinitionIndex)->GetStaticField(0x312E8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CPMEKIGICIL___c_TypeDefinitionIndex)->GetStaticField(0x312F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMEKIGICIL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL___C__CTOR_OFFSET))(this);
	}

	::System::Void JOKGGMDPMFB(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPMEKIGICIL___C_JOKGGMDPMFB_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void KOIOABFFLLH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPMEKIGICIL___C_KOIOABFFLLH_OFFSET))(this, PIIPCLCCOIG);
	}
};
