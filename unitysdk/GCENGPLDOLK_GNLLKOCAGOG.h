#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCENGPLDOLK;
class IKKDCFLLIOF;
class NGJGLFFBIFB;

#define GCENGPLDOLK_GNLLKOCAGOG_MHFCADICIHE_OFFSET UNITYSDK_OFFSET(0x13248360)
#define GCENGPLDOLK_GNLLKOCAGOG__CTOR_OFFSET UNITYSDK_OFFSET(0x13248350)

inline static constexpr unsigned int GCENGPLDOLK_GNLLKOCAGOG_TypeDefinitionIndex = 58171;

class GCENGPLDOLK_GNLLKOCAGOG : public ::System::Object
{
public:
	::GCENGPLDOLK* KLHPEBKNIFB; // 0x10
	::IKKDCFLLIOF* OEDEIANBGHL; // 0x18
	::NGJGLFFBIFB* KDEHMPGOCEP; // 0x20
	::System::Int32 ABHBKFJKINO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCENGPLDOLK_GNLLKOCAGOG__CTOR_OFFSET))(this);
	}

	::System::Void MHFCADICIHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCENGPLDOLK_GNLLKOCAGOG_MHFCADICIHE_OFFSET))(this);
	}
};
