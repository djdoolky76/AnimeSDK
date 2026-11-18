#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

namespace System { class EventArgs; }

#define LEKHDCICGFC_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x1A605290)
#define LEKHDCICGFC_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x1A6050A0)
#define LEKHDCICGFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A604FF0)
#define LEKHDCICGFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A605200)

inline static constexpr unsigned int LEKHDCICGFC_TypeDefinitionIndex = 91520;

class LEKHDCICGFC
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEKHDCICGFC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKHDCICGFC__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LEKHDCICGFC_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LEKHDCICGFC_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
