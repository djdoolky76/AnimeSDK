#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define KAHCLJAIEJJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x18A2C910)
#define KAHCLJAIEJJ_ANNLOHJBBEK_OFFSET UNITYSDK_OFFSET(0x18A2C900)
#define KAHCLJAIEJJ_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x18A2C920)
#define KAHCLJAIEJJ_IPAGELOAMLG_OFFSET UNITYSDK_OFFSET(0x18A2BD70)
#define KAHCLJAIEJJ_LIGJJAFMANI_OFFSET UNITYSDK_OFFSET(0x18A2C470)
#define KAHCLJAIEJJ_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18A2BD20)
#define KAHCLJAIEJJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18A2BCD0)
#define KAHCLJAIEJJ_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x18A2C1C0)
#define KAHCLJAIEJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2C8C0)

inline static constexpr unsigned int KAHCLJAIEJJ_TypeDefinitionIndex = 48541;

class KAHCLJAIEJJ
{
public:
	::System::String* CDOFBKDCGDA; // 0x28
	::System::String* JJKPJGNKLGK; // 0x30
	::System::String* DIFONAKCHEF; // 0x38
	::System::Int32 FDGICFLLOHG; // 0x40
	::System::Int32 DHAJLFMHDNG; // 0x44
	::System::Int32 EPLAMLBIAOI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ_ONDISABLE_OFFSET))(this);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ_RECEIVECUSTOMEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ANNLOHJBBEK(::Foundation::ViewObject::EViewObjectComponentCustomEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ_ANNLOHJBBEK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void LIGJJAFMANI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ_LIGJJAFMANI_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void IPAGELOAMLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHCLJAIEJJ_IPAGELOAMLG_OFFSET))(this);
	}
};
