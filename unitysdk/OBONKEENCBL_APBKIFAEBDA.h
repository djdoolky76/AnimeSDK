#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OBONKEENCBL;
namespace System { class String; }

#define OBONKEENCBL_APBKIFAEBDA_LINEECGDLAP_OFFSET UNITYSDK_OFFSET(0xE13F360)
#define OBONKEENCBL_APBKIFAEBDA__CTOR_OFFSET UNITYSDK_OFFSET(0xE13F350)

inline static constexpr unsigned int OBONKEENCBL_APBKIFAEBDA_TypeDefinitionIndex = 53610;

class OBONKEENCBL_APBKIFAEBDA : public ::System::Object
{
public:
	::OBONKEENCBL* KLHPEBKNIFB; // 0x10
	::System::String* HIAIKHDFCLN; // 0x18
	::System::Boolean LPMBNPDADAO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBONKEENCBL_APBKIFAEBDA__CTOR_OFFSET))(this);
	}

	::System::Void LINEECGDLAP(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + OBONKEENCBL_APBKIFAEBDA_LINEECGDLAP_OFFSET))(this, GLAOEHCGCFO);
	}
};
