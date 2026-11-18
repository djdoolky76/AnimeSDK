#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EOCOEEKJOFL;
class MEDDMLNPILB;
class NFMGJEFHEHP;

#define KFFNPHLIKAH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E58C050)
#define KFFNPHLIKAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E58C040)

inline static constexpr unsigned int KFFNPHLIKAH_TypeDefinitionIndex = 94626;

class KFFNPHLIKAH : public ::System::Object
{
public:
	::EOCOEEKJOFL* AILDLFIDDKF; // 0x10
	::NFMGJEFHEHP* AJHMJLDLKLC; // 0x18

	::System::Void _ctor(::NFMGJEFHEHP* AJHMJLDLKLC, ::EOCOEEKJOFL* AILDLFIDDKF)
	{
		return ((::System::Void(*)(::PVOID, ::NFMGJEFHEHP*, ::EOCOEEKJOFL*))((::PBYTE)hIl2Cpp + KFFNPHLIKAH__CTOR_OFFSET))(this, AJHMJLDLKLC, AILDLFIDDKF);
	}

	::MEDDMLNPILB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::UInt32 JGDOIBLCMCL)
	{
		return ((::MEDDMLNPILB*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KFFNPHLIKAH_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, JGDOIBLCMCL);
	}
};
