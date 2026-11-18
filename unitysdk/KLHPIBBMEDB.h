#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INOEOEPKMJL.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class KLHPIBBMEDB_BGIOOLCIOPF;
namespace MoleMole { class UIMusicalBattleLevelItemWidgetController_Data; }

#define KLHPIBBMEDB_BCMBLHMKGMA_OFFSET UNITYSDK_OFFSET(0x1516A1A0)
#define KLHPIBBMEDB_BGOFNMEMEGA_OFFSET UNITYSDK_OFFSET(0x151694B0)
#define KLHPIBBMEDB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15169410)
#define KLHPIBBMEDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15169460)

inline static constexpr unsigned int KLHPIBBMEDB_TypeDefinitionIndex = 76903;

class KLHPIBBMEDB : public ::PBJOCICFNGK
{
public:
	// static const ::System::String* DKMLDLMBKKN; // 0x0
	// static const ::System::String* LIPAFHAFNCA; // 0x0
	// static const ::System::String* IHJMLBOAEGE; // 0x0
	::KLHPIBBMEDB_BGIOOLCIOPF* PMOKJKAAACI; // 0x50
	::MoleMole::UIMusicalBattleLevelItemWidgetController_Data* EFFAONJBCOG; // 0x58
	::INOEOEPKMJL LHCGPFHBKCJ; // 0x60
	::System::Int32 MLNKCNJEOMI; // 0x70
	::System::Boolean MMGIGHENODJ; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPIBBMEDB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KLHPIBBMEDB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void BGOFNMEMEGA(::MoleMole::UIMusicalBattleLevelItemWidgetController_Data* LJBPECKCCEA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicalBattleLevelItemWidgetController_Data*, ::System::Int32))((::PBYTE)hIl2Cpp + KLHPIBBMEDB_BGOFNMEMEGA_OFFSET))(this, LJBPECKCCEA, ABHBKFJKINO);
	}

	::System::Void BCMBLHMKGMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPIBBMEDB_BCMBLHMKGMA_OFFSET))(this);
	}
};
