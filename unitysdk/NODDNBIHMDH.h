#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IONJPHDIELI.h"

namespace System { class String; }

#define NODDNBIHMDH_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0xFD10C40)
#define NODDNBIHMDH_KIHGEEDHNJI_OFFSET UNITYSDK_OFFSET(0xFD10C90)
#define NODDNBIHMDH__CTOR_OFFSET UNITYSDK_OFFSET(0xFD10C80)

inline static constexpr unsigned int NODDNBIHMDH_TypeDefinitionIndex = 79425;

class NODDNBIHMDH : public ::IONJPHDIELI
{
public:
	::System::String* OCGGIHJNIJB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODDNBIHMDH__CTOR_OFFSET))(this);
	}

	::System::String* FHDJDIIPGGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODDNBIHMDH_FHDJDIIPGGP_OFFSET))(this);
	}

	::System::String* KIHGEEDHNJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODDNBIHMDH_KIHGEEDHNJI_OFFSET))(this);
	}
};
