#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define HMJCGCCLMBK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x12E8BD30)
#define HMJCGCCLMBK_ANNLOHJBBEK_OFFSET UNITYSDK_OFFSET(0x12E8BD00)
#define HMJCGCCLMBK_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x12E8BCA0)
#define HMJCGCCLMBK_ELCNJLEKALE_OFFSET UNITYSDK_OFFSET(0x12E8B9F0)
#define HMJCGCCLMBK_HADFKOHEILA_OFFSET UNITYSDK_OFFSET(0x12E8B4E0)
#define HMJCGCCLMBK_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x12E8BD10)
#define HMJCGCCLMBK_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x12E8BD20)
#define HMJCGCCLMBK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12E8B480)
#define HMJCGCCLMBK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12E8B410)
#define HMJCGCCLMBK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12E8B730)
#define HMJCGCCLMBK_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x12E8B970)
#define HMJCGCCLMBK_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x12E8B830)
#define HMJCGCCLMBK__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E8B780)
#define HMJCGCCLMBK__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8BC50)

inline static constexpr unsigned int HMJCGCCLMBK_TypeDefinitionIndex = 83568;

class HMJCGCCLMBK
{
public:
	::System::String* BKPOMBNBGHP; // 0x28
	::System::Boolean HFLGMDMPEHL; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMJCGCCLMBK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJCGCCLMBK__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_RECEIVECUSTOMEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void HADFKOHEILA(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_HADFKOHEILA_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ANNLOHJBBEK(::Foundation::ViewObject::EViewObjectComponentCustomEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_ANNLOHJBBEK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ELCNJLEKALE(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HMJCGCCLMBK_ELCNJLEKALE_OFFSET))(this, MNDIBLLFAJI);
	}
};
