#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIZenkovItemInfoWidgetController; }

#define FJIHJCOPKGO_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x179AEE60)
#define FJIHJCOPKGO_GPEMOIOPFIK_OFFSET UNITYSDK_OFFSET(0x179AF0A0)
#define FJIHJCOPKGO_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x179AEF80)
#define FJIHJCOPKGO_MOKINDNACHI_OFFSET UNITYSDK_OFFSET(0x179AEEB0)
#define FJIHJCOPKGO_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x179AF010)
#define FJIHJCOPKGO_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x179AEEF0)
#define FJIHJCOPKGO__CTOR_OFFSET UNITYSDK_OFFSET(0x179AEF30)

inline static constexpr unsigned int FJIHJCOPKGO_TypeDefinitionIndex = 51721;

class FJIHJCOPKGO : public ::PBJOCICFNGK
{
public:
	::MoleMole::UIZenkovItemInfoWidgetController* PIDHMJFIKLG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHJCOPKGO__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FJIHJCOPKGO_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void MOKINDNACHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHJCOPKGO_MOKINDNACHI_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHJCOPKGO_PILPKINFMBA_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHJCOPKGO_LKNBCFOKJLO_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHJCOPKGO_NPKBDILPMHJ_OFFSET))(this);
	}

	::MoleMole::UIZenkovItemInfoWidgetController* GPEMOIOPFIK()
	{
		return ((::MoleMole::UIZenkovItemInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIHJCOPKGO_GPEMOIOPFIK_OFFSET))(this);
	}
};
