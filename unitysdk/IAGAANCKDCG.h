#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define IAGAANCKDCG_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15BEEDC0)
#define IAGAANCKDCG_ANNLOHJBBEK_OFFSET UNITYSDK_OFFSET(0x15BEF120)
#define IAGAANCKDCG_BHHOFIEHBMO_OFFSET UNITYSDK_OFFSET(0x15BEEDD0)
#define IAGAANCKDCG_ELCNJLEKALE_OFFSET UNITYSDK_OFFSET(0x15BEE950)
#define IAGAANCKDCG_HADFKOHEILA_OFFSET UNITYSDK_OFFSET(0x15BEE3E0)
#define IAGAANCKDCG_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x15BEF110)
#define IAGAANCKDCG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15BEE0B0)
#define IAGAANCKDCG_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15BEE070)
#define IAGAANCKDCG_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x15BEE8D0)
#define IAGAANCKDCG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BEED70)

inline static constexpr unsigned int IAGAANCKDCG_TypeDefinitionIndex = 67108;

class IAGAANCKDCG
{
public:
	::System::String* BGCIFCGMALL; // 0x28
	::System::Boolean HFLGMDMPEHL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGAANCKDCG__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGAANCKDCG_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGAANCKDCG_ONDISABLE_OFFSET))(this);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IAGAANCKDCG_RECEIVECUSTOMEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGAANCKDCG_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void HADFKOHEILA(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IAGAANCKDCG_HADFKOHEILA_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGAANCKDCG_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void ELCNJLEKALE(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IAGAANCKDCG_ELCNJLEKALE_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void BHHOFIEHBMO(::System::Boolean GELCBJDLBII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAGAANCKDCG_BHHOFIEHBMO_OFFSET))(this, GELCBJDLBII);
	}

	::System::Void ANNLOHJBBEK(::Foundation::ViewObject::EViewObjectComponentCustomEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IAGAANCKDCG_ANNLOHJBBEK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
