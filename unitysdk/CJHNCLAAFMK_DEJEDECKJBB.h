#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNCILNLFEE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define CJHNCLAAFMK_DEJEDECKJBB_EBNKAFAABEB_OFFSET UNITYSDK_OFFSET(0x115526E0)
#define CJHNCLAAFMK_DEJEDECKJBB_KKPCPFEJFEC_OFFSET UNITYSDK_OFFSET(0x115526D0)
#define CJHNCLAAFMK_DEJEDECKJBB__CTOR_OFFSET UNITYSDK_OFFSET(0x115526C0)

inline static constexpr unsigned int CJHNCLAAFMK_DEJEDECKJBB_TypeDefinitionIndex = 65616;

class CJHNCLAAFMK_DEJEDECKJBB : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHNCLAAFMK_DEJEDECKJBB__CTOR_OFFSET))(this);
	}

	::System::Void KKPCPFEJFEC(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CJHNCLAAFMK_DEJEDECKJBB_KKPCPFEJFEC_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void EBNKAFAABEB(::JGNCILNLFEE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + CJHNCLAAFMK_DEJEDECKJBB_EBNKAFAABEB_OFFSET))(this, GLAOEHCGCFO);
	}
};
