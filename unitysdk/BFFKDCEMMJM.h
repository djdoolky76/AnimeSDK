#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

class PBJOCICFNGK;
namespace MoleMole { class UIWidgetController; }
namespace System { class String; }

#define BFFKDCEMMJM_NKAMAGMBEMA_OFFSET UNITYSDK_OFFSET(0x1424C320)
#define BFFKDCEMMJM_PIIGLEBIGGC_OFFSET UNITYSDK_OFFSET(0x1424C370)
#define BFFKDCEMMJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1424C310)

inline static constexpr unsigned int BFFKDCEMMJM_TypeDefinitionIndex = 41796;

class BFFKDCEMMJM : public ::System::Object
{
public:
	::System::String* PDACHPLBKIE; // 0x10
	::MoleMole::UIWidgetController* FPPPIIFJOBO; // 0x18
	::MIKOMFIBMBN AGGBOOEHNIH; // 0x20

	::System::Void _ctor(::System::String* PDACHPLBKIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFFKDCEMMJM__CTOR_OFFSET))(this, PDACHPLBKIE);
	}

	::System::Void NKAMAGMBEMA(::PBJOCICFNGK* FAIPFCNDLDE)
	{
		return ((::System::Void(*)(::PVOID, ::PBJOCICFNGK*))((::PBYTE)hIl2Cpp + BFFKDCEMMJM_NKAMAGMBEMA_OFFSET))(this, FAIPFCNDLDE);
	}

	::MoleMole::UIWidgetController* PIIGLEBIGGC()
	{
		return ((::MoleMole::UIWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFKDCEMMJM_PIIGLEBIGGC_OFFSET))(this);
	}
};
