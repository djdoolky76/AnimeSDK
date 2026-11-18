#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GFNGDFPMBLI_ONGJAMGPPAE_NMDBLBCCNBD_OFFSET UNITYSDK_OFFSET(0x179E7ED0)
#define GFNGDFPMBLI_ONGJAMGPPAE__CTOR_OFFSET UNITYSDK_OFFSET(0x179E7EC0)

inline static constexpr unsigned int GFNGDFPMBLI_ONGJAMGPPAE_TypeDefinitionIndex = 51510;

class GFNGDFPMBLI_ONGJAMGPPAE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MOGGEOEAKJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNGDFPMBLI_ONGJAMGPPAE__CTOR_OFFSET))(this);
	}

	::System::Void NMDBLBCCNBD(::FGCOIBFFCHB* CGJEBPGPIHO, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::Int32))((::PBYTE)hIl2Cpp + GFNGDFPMBLI_ONGJAMGPPAE_NMDBLBCCNBD_OFFSET))(this, CGJEBPGPIHO, HBJOLKHGGDD);
	}
};
