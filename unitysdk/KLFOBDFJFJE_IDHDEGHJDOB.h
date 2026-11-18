#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

namespace System { class Action; }

#define KLFOBDFJFJE_IDHDEGHJDOB_DILCOLLBGND_OFFSET UNITYSDK_OFFSET(0x17919170)
#define KLFOBDFJFJE_IDHDEGHJDOB_GIMBKMAAGPP_OFFSET UNITYSDK_OFFSET(0x17919180)
#define KLFOBDFJFJE_IDHDEGHJDOB__CTOR_OFFSET UNITYSDK_OFFSET(0x17919160)

inline static constexpr unsigned int KLFOBDFJFJE_IDHDEGHJDOB_TypeDefinitionIndex = 58480;

class KLFOBDFJFJE_IDHDEGHJDOB : public ::System::Object
{
public:
	::System::Action* FGJDIENAHFD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IDHDEGHJDOB__CTOR_OFFSET))(this);
	}

	::System::Void DILCOLLBGND(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IDHDEGHJDOB_DILCOLLBGND_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void GIMBKMAAGPP(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_IDHDEGHJDOB_GIMBKMAAGPP_OFFSET))(this, DMIAICJPPDL);
	}
};
