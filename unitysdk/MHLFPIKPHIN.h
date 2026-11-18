#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGPPGMMOPB.h"
#include "unitysdk/System/Object.h"

class MDIKGPOMBGJ;

#define MHLFPIKPHIN_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1FEA7620)
#define MHLFPIKPHIN_DBCOLPNOPOA_OFFSET UNITYSDK_OFFSET(0x1FEA7600)
#define MHLFPIKPHIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FEA7530)
#define MHLFPIKPHIN_DNMEMIKEJGM_OFFSET UNITYSDK_OFFSET(0x1FEA75E0)
#define MHLFPIKPHIN_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1FEA7450)
#define MHLFPIKPHIN_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1FEA7470)
#define MHLFPIKPHIN_GET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1FEA7460)
#define MHLFPIKPHIN_ILADJADAIIM_OFFSET UNITYSDK_OFFSET(0x1FEA7520)
#define MHLFPIKPHIN_JCBCDIEJIFA_OFFSET UNITYSDK_OFFSET(0x1FEA75F0)
#define MHLFPIKPHIN_KJMNODCDNFI_OFFSET UNITYSDK_OFFSET(0x1FEA7610)
#define MHLFPIKPHIN_SET_OFFSET UNITYSDK_OFFSET(0x1FEA7480)
#define MHLFPIKPHIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA75D0)

inline static constexpr unsigned int MHLFPIKPHIN_TypeDefinitionIndex = 95085;

class MHLFPIKPHIN : public ::System::Object
{
public:
	::MDIKGPOMBGJ* _IKHKOJLDHFF_k__BackingField; // 0x10
	::System::Int32 _KBJKHHGGILH_k__BackingField; // 0x18
	::System::Int32 _HGLBACIFOBJ_k__BackingField; // 0x1C
	::System::Int32 _CLNDLFNBOFD_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLFPIKPHIN__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Layer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_GET_LAYER_OFFSET))(this);
	}

	::System::Int32 get_SubLayer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_GET_SUBLAYER_OFFSET))(this);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_GET_ORDER_OFFSET))(this);
	}

	::System::Void Set(::System::Int32 OCALHHLFBAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_SET_OFFSET))(this, OCALHHLFBAF);
	}

	::MDIKGPOMBGJ* ILADJADAIIM()
	{
		return ((::MDIKGPOMBGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_ILADJADAIIM_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_DISPOSE_OFFSET))(this);
	}

	::System::Void DNMEMIKEJGM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_DNMEMIKEJGM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JCBCDIEJIFA(::MDIKGPOMBGJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MDIKGPOMBGJ*))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_JCBCDIEJIFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DBCOLPNOPOA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_DBCOLPNOPOA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KJMNODCDNFI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_KJMNODCDNFI_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::MHLFPIKPHIN* COKNIICCODC(::MDIKGPOMBGJ* IFAJBOBJDJE, ::MAGPPGMMOPB KMOHKCADPNA, ::System::Int32 BBFAJBKOAOB)
	{
		return ((::MHLFPIKPHIN*(*)(::MDIKGPOMBGJ*, ::MAGPPGMMOPB, ::System::Int32))((::PBYTE)hIl2Cpp + MHLFPIKPHIN_COKNIICCODC_OFFSET))(IFAJBOBJDJE, KMOHKCADPNA, BBFAJBKOAOB);
	}
};
