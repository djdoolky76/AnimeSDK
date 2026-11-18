#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }

#define EEPJFEAEEJE_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1722D650)
#define EEPJFEAEEJE_ANNLOHJBBEK_OFFSET UNITYSDK_OFFSET(0x1722D6E0)
#define EEPJFEAEEJE_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x1722D670)
#define EEPJFEAEEJE_ELCNJLEKALE_OFFSET UNITYSDK_OFFSET(0x1722D3B0)
#define EEPJFEAEEJE_HADFKOHEILA_OFFSET UNITYSDK_OFFSET(0x1722CF90)
#define EEPJFEAEEJE_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1722D6D0)
#define EEPJFEAEEJE_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1722D660)
#define EEPJFEAEEJE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1722CF40)
#define EEPJFEAEEJE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1722CED0)
#define EEPJFEAEEJE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1722D180)
#define EEPJFEAEEJE_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1722D330)
#define EEPJFEAEEJE_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x1722D270)
#define EEPJFEAEEJE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1722D1C0)
#define EEPJFEAEEJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1722D610)

inline static constexpr unsigned int EEPJFEAEEJE_TypeDefinitionIndex = 40354;

class EEPJFEAEEJE
{
public:
	::System::Boolean HFLGMDMPEHL; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEPJFEAEEJE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_RECEIVECUSTOMEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ELCNJLEKALE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_ELCNJLEKALE_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void HADFKOHEILA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_HADFKOHEILA_OFFSET))(this);
	}

	::System::Void ANNLOHJBBEK(::Foundation::ViewObject::EViewObjectComponentCustomEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EEPJFEAEEJE_ANNLOHJBBEK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
