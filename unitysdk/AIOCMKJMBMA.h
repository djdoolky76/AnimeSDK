#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFAMDCIGGFB.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/OOKOPEKEFDH.h"

class CEMHFJHBOPO;
class GPOJJCFJOLH;
class KPFKBNGMHPA;
class MCONJOMJABJ;
class MHADFLEMHFF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define AIOCMKJMBMA_AMFEONKCEON_OFFSET UNITYSDK_OFFSET(0x16481500)
#define AIOCMKJMBMA_AOLBJMANDAH_OFFSET UNITYSDK_OFFSET(0x16480F30)
#define AIOCMKJMBMA_BCFDKNNAIML_OFFSET UNITYSDK_OFFSET(0x16480ED0)
#define AIOCMKJMBMA_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x16481560)
#define AIOCMKJMBMA_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x16480E40)
#define AIOCMKJMBMA_GFDPDGFDPFG_OFFSET UNITYSDK_OFFSET(0x16481130)
#define AIOCMKJMBMA_HIFFKJGFAHF_OFFSET UNITYSDK_OFFSET(0x16480190)
#define AIOCMKJMBMA_HLMGEDEFMMM_OFFSET UNITYSDK_OFFSET(0x16480130)
#define AIOCMKJMBMA_MEJFEFFJBIC_OFFSET UNITYSDK_OFFSET(0x1647E6E0)
#define AIOCMKJMBMA_OBJIEODEGEB_OFFSET UNITYSDK_OFFSET(0x16480EE0)
#define AIOCMKJMBMA_OKFNKDHLFDC_OFFSET UNITYSDK_OFFSET(0x16480110)
#define AIOCMKJMBMA_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1647FE10)
#define AIOCMKJMBMA_ONSTART_OFFSET UNITYSDK_OFFSET(0x1647E550)
#define AIOCMKJMBMA_PKOCFHNDLCO_OFFSET UNITYSDK_OFFSET(0x16480120)
#define AIOCMKJMBMA_POILAKAMKCA_OFFSET UNITYSDK_OFFSET(0x164814F0)
#define AIOCMKJMBMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1647FF60)

inline static constexpr unsigned int AIOCMKJMBMA_TypeDefinitionIndex = 85295;

class AIOCMKJMBMA : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::Dictionary_2<::OOKOPEKEFDH, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MCONJOMJABJ*>*>*>* MPGLGGPDHBL; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* MPAMOPFJLLH; // 0x20
	::System::Collections::Generic::Dictionary_2<::OOKOPEKEFDH, ::System::Collections::Generic::List_1<::MCONJOMJABJ*>*>* _PLIJMFILPIM_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MCONJOMJABJ*>*>* JKENLPDINDH; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* BMMCHOEFOGG; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* FDJFLOLLMAN; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MCONJOMJABJ*>* _OCNFPKBHJGM_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCMKJMBMA__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::OOKOPEKEFDH, ::System::Collections::Generic::List_1<::MCONJOMJABJ*>*>* OKFNKDHLFDC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::OOKOPEKEFDH, ::System::Collections::Generic::List_1<::MCONJOMJABJ*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_OKFNKDHLFDC_OFFSET))(this);
	}

	::System::Void PKOCFHNDLCO(::System::Collections::Generic::Dictionary_2<::OOKOPEKEFDH, ::System::Collections::Generic::List_1<::MCONJOMJABJ*>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::OOKOPEKEFDH, ::System::Collections::Generic::List_1<::MCONJOMJABJ*>*>*))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_PKOCFHNDLCO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HLMGEDEFMMM(::CEMHFJHBOPO* OFBDJCHNGOI)
	{
		return ((::System::Void(*)(::PVOID, ::CEMHFJHBOPO*))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_HLMGEDEFMMM_OFFSET))(this, OFBDJCHNGOI);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void BCFDKNNAIML(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MCONJOMJABJ*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MCONJOMJABJ*>*))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_BCFDKNNAIML_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OBJIEODEGEB(::MHADFLEMHFF* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::MHADFLEMHFF*))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_OBJIEODEGEB_OFFSET))(this, HEJIBNEHLIG);
	}

	::MCONJOMJABJ* AOLBJMANDAH(::OOKOPEKEFDH OBNIAHNMHPF, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::MCONJOMJABJ*(*)(::PVOID, ::OOKOPEKEFDH, ::System::Int32))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_AOLBJMANDAH_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF);
	}

	::System::Void HIFFKJGFAHF(::DFDEIDBBGHG_1<::GPOJJCFJOLH*>* JBNBMFNNELP, ::System::Boolean NOHJFJHOIFI)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::GPOJJCFJOLH*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_HIFFKJGFAHF_OFFSET))(this, JBNBMFNNELP, NOHJFJHOIFI);
	}

	::System::Int32 GFDPDGFDPFG(::HFAMDCIGGFB OBNIAHNMHPF, ::System::Int32 ADBFLJMAMOP)
	{
		return ((::System::Int32(*)(::PVOID, ::HFAMDCIGGFB, ::System::Int32))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_GFDPDGFDPFG_OFFSET))(this, OBNIAHNMHPF, ADBFLJMAMOP);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MCONJOMJABJ*>* POILAKAMKCA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MCONJOMJABJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_POILAKAMKCA_OFFSET))(this);
	}

	::System::Void AMFEONKCEON(::KPFKBNGMHPA* JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::KPFKBNGMHPA*))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_AMFEONKCEON_OFFSET))(this, JBNBMFNNELP);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void MEJFEFFJBIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCMKJMBMA_MEJFEFFJBIC_OFFSET))(this);
	}
};
