#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EGOJNNIFDJJ;
namespace System { class EventArgs; }

#define MPLKBLDNNIF_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x12184140)
#define MPLKBLDNNIF_CALFKPCMIAH_OFFSET UNITYSDK_OFFSET(0x12183AC0)
#define MPLKBLDNNIF_IAHJGMFMAAJ_OFFSET UNITYSDK_OFFSET(0x12184160)
#define MPLKBLDNNIF_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x12184150)
#define MPLKBLDNNIF_IPIEGMHBCLB_OFFSET UNITYSDK_OFFSET(0x12183EE0)
#define MPLKBLDNNIF_KCKAJFFIDBH_OFFSET UNITYSDK_OFFSET(0x12184060)
#define MPLKBLDNNIF_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x12184130)
#define MPLKBLDNNIF_MMEDPEBKIPD_OFFSET UNITYSDK_OFFSET(0x12184000)
#define MPLKBLDNNIF_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12183D30)
#define MPLKBLDNNIF_ONENABLE_OFFSET UNITYSDK_OFFSET(0x121838B0)
#define MPLKBLDNNIF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12183820)
#define MPLKBLDNNIF__CTOR_OFFSET UNITYSDK_OFFSET(0x12183EA0)

inline static constexpr unsigned int MPLKBLDNNIF_TypeDefinitionIndex = 48921;

class MPLKBLDNNIF
{
public:
	::MoleMole::EntityHandle HLGGHBEPCKI; // 0x28
	::EGOJNNIFDJJ* BFGIBNIKDAP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_ONDISABLE_OFFSET))(this);
	}

	::System::Void IPIEGMHBCLB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_IPIEGMHBCLB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void CALFKPCMIAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_CALFKPCMIAH_OFFSET))(this);
	}

	::System::Void KCKAJFFIDBH(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_KCKAJFFIDBH_OFFSET))(this, HPADNAEINPK);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void MMEDPEBKIPD(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_MMEDPEBKIPD_OFFSET))(this, HPADNAEINPK);
	}

	::MoleMole::EntityHandle IAHJGMFMAAJ()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLKBLDNNIF_IAHJGMFMAAJ_OFFSET))(this);
	}
};
