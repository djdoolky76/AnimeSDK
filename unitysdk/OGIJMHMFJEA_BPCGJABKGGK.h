#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ICIJJJLDLBM;
class LOIHDEPANLG;

#define OGIJMHMFJEA_BPCGJABKGGK_NNHPFMMMJFB_OFFSET UNITYSDK_OFFSET(0x11B2AA50)
#define OGIJMHMFJEA_BPCGJABKGGK__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2AA40)

inline static constexpr unsigned int OGIJMHMFJEA_BPCGJABKGGK_TypeDefinitionIndex = 59717;

class OGIJMHMFJEA_BPCGJABKGGK : public ::System::Object
{
public:
	::LOIHDEPANLG* FHIMDDLFOGC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIJMHMFJEA_BPCGJABKGGK__CTOR_OFFSET))(this);
	}

	::System::Boolean NNHPFMMMJFB(::ICIJJJLDLBM* HBJOLKHGGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::ICIJJJLDLBM*))((::PBYTE)hIl2Cpp + OGIJMHMFJEA_BPCGJABKGGK_NNHPFMMMJFB_OFFSET))(this, HBJOLKHGGDD);
	}
};
