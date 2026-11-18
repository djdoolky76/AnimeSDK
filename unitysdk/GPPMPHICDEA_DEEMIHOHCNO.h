#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define GPPMPHICDEA_DEEMIHOHCNO_EMBJJLBCGIM_OFFSET UNITYSDK_OFFSET(0x15F429E0)
#define GPPMPHICDEA_DEEMIHOHCNO__CTOR_OFFSET UNITYSDK_OFFSET(0x15F429D0)

inline static constexpr unsigned int GPPMPHICDEA_DEEMIHOHCNO_TypeDefinitionIndex = 42667;

class GPPMPHICDEA_DEEMIHOHCNO : public ::System::Object
{
public:
	::System::String* EENKGIMOCEO; // 0x10
	::MoleMole::UIControllerContextBase* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DEEMIHOHCNO__CTOR_OFFSET))(this);
	}

	::System::Void EMBJJLBCGIM(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DEEMIHOHCNO_EMBJJLBCGIM_OFFSET))(this, NAPFALLANDL);
	}
};
