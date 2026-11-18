#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OJLAOJKCHLF_PFDDJFAKAAD_DBMMNHFICID_OFFSET UNITYSDK_OFFSET(0x1B7A1380)
#define OJLAOJKCHLF_PFDDJFAKAAD_FNKFOEKDAAJ_OFFSET UNITYSDK_OFFSET(0x1B7A12D0)
#define OJLAOJKCHLF_PFDDJFAKAAD_MBCDOJJFMMB_OFFSET UNITYSDK_OFFSET(0x1B7A1430)
#define OJLAOJKCHLF_PFDDJFAKAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A12C0)

inline static constexpr unsigned int OJLAOJKCHLF_PFDDJFAKAAD_TypeDefinitionIndex = 63857;

class OJLAOJKCHLF_PFDDJFAKAAD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_PFDDJFAKAAD__CTOR_OFFSET))(this);
	}

	static ::System::Int32 FNKFOEKDAAJ(::System::Int32 KDAMBCPIFGB)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_PFDDJFAKAAD_FNKFOEKDAAJ_OFFSET))(KDAMBCPIFGB);
	}

	static ::System::Boolean DBMMNHFICID(::System::Int32 HLPPGDOIPDF)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_PFDDJFAKAAD_DBMMNHFICID_OFFSET))(HLPPGDOIPDF);
	}

	static ::System::Int32 MBCDOJJFMMB(::System::Int32 KDAMBCPIFGB)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_PFDDJFAKAAD_MBCDOJJFMMB_OFFSET))(KDAMBCPIFGB);
	}
};
