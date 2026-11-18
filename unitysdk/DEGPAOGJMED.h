#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMAKJFNANCH.h"

class AKHELNKOPEB;
class CBMMKDOEHDB;

#define DEGPAOGJMED_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0x19D59E00)
#define DEGPAOGJMED__CTOR_OFFSET UNITYSDK_OFFSET(0x19D59DF0)

inline static constexpr unsigned int DEGPAOGJMED_TypeDefinitionIndex = 91028;

class DEGPAOGJMED : public ::DMAKJFNANCH
{
public:
	::System::Void _ctor(::CBMMKDOEHDB* FFKBEGIHIGG, ::CBMMKDOEHDB* CKADGLGJJAB)
	{
		return ((::System::Void(*)(::PVOID, ::CBMMKDOEHDB*, ::CBMMKDOEHDB*))((::PBYTE)hIl2Cpp + DEGPAOGJMED__CTOR_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Boolean FOCDKCOPFAG(::AKHELNKOPEB* IGCMCCAPHCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKHELNKOPEB*))((::PBYTE)hIl2Cpp + DEGPAOGJMED_FOCDKCOPFAG_OFFSET))(this, IGCMCCAPHCI);
	}
};
