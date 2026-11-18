#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EODCINHDNOA;

#define POFIMLGOIGD_KOMCNFEFIDG_KIKLPIKJKNB_OFFSET UNITYSDK_OFFSET(0x1C6B7630)
#define POFIMLGOIGD_KOMCNFEFIDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AD120)

inline static constexpr unsigned int POFIMLGOIGD_KOMCNFEFIDG_TypeDefinitionIndex = 57465;

class POFIMLGOIGD_KOMCNFEFIDG : public ::System::Object
{
public:
	::System::UInt32 PNDNPCADCCH; // 0x10
	::System::UInt16 AJJCAJABAAN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KOMCNFEFIDG__CTOR_OFFSET))(this);
	}

	::System::Void KIKLPIKJKNB(::System::Boolean EBFCACIEKBC, ::EODCINHDNOA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::EODCINHDNOA*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KOMCNFEFIDG_KIKLPIKJKNB_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};
