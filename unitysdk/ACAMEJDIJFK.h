#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapRightListRowHintContext; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define ACAMEJDIJFK_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1433C580)
#define ACAMEJDIJFK_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x1433C7C0)
#define ACAMEJDIJFK_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x1433C720)
#define ACAMEJDIJFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1433C6D0)

inline static constexpr unsigned int ACAMEJDIJFK_TypeDefinitionIndex = 72558;

class ACAMEJDIJFK : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapRightListRowHintContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAMEJDIJFK__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + ACAMEJDIJFK_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapRightListRowHintContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightListRowHintContext*))((::PBYTE)hIl2Cpp + ACAMEJDIJFK_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAMEJDIJFK_HPPLBNIKOLN_OFFSET))(this);
	}
};
