#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define MNIPMPFLKMG_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x140736C0)
#define MNIPMPFLKMG_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x140736D0)
#define MNIPMPFLKMG_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x140736B0)
#define MNIPMPFLKMG_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x14073730)
#define MNIPMPFLKMG_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x14073740)
#define MNIPMPFLKMG_ONDETACH_OFFSET UNITYSDK_OFFSET(0x140733B0)
#define MNIPMPFLKMG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14073430)
#define MNIPMPFLKMG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x140733F0)
#define MNIPMPFLKMG_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x14073620)
#define MNIPMPFLKMG_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x14073170)
#define MNIPMPFLKMG__CCTOR_OFFSET UNITYSDK_OFFSET(0x140730C0)
#define MNIPMPFLKMG__CTOR_OFFSET UNITYSDK_OFFSET(0x14073670)

inline static constexpr unsigned int MNIPMPFLKMG_TypeDefinitionIndex = 76394;

class MNIPMPFLKMG
{
public:
	::System::String* MABMOJMLNJB; // 0x28
	::System::Int32 NONNKHPPDIO; // 0x30
	::System::Boolean IBJLJCFCHFE; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNIPMPFLKMG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPMPFLKMG_LIBFEFEJOCF_OFFSET))(this);
	}
};
