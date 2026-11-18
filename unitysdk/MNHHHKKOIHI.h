#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNHHHKKOIHI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x18B5AD30)
#define MNHHHKKOIHI_CCPELMHPLHC_OFFSET UNITYSDK_OFFSET(0x18B5A4A0)
#define MNHHHKKOIHI_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x18B5AD40)
#define MNHHHKKOIHI_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x18B5A880)
#define MNHHHKKOIHI_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x18B5AD20)
#define MNHHHKKOIHI_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x18B5ADA0)
#define MNHHHKKOIHI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B5A450)
#define MNHHHKKOIHI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B5A3E0)
#define MNHHHKKOIHI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18B5A630)
#define MNHHHKKOIHI_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x18B5A7B0)
#define MNHHHKKOIHI__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B5A680)
#define MNHHHKKOIHI__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5ACE0)

inline static constexpr unsigned int MNHHHKKOIHI_TypeDefinitionIndex = 59255;

class MNHHHKKOIHI
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* CEDMGBDGGDH; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* INJOAMADBPE; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNHHHKKOIHI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void CCPELMHPLHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_CCPELMHPLHC_OFFSET))(this);
	}

	::System::Void HMLGKBFFNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_HMLGKBFFNHI_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHHHKKOIHI_KDOIBCBFBAG_OFFSET))(this);
	}
};
