#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIUrbanMapRightListRowImageWidgetContext; }
namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;

#define PIAKIEMDJEF_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x13714740)
#define PIAKIEMDJEF_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x13714AA0)
#define PIAKIEMDJEF_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x13714C50)
#define PIAKIEMDJEF_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x13714B30)
#define PIAKIEMDJEF_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x13714BC0)
#define PIAKIEMDJEF_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x13714CE0)
#define PIAKIEMDJEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13714A50)

inline static constexpr unsigned int PIAKIEMDJEF_TypeDefinitionIndex = 79229;

class PIAKIEMDJEF : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapRightListRowImageWidgetContext*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAKIEMDJEF__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PIAKIEMDJEF_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* HPPLBNIKOLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAKIEMDJEF_HPPLBNIKOLN_OFFSET))(this);
	}

	::Foundation::AssetPath JHMPNJLFHKC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAKIEMDJEF_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMapRightListRowImageWidgetContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightListRowImageWidgetContext*))((::PBYTE)hIl2Cpp + PIAKIEMDJEF_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Int64 IPCDDNMMKPF()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAKIEMDJEF_IPCDDNMMKPF_OFFSET))(this);
	}

	::System::Boolean LOPABKBANAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIAKIEMDJEF_LOPABKBANAN_OFFSET))(this);
	}
};
