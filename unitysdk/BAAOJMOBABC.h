#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGAEFOGEGAB;
class NGBMKLFCGBG;
class OBCNEMJNHKI;

#define BAAOJMOBABC_KLKLJLPOPEH_OFFSET UNITYSDK_OFFSET(0x12D13B60)
#define BAAOJMOBABC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12D13B00)
#define BAAOJMOBABC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D13AF0)

inline static constexpr unsigned int BAAOJMOBABC_TypeDefinitionIndex = 48578;

class BAAOJMOBABC : public ::System::Object
{
public:
	::OBCNEMJNHKI* FOOKIKCAAMO; // 0x10
	::NGBMKLFCGBG* LLFEJLJFDDO; // 0x18
	::AGAEFOGEGAB* CJHBBHJPLAA; // 0x20
	::System::Int32 EALCKPAHMME; // 0x28
	::System::Int32 JMHNLEAEIKC; // 0x2C
	::System::Boolean MPEHMFDBIMI; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 GGADKPHIGBP; // 0x34
	::System::Int32 MAHBJFAJONN; // 0x38
	::System::Int32 KNBEAFNAAGN; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAOJMOBABC__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAOJMOBABC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean KLKLJLPOPEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAOJMOBABC_KLKLJLPOPEH_OFFSET))(this);
	}
};
