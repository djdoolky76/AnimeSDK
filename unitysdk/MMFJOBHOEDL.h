#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"

class GEIHCPAOKKK;
class PiplineManager;
namespace System { class EventArgs; }
namespace System { class String; }

#define MMFJOBHOEDL_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16C9F2B0)
#define MMFJOBHOEDL_BJLOKAPEHNB_OFFSET UNITYSDK_OFFSET(0x16C9F1F0)
#define MMFJOBHOEDL_CCPELMHPLHC_OFFSET UNITYSDK_OFFSET(0x16C9E990)
#define MMFJOBHOEDL_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x16C9F130)
#define MMFJOBHOEDL_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16C9ED90)
#define MMFJOBHOEDL_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x16C9F120)
#define MMFJOBHOEDL_KOCDOHEBKDI_OFFSET UNITYSDK_OFFSET(0x16C9F190)
#define MMFJOBHOEDL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16C9E940)
#define MMFJOBHOEDL_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16C9EB40)
#define MMFJOBHOEDL_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x16C9ECC0)
#define MMFJOBHOEDL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C9EB90)
#define MMFJOBHOEDL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9F0E0)

inline static constexpr unsigned int MMFJOBHOEDL_TypeDefinitionIndex = 73252;

class MMFJOBHOEDL
{
public:
	::System::String* LDNINLGGHCG; // 0x28
	::PiplineManager* OAEMAEKFDGO; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMFJOBHOEDL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFJOBHOEDL__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void CCPELMHPLHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_CCPELMHPLHC_OFFSET))(this);
	}

	::System::Void BJLOKAPEHNB(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* JMBNHKNMAND)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::System::String*))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_BJLOKAPEHNB_OFFSET))(this, OHPJHPEOFLD, JMBNHKNMAND);
	}

	::System::Void HMLGKBFFNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_HMLGKBFFNHI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void KOCDOHEBKDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFJOBHOEDL_KOCDOHEBKDI_OFFSET))(this);
	}
};
