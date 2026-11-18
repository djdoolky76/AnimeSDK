#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class CAFBIOHKMHB;
class MBKILECHIMB;

#define FCBPCHENOEB_HHGPBIELPFN_OIIDDIBIOPO_OFFSET UNITYSDK_OFFSET(0x169C4230)
#define FCBPCHENOEB_HHGPBIELPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x169C4220)

inline static constexpr unsigned int FCBPCHENOEB_HHGPBIELPFN_TypeDefinitionIndex = 90014;

class FCBPCHENOEB_HHGPBIELPFN : public ::System::Object
{
public:
	::CAFBIOHKMHB* GDOMFPNKECJ; // 0x10
	::MBKILECHIMB* DOAHNMLLFNA; // 0x18
	::HOCDHMEPPEG MKGINGALGCN; // 0x20
	::System::Int32 DEFAKCIAKLG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBPCHENOEB_HHGPBIELPFN__CTOR_OFFSET))(this);
	}

	::System::Void OIIDDIBIOPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBPCHENOEB_HHGPBIELPFN_OIIDDIBIOPO_OFFSET))(this);
	}
};
