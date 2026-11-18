#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"

class ENGKPGFGGLM;
namespace System { class EventArgs; }

#define EMNOIOGPDIJ_ANNLOHJBBEK_OFFSET UNITYSDK_OFFSET(0x1417E4C0)
#define EMNOIOGPDIJ_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x1417E4D0)
#define EMNOIOGPDIJ_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1417DE00)
#define EMNOIOGPDIJ_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1417E170)
#define EMNOIOGPDIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1417DC60)

inline static constexpr unsigned int EMNOIOGPDIJ_TypeDefinitionIndex = 80574;

class EMNOIOGPDIJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNOIOGPDIJ__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EMNOIOGPDIJ_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EMNOIOGPDIJ_RECEIVECUSTOMEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ANNLOHJBBEK(::Foundation::ViewObject::EViewObjectComponentCustomEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EMNOIOGPDIJ_ANNLOHJBBEK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EMNOIOGPDIJ_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}
};
