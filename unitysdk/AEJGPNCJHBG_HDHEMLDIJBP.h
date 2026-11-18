#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOJOEGNIHBP;
class PNIHGNDLMIN;

#define AEJGPNCJHBG_HDHEMLDIJBP_OJOGKKLBELF_OFFSET UNITYSDK_OFFSET(0x154E8BB0)
#define AEJGPNCJHBG_HDHEMLDIJBP__CTOR_OFFSET UNITYSDK_OFFSET(0x154E8BA0)

inline static constexpr unsigned int AEJGPNCJHBG_HDHEMLDIJBP_TypeDefinitionIndex = 75486;

class AEJGPNCJHBG_HDHEMLDIJBP : public ::System::Object
{
public:
	::DOJOEGNIHBP* FNEEHIDCJOG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_HDHEMLDIJBP__CTOR_OFFSET))(this);
	}

	::System::Boolean OJOGKKLBELF(::PNIHGNDLMIN* OOHPGLMIHIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_HDHEMLDIJBP_OJOGKKLBELF_OFFSET))(this, OOHPGLMIHIC);
	}
};
