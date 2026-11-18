#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_IJPJIAKAJIH.h"
#include "unitysdk/CLFBLCIJPKD_OMIDKCCBJCM.h"

namespace System { class String; }

#define CLFBLCIJPKD_PAFAMBALFOO_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x15A0BFE0)
#define CLFBLCIJPKD_PAFAMBALFOO__CTOR_OFFSET UNITYSDK_OFFSET(0x15A0BFC0)

inline static constexpr unsigned int CLFBLCIJPKD_PAFAMBALFOO_TypeDefinitionIndex = 88500;

class CLFBLCIJPKD_PAFAMBALFOO : public ::CLFBLCIJPKD_OMIDKCCBJCM
{
public:
	::System::String* ALHOLKHMJJE; // 0x28
	::System::String* HEDMDAGJHIM; // 0x30
	::CLFBLCIJPKD_IJPJIAKAJIH JAMFCIKKILO; // 0x38

	::System::Void _ctor(::System::String* MAAGPECIPMH, ::System::String* PFNAIFGOMAI, ::CLFBLCIJPKD_IJPJIAKAJIH NCLBCBEEHIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::CLFBLCIJPKD_IJPJIAKAJIH))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_PAFAMBALFOO__CTOR_OFFSET))(this, MAAGPECIPMH, PFNAIFGOMAI, NCLBCBEEHIP);
	}

	::System::Boolean BGJPLEHEDKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_PAFAMBALFOO_BGJPLEHEDKJ_OFFSET))(this);
	}
};
