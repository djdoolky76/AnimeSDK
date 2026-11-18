#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
namespace System { class String; }

#define CCGDAJKMPCD_NHDMNBJGIMD_DFEPENNJKME_OFFSET UNITYSDK_OFFSET(0x14784340)
#define CCGDAJKMPCD_NHDMNBJGIMD__CTOR_OFFSET UNITYSDK_OFFSET(0x14784330)

inline static constexpr unsigned int CCGDAJKMPCD_NHDMNBJGIMD_TypeDefinitionIndex = 83744;

class CCGDAJKMPCD_NHDMNBJGIMD : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGDAJKMPCD_NHDMNBJGIMD__CTOR_OFFSET))(this);
	}

	::System::Void DFEPENNJKME(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + CCGDAJKMPCD_NHDMNBJGIMD_DFEPENNJKME_OFFSET))(this, GLAOEHCGCFO);
	}
};
