#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNCILNLFEE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define EMLDDDKFCHB_BONCJCICNHO_EBNKAFAABEB_OFFSET UNITYSDK_OFFSET(0x10F45010)
#define EMLDDDKFCHB_BONCJCICNHO_KKPCPFEJFEC_OFFSET UNITYSDK_OFFSET(0x10F45020)
#define EMLDDDKFCHB_BONCJCICNHO__CTOR_OFFSET UNITYSDK_OFFSET(0x10F45000)

inline static constexpr unsigned int EMLDDDKFCHB_BONCJCICNHO_TypeDefinitionIndex = 92724;

class EMLDDDKFCHB_BONCJCICNHO : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_BONCJCICNHO__CTOR_OFFSET))(this);
	}

	::System::Void EBNKAFAABEB(::JGNCILNLFEE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_BONCJCICNHO_EBNKAFAABEB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KKPCPFEJFEC(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EMLDDDKFCHB_BONCJCICNHO_KKPCPFEJFEC_OFFSET))(this, BLLNHDIDKPA);
	}
};
