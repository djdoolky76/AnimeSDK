#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHPHEMEHJBN.h"

class NILGNGDBENM;

#define OKHDGBIBGGP_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0xE15EEB0)
#define OKHDGBIBGGP__CTOR_OFFSET UNITYSDK_OFFSET(0xE15EF60)

inline static constexpr unsigned int OKHDGBIBGGP_TypeDefinitionIndex = 51281;

class OKHDGBIBGGP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHDGBIBGGP__CTOR_OFFSET))(this);
	}

	::System::Int32 FHDJDIIPGGP(::NILGNGDBENM* DEKJDEPKKLH, ::EHPHEMEHJBN OBIPHBKODPP)
	{
		return ((::System::Int32(*)(::PVOID, ::NILGNGDBENM*, ::EHPHEMEHJBN))((::PBYTE)hIl2Cpp + OKHDGBIBGGP_FHDJDIIPGGP_OFFSET))(this, DEKJDEPKKLH, OBIPHBKODPP);
	}
};
