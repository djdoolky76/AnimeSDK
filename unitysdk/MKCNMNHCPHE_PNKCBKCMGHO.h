#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralInputFieldPopWindowController_Result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define MKCNMNHCPHE_PNKCBKCMGHO_AFPBAPKCGNK_OFFSET UNITYSDK_OFFSET(0x16C92F10)
#define MKCNMNHCPHE_PNKCBKCMGHO__CTOR_OFFSET UNITYSDK_OFFSET(0x16C92F00)

inline static constexpr unsigned int MKCNMNHCPHE_PNKCBKCMGHO_TypeDefinitionIndex = 72704;

class MKCNMNHCPHE_PNKCBKCMGHO : public ::System::Object
{
public:
	::LJHFMILANJA_1<::System::String*>* DKBPNAPPFGC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCNMNHCPHE_PNKCBKCMGHO__CTOR_OFFSET))(this);
	}

	::System::Void AFPBAPKCGNK(::MoleMole::UIGeneralInputFieldPopWindowController_Result IGAAKDOIPNN, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralInputFieldPopWindowController_Result, ::System::String*))((::PBYTE)hIl2Cpp + MKCNMNHCPHE_PNKCBKCMGHO_AFPBAPKCGNK_OFFSET))(this, IGAAKDOIPNN, EGEGIMGMJHN);
	}
};
