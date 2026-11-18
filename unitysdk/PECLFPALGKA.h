#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class MKIPOLBJCIP;

#define PECLFPALGKA_BBCIMFHACLK_OFFSET UNITYSDK_OFFSET(0x16FA1100)
#define PECLFPALGKA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA10F0)

inline static constexpr unsigned int PECLFPALGKA_TypeDefinitionIndex = 40434;

class PECLFPALGKA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECLFPALGKA__CTOR_OFFSET))(this);
	}

	static ::System::Void BBCIMFHACLK(::CJIEIHEDMME* LADPIPOMBJM, ::MKIPOLBJCIP* KFEOOLIIOHF)
	{
		return ((::System::Void(*)(::CJIEIHEDMME*, ::MKIPOLBJCIP*))((::PBYTE)hIl2Cpp + PECLFPALGKA_BBCIMFHACLK_OFFSET))(LADPIPOMBJM, KFEOOLIIOHF);
	}
};
