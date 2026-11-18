#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
namespace System { class String; }

#define JAEDIBCNLJH_JBEACPEDAGH_CEPNKMLJBDC_OFFSET UNITYSDK_OFFSET(0xF887E10)
#define JAEDIBCNLJH_JBEACPEDAGH__CTOR_OFFSET UNITYSDK_OFFSET(0xF887E00)

inline static constexpr unsigned int JAEDIBCNLJH_JBEACPEDAGH_TypeDefinitionIndex = 89689;

class JAEDIBCNLJH_JBEACPEDAGH : public ::System::Object
{
public:
	::FOLOGHLENFB* DJOIBDNKGII; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH_JBEACPEDAGH__CTOR_OFFSET))(this);
	}

	::System::String* CEPNKMLJBDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEDIBCNLJH_JBEACPEDAGH_CEPNKMLJBDC_OFFSET))(this);
	}
};
