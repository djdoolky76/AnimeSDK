#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMLFPKAKENC;
class HHLMDHFGAJJ;
class JINIMMNEHBF;
class OAEFGCLEHHO;

#define HHLMDHFGAJJ_HFECFELMMNP_IEKMKOFAAEN_OFFSET UNITYSDK_OFFSET(0x140B2AA0)
#define HHLMDHFGAJJ_HFECFELMMNP__CTOR_OFFSET UNITYSDK_OFFSET(0x140B2A90)

inline static constexpr unsigned int HHLMDHFGAJJ_HFECFELMMNP_TypeDefinitionIndex = 91776;

class HHLMDHFGAJJ_HFECFELMMNP : public ::System::Object
{
public:
	::Il2CppArray<::JINIMMNEHBF*>* EDPABLNHMNH; // 0x10
	::AMLFPKAKENC* PCGIKDNBGFO; // 0x18
	::HHLMDHFGAJJ* KLHPEBKNIFB; // 0x20
	::AMLFPKAKENC* DBNOKADPPKD; // 0x28
	::System::Int32 AGHFCKLOBDJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLMDHFGAJJ_HFECFELMMNP__CTOR_OFFSET))(this);
	}

	::System::Void IEKMKOFAAEN(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HHLMDHFGAJJ_HFECFELMMNP_IEKMKOFAAEN_OFFSET))(this, KGFGOODAFDH);
	}
};
