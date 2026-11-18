#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPGGBILBHFN.h"

class NILGNGDBENM;

#define HBDFBDOFBNN_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x17AE7E80)
#define HBDFBDOFBNN__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE7F30)

inline static constexpr unsigned int HBDFBDOFBNN_TypeDefinitionIndex = 69293;

class HBDFBDOFBNN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDFBDOFBNN__CTOR_OFFSET))(this);
	}

	::System::Int32 FHDJDIIPGGP(::NILGNGDBENM* DEKJDEPKKLH, ::JPGGBILBHFN OBIPHBKODPP)
	{
		return ((::System::Int32(*)(::PVOID, ::NILGNGDBENM*, ::JPGGBILBHFN))((::PBYTE)hIl2Cpp + HBDFBDOFBNN_FHDJDIIPGGP_OFFSET))(this, DEKJDEPKKLH, OBIPHBKODPP);
	}
};
