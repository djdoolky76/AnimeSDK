#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapLeftTastListRow01RoleContext; }
template <typename T> class DBMAHDDGMHM_1;

#define LFLJFFHMIPP_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15187830)
#define LFLJFFHMIPP_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x15187C40)
#define LFLJFFHMIPP_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x15187B80)
#define LFLJFFHMIPP_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x15187AE0)
#define LFLJFFHMIPP_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x15187D00)
#define LFLJFFHMIPP__CTOR_OFFSET UNITYSDK_OFFSET(0x15187A90)

inline static constexpr unsigned int LFLJFFHMIPP_TypeDefinitionIndex = 41145;

class LFLJFFHMIPP : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapLeftTastListRow01RoleContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJFFHMIPP__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + LFLJFFHMIPP_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapLeftTastListRow01RoleContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow01RoleContext*))((::PBYTE)hIl2Cpp + LFLJFFHMIPP_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJFFHMIPP_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Boolean HPPLBNIKOLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJFFHMIPP_HPPLBNIKOLN_OFFSET))(this);
	}

	::Foundation::AssetPath LOPABKBANAN()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJFFHMIPP_LOPABKBANAN_OFFSET))(this);
	}
};
