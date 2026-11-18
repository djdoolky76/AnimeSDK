#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGrandMarcelAdventurePageContext_RoomType.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define GPPMPHICDEA_PCKMEJNNENK_NLLBEMCGJOO_OFFSET UNITYSDK_OFFSET(0x15B37FC0)
#define GPPMPHICDEA_PCKMEJNNENK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B37FB0)

inline static constexpr unsigned int GPPMPHICDEA_PCKMEJNNENK_TypeDefinitionIndex = 42636;

class GPPMPHICDEA_PCKMEJNNENK : public ::System::Object
{
public:
	::System::UInt32 AOCOIDIMLIH; // 0x10
	::MoleMole::UIGrandMarcelAdventurePageContext_RoomType ODMAMKAKPFH; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_PCKMEJNNENK__CTOR_OFFSET))(this);
	}

	::System::Void NLLBEMCGJOO(::OAEFGCLEHHO* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_PCKMEJNNENK_NLLBEMCGJOO_OFFSET))(this, EIFONLCJOPG);
	}
};
