#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EOOPEDJBFOB;
class PANPKBFDDPO;

#define LMMCHGEDEAP_EHECCGEPJON_IIHLAJBHDLM_OFFSET UNITYSDK_OFFSET(0x18510620)
#define LMMCHGEDEAP_EHECCGEPJON_KCMFKIJGDCK_OFFSET UNITYSDK_OFFSET(0x185105F0)
#define LMMCHGEDEAP_EHECCGEPJON__CTOR_OFFSET UNITYSDK_OFFSET(0x185105E0)

inline static constexpr unsigned int LMMCHGEDEAP_EHECCGEPJON_TypeDefinitionIndex = 84146;

class LMMCHGEDEAP_EHECCGEPJON : public ::System::Object
{
public:
	::System::UInt32 INEPJABHIIG; // 0x10
	::System::Int32 EOCMMJKEMIG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMCHGEDEAP_EHECCGEPJON__CTOR_OFFSET))(this);
	}

	::System::Boolean KCMFKIJGDCK(::EOOPEDJBFOB* MKBCMHIAMHF)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOOPEDJBFOB*))((::PBYTE)hIl2Cpp + LMMCHGEDEAP_EHECCGEPJON_KCMFKIJGDCK_OFFSET))(this, MKBCMHIAMHF);
	}

	::System::Boolean IIHLAJBHDLM(::PANPKBFDDPO* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::PANPKBFDDPO*))((::PBYTE)hIl2Cpp + LMMCHGEDEAP_EHECCGEPJON_IIHLAJBHDLM_OFFSET))(this, IPMMCGDMODG);
	}
};
