#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class IBENDELLLAO;
class LAAEBHNLHEM;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJJMDBNCJLI_BOPJAAGOBAO_OFFSET UNITYSDK_OFFSET(0x135ED490)
#define AJJMDBNCJLI_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x135EDD60)
#define AJJMDBNCJLI_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x135EDA60)
#define AJJMDBNCJLI_ECJNMPBJBPJ_OFFSET UNITYSDK_OFFSET(0x135EDAF0)
#define AJJMDBNCJLI_LEGLNKBHGGO_OFFSET UNITYSDK_OFFSET(0x135ED690)
#define AJJMDBNCJLI_LINCMEGKALH_OFFSET UNITYSDK_OFFSET(0x135ED8C0)
#define AJJMDBNCJLI_NBAMJBICBPO_OFFSET UNITYSDK_OFFSET(0x135ED8D0)
#define AJJMDBNCJLI_OANGDMEIDCF_OFFSET UNITYSDK_OFFSET(0x135ED6F0)
#define AJJMDBNCJLI_OMJKGLJLAGO_OFFSET UNITYSDK_OFFSET(0x135EDA50)
#define AJJMDBNCJLI_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x135ECFE0)
#define AJJMDBNCJLI_ONSTART_OFFSET UNITYSDK_OFFSET(0x135EC890)
#define AJJMDBNCJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x135ED180)

inline static constexpr unsigned int AJJMDBNCJLI_TypeDefinitionIndex = 49812;

class AJJMDBNCJLI : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IBENDELLLAO*>* LDGCNBHANOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IBENDELLLAO*>* CNGOGGECNAI; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* NJMFDLKGGEL; // 0x28
	::IBENDELLLAO* _NNOBCOAMINM_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IBENDELLLAO*>* LAJJDMOGKEK; // 0x38
	::System::Int32 FAJMMKPLJHI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMDBNCJLI__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void BOPJAAGOBAO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_BOPJAAGOBAO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean LEGLNKBHGGO(::LAAEBHNLHEM* IBDADOPEBFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LAAEBHNLHEM*))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_LEGLNKBHGGO_OFFSET))(this, IBDADOPEBFC);
	}

	::IBENDELLLAO* OANGDMEIDCF(::System::Int32 KJMPMHECMMB)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_OANGDMEIDCF_OFFSET))(this, KJMPMHECMMB);
	}

	::System::Void LINCMEGKALH(::IBENDELLLAO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_LINCMEGKALH_OFFSET))(this, EGEGIMGMJHN);
	}

	::IBENDELLLAO* NBAMJBICBPO(::System::Int32 ABHBKFJKINO)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_NBAMJBICBPO_OFFSET))(this, ABHBKFJKINO);
	}

	::IBENDELLLAO* OMJKGLJLAGO()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_OMJKGLJLAGO_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_DOPGAFCKMNF_OFFSET))(this);
	}

	::IBENDELLLAO* ECJNMPBJBPJ(::System::Int32 FGKPNGBJBBG)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_ECJNMPBJBPJ_OFFSET))(this, FGKPNGBJBBG);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMDBNCJLI_CNIKAMOAANF_OFFSET))(this);
	}
};
