#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralInputFieldPopWindowController_Result.h"
#include "unitysdk/System/Object.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
namespace System { class String; }

#define HMENNFHKEOE_LIBJBIFJNNN_LFKHGEGGCAB_OFFSET UNITYSDK_OFFSET(0x14709FD0)
#define HMENNFHKEOE_LIBJBIFJNNN__CTOR_OFFSET UNITYSDK_OFFSET(0x14709FC0)

inline static constexpr unsigned int HMENNFHKEOE_LIBJBIFJNNN_TypeDefinitionIndex = 53315;

class HMENNFHKEOE_LIBJBIFJNNN : public ::System::Object
{
public:
	::GBINEPNHKKO* GGPHLCMFNBH; // 0x10
	::IDGDIFDMIDP* FHMLAGEOHBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LIBJBIFJNNN__CTOR_OFFSET))(this);
	}

	::System::Void LFKHGEGGCAB(::MoleMole::UIGeneralInputFieldPopWindowController_Result DLJPLHKELCO, ::System::String* EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralInputFieldPopWindowController_Result, ::System::String*))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LIBJBIFJNNN_LFKHGEGGCAB_OFFSET))(this, DLJPLHKELCO, EMIKCAHJLGB);
	}
};
