#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEMMOPDOMEA;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define EDLDOFLKPHL_FKPEDIJPJAP_FAPNKIJPDMG_OFFSET UNITYSDK_OFFSET(0x13539F20)
#define EDLDOFLKPHL_FKPEDIJPJAP_MACCJMKKPBO_OFFSET UNITYSDK_OFFSET(0x13539E70)
#define EDLDOFLKPHL_FKPEDIJPJAP__CTOR_OFFSET UNITYSDK_OFFSET(0x13539E60)

inline static constexpr unsigned int EDLDOFLKPHL_FKPEDIJPJAP_TypeDefinitionIndex = 61499;

class EDLDOFLKPHL_FKPEDIJPJAP : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::HEMMOPDOMEA*>* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_FKPEDIJPJAP__CTOR_OFFSET))(this);
	}

	::System::Void MACCJMKKPBO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_FKPEDIJPJAP_MACCJMKKPBO_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void FAPNKIJPDMG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_FKPEDIJPJAP_FAPNKIJPDMG_OFFSET))(this, BHDNBGLCNOM);
	}
};
