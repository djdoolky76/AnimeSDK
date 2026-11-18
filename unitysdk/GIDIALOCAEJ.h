#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapRoleCarRowWidgetContext; }
namespace MoleMole { class UIUrbanMapRoleCardRowItemWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class ABGINBDKGEK_1;
template <typename T> class DBMAHDDGMHM_1;

#define GIDIALOCAEJ_DKIBBNCFENG_OFFSET UNITYSDK_OFFSET(0x10FDB340)
#define GIDIALOCAEJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x10FDAC50)
#define GIDIALOCAEJ_JEFDPMOFBPG_OFFSET UNITYSDK_OFFSET(0x10FDAEB0)
#define GIDIALOCAEJ_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x10FDB390)
#define GIDIALOCAEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDAE10)

inline static constexpr unsigned int GIDIALOCAEJ_TypeDefinitionIndex = 77362;

class GIDIALOCAEJ : public ::PBJOCICFNGK
{
public:
	::ABGINBDKGEK_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* IGKDJKOPHPO; // 0x50
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapRoleCarRowWidgetContext*>* DAAAEJDBNFI; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* EGENKJPKJEI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDIALOCAEJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + GIDIALOCAEJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* JEFDPMOFBPG()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDIALOCAEJ_JEFDPMOFBPG_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* DKIBBNCFENG()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDIALOCAEJ_DKIBBNCFENG_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapRoleCarRowWidgetContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRoleCarRowWidgetContext*))((::PBYTE)hIl2Cpp + GIDIALOCAEJ_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}
};
