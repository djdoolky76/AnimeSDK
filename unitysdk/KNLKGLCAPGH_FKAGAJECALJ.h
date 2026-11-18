#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_FKAGAJECALJ_ICFIBBMCGNG_OFFSET UNITYSDK_OFFSET(0x13C85D70)
#define KNLKGLCAPGH_FKAGAJECALJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85D60)

inline static constexpr unsigned int KNLKGLCAPGH_FKAGAJECALJ_TypeDefinitionIndex = 41121;

class KNLKGLCAPGH_FKAGAJECALJ : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_FKAGAJECALJ__CTOR_OFFSET))(this);
	}

	::System::Void ICFIBBMCGNG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_FKAGAJECALJ_ICFIBBMCGNG_OFFSET))(this, BHDNBGLCNOM);
	}
};
