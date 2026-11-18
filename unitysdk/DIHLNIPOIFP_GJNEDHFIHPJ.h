#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNCILNLFEE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define DIHLNIPOIFP_GJNEDHFIHPJ_EBNKAFAABEB_OFFSET UNITYSDK_OFFSET(0x1A1E3850)
#define DIHLNIPOIFP_GJNEDHFIHPJ_KKPCPFEJFEC_OFFSET UNITYSDK_OFFSET(0x1A1E3860)
#define DIHLNIPOIFP_GJNEDHFIHPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E3840)

inline static constexpr unsigned int DIHLNIPOIFP_GJNEDHFIHPJ_TypeDefinitionIndex = 90230;

class DIHLNIPOIFP_GJNEDHFIHPJ : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHLNIPOIFP_GJNEDHFIHPJ__CTOR_OFFSET))(this);
	}

	::System::Void EBNKAFAABEB(::JGNCILNLFEE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + DIHLNIPOIFP_GJNEDHFIHPJ_EBNKAFAABEB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KKPCPFEJFEC(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DIHLNIPOIFP_GJNEDHFIHPJ_KKPCPFEJFEC_OFFSET))(this, BLLNHDIDKPA);
	}
};
