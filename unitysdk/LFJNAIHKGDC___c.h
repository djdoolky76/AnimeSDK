#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCAFMPBODBJ;
class JPBICLPKGIO;

#define LFJNAIHKGDC___C_GOPPILMBDFC_OFFSET UNITYSDK_OFFSET(0x184F0FB0)
#define LFJNAIHKGDC___C_IGGKPKEOAGG_OFFSET UNITYSDK_OFFSET(0x184F0FA0)
#define LFJNAIHKGDC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184F0F50)
#define LFJNAIHKGDC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184F0F90)

inline static constexpr unsigned int LFJNAIHKGDC___c_TypeDefinitionIndex = 38780;

class LFJNAIHKGDC___c : public ::System::Object
{
public:
	static ::GCAFMPBODBJ** StaticGet___9__88_1()
	{
		return (::GCAFMPBODBJ**)Il2CppClass::FromTypeDefinitionIndex(LFJNAIHKGDC___c_TypeDefinitionIndex)->GetStaticField(0x32AC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LFJNAIHKGDC___c_TypeDefinitionIndex)->GetStaticField(0x32AC8);
	}
	static ::JPBICLPKGIO** StaticGet___9__88_2()
	{
		return (::JPBICLPKGIO**)Il2CppClass::FromTypeDefinitionIndex(LFJNAIHKGDC___c_TypeDefinitionIndex)->GetStaticField(0x32AD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFJNAIHKGDC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJNAIHKGDC___C__CTOR_OFFSET))(this);
	}

	::System::Void IGGKPKEOAGG(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LFJNAIHKGDC___C_IGGKPKEOAGG_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::Void GOPPILMBDFC(::System::UInt32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFJNAIHKGDC___C_GOPPILMBDFC_OFFSET))(this, PIIPCLCCOIG);
	}
};
