#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EOOPEDJBFOB;
class PANPKBFDDPO;

#define KCFBJEIAFGC_LGGBFDNDNMJ_IIHLAJBHDLM_OFFSET UNITYSDK_OFFSET(0x15B81820)
#define KCFBJEIAFGC_LGGBFDNDNMJ_KCMFKIJGDCK_OFFSET UNITYSDK_OFFSET(0x15B81850)
#define KCFBJEIAFGC_LGGBFDNDNMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B81810)

inline static constexpr unsigned int KCFBJEIAFGC_LGGBFDNDNMJ_TypeDefinitionIndex = 79334;

class KCFBJEIAFGC_LGGBFDNDNMJ : public ::System::Object
{
public:
	::System::Int32 EOCMMJKEMIG; // 0x10
	::System::UInt32 INEPJABHIIG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFBJEIAFGC_LGGBFDNDNMJ__CTOR_OFFSET))(this);
	}

	::System::Boolean IIHLAJBHDLM(::PANPKBFDDPO* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::PANPKBFDDPO*))((::PBYTE)hIl2Cpp + KCFBJEIAFGC_LGGBFDNDNMJ_IIHLAJBHDLM_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Boolean KCMFKIJGDCK(::EOOPEDJBFOB* MKBCMHIAMHF)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOOPEDJBFOB*))((::PBYTE)hIl2Cpp + KCFBJEIAFGC_LGGBFDNDNMJ_KCMFKIJGDCK_OFFSET))(this, MKBCMHIAMHF);
	}
};
