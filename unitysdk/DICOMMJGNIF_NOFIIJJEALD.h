#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DICOMMJGNIF_NOFIIJJEALD_GJFHOJCGIPH_OFFSET UNITYSDK_OFFSET(0x149A75C0)
#define DICOMMJGNIF_NOFIIJJEALD__CCTOR_OFFSET UNITYSDK_OFFSET(0x149A75B0)
#define DICOMMJGNIF_NOFIIJJEALD__CTOR_OFFSET UNITYSDK_OFFSET(0x149A75A0)

inline static constexpr unsigned int DICOMMJGNIF_NOFIIJJEALD_TypeDefinitionIndex = 90199;

class DICOMMJGNIF_NOFIIJJEALD : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_KIGKCILHOFJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DICOMMJGNIF_NOFIIJJEALD_TypeDefinitionIndex)->GetStaticField(0xA660);
	}
	::System::Int32 IIFMJFJOOCK; // 0x10
	::System::Single ALLNOLHHJMD; // 0x14
	::System::Int32 JFGJHGBNBLE; // 0x18
	::System::Single DEJHGGMFKJB; // 0x1C
	::System::Single NJBFMNCDIEA; // 0x20
	::System::Int32 PCONNFCGEFN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICOMMJGNIF_NOFIIJJEALD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DICOMMJGNIF_NOFIIJJEALD__CCTOR_OFFSET))();
	}

	static ::System::Int32 GJFHOJCGIPH()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DICOMMJGNIF_NOFIIJJEALD_GJFHOJCGIPH_OFFSET))();
	}
};
