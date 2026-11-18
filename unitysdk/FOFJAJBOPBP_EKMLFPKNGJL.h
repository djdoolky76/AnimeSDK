#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOFJAJBOPBP;
class OAEFGCLEHHO;
namespace System { class Action; }

#define FOFJAJBOPBP_EKMLFPKNGJL_NEILNBEAEAA_OFFSET UNITYSDK_OFFSET(0xBB748B0)
#define FOFJAJBOPBP_EKMLFPKNGJL_NIIKHLENIGG_OFFSET UNITYSDK_OFFSET(0xBB74740)
#define FOFJAJBOPBP_EKMLFPKNGJL__CTOR_OFFSET UNITYSDK_OFFSET(0xBB74730)

inline static constexpr unsigned int FOFJAJBOPBP_EKMLFPKNGJL_TypeDefinitionIndex = 92077;

class FOFJAJBOPBP_EKMLFPKNGJL : public ::System::Object
{
public:
	::System::Action* IOLCMHKHKGH; // 0x10
	::FOFJAJBOPBP* KLHPEBKNIFB; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::UInt32 NACGJJKHEJE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFJAJBOPBP_EKMLFPKNGJL__CTOR_OFFSET))(this);
	}

	::System::Void NIIKHLENIGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFJAJBOPBP_EKMLFPKNGJL_NIIKHLENIGG_OFFSET))(this);
	}

	::System::Void NEILNBEAEAA(::OAEFGCLEHHO* DAJPJKMHMFN)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOFJAJBOPBP_EKMLFPKNGJL_NEILNBEAEAA_OFFSET))(this, DAJPJKMHMFN);
	}
};
