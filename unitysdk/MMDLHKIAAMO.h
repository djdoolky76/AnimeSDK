#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BNFIIBMAMDO;
class EPKCOBKIJPH;
class IOOIHHOJOPI;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZoneHistoryTagWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMDLHKIAAMO_AHDJGEPMKDC_OFFSET UNITYSDK_OFFSET(0x174AC0F0)
#define MMDLHKIAAMO_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x174AB3F0)
#define MMDLHKIAAMO_JDLGIIHDFKA_OFFSET UNITYSDK_OFFSET(0x174AC7D0)
#define MMDLHKIAAMO_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x174ABF10)
#define MMDLHKIAAMO_OBBJKALBMFL_OFFSET UNITYSDK_OFFSET(0x174AC900)
#define MMDLHKIAAMO_ONJNPBNAOFD_OFFSET UNITYSDK_OFFSET(0x174AC1C0)
#define MMDLHKIAAMO__CTOR_OFFSET UNITYSDK_OFFSET(0x174AC780)

inline static constexpr unsigned int MMDLHKIAAMO_TypeDefinitionIndex = 56246;

class MMDLHKIAAMO : public ::PBJOCICFNGK
{
public:
	::MoleMole::UIHadalZoneHistoryTagWidgetController* LKDOOBBECMA; // 0x50
	::MoleMole::UIHadalZoneHistoryTagWidgetController* ACOGHHPMCOK; // 0x58
	::MoleMole::UIHadalZoneHistoryTagWidgetController* CHFAHDDCENC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDLHKIAAMO__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MMDLHKIAAMO_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void NKPAGONEHCH(::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MMDLHKIAAMO_NKPAGONEHCH_OFFSET))(this, KMCJLGLCOHD);
	}

	::MoleMole::ScrollViewItemWidgetController* JDLGIIHDFKA(::System::Func_1<::MoleMole::UIControlReference*>* IHFDFJICHLA)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MMDLHKIAAMO_JDLGIIHDFKA_OFFSET))(this, IHFDFJICHLA);
	}

	::BNFIIBMAMDO* AHDJGEPMKDC()
	{
		return ((::BNFIIBMAMDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDLHKIAAMO_AHDJGEPMKDC_OFFSET))(this);
	}

	::System::Void ONJNPBNAOFD(::System::Collections::Generic::List_1<::EPKCOBKIJPH*>* KMCCGHFBHND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EPKCOBKIJPH*>*))((::PBYTE)hIl2Cpp + MMDLHKIAAMO_ONJNPBNAOFD_OFFSET))(this, KMCCGHFBHND);
	}

	::System::Void OBBJKALBMFL(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MMDLHKIAAMO_OBBJKALBMFL_OFFSET))(this, MIALFKCCCPI);
	}
};
