#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define OACLGOEBKPA_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xF16B810)
#define OACLGOEBKPA_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0xF16B820)
#define OACLGOEBKPA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xF16B590)
#define OACLGOEBKPA_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0xF16B690)
#define OACLGOEBKPA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF16B5E0)
#define OACLGOEBKPA__CTOR_OFFSET UNITYSDK_OFFSET(0xF16B780)

inline static constexpr unsigned int OACLGOEBKPA_TypeDefinitionIndex = 41955;

class OACLGOEBKPA
{
public:
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* OKNOPFFJEFG; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACLGOEBKPA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OACLGOEBKPA__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OACLGOEBKPA_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OACLGOEBKPA_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OACLGOEBKPA_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OACLGOEBKPA_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
