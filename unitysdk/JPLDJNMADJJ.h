#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"

class CFHOEGBMPKN;
class ENGKPGFGGLM;
class PJOHPBGHNHK;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class NMANHEHIJAL_1;

#define JPLDJNMADJJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1A48DC30)
#define JPLDJNMADJJ_ANNLOHJBBEK_OFFSET UNITYSDK_OFFSET(0x1A48E200)
#define JPLDJNMADJJ_BGPBAEDLDEH_OFFSET UNITYSDK_OFFSET(0x1A48E9F0)
#define JPLDJNMADJJ_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x1A48E260)
#define JPLDJNMADJJ_CCHKPLIMOJE_OFFSET UNITYSDK_OFFSET(0x1A48EC60)
#define JPLDJNMADJJ_EMAFJDGCFLF_OFFSET UNITYSDK_OFFSET(0x1A48E210)
#define JPLDJNMADJJ_FBEHGILMMCG_OFFSET UNITYSDK_OFFSET(0x1A48DC50)
#define JPLDJNMADJJ_GBHNJINEEFA_OFFSET UNITYSDK_OFFSET(0x1A48E4D0)
#define JPLDJNMADJJ_GOKBKMPKAAD_OFFSET UNITYSDK_OFFSET(0x1A48DA90)
#define JPLDJNMADJJ_GONGHOPLHBD_OFFSET UNITYSDK_OFFSET(0x1A48DC40)
#define JPLDJNMADJJ_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1A48DA80)
#define JPLDJNMADJJ_JDKOBPIMEAO_OFFSET UNITYSDK_OFFSET(0x1A48DA70)
#define JPLDJNMADJJ_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1A48DC20)
#define JPLDJNMADJJ_KFHCBEFMEDA_OFFSET UNITYSDK_OFFSET(0x1A48E270)
#define JPLDJNMADJJ_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x1A48EC50)
#define JPLDJNMADJJ_NAHNNJPNKDI_OFFSET UNITYSDK_OFFSET(0x1A48E5F0)
#define JPLDJNMADJJ_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A48BFD0)
#define JPLDJNMADJJ_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1A48C0E0)
#define JPLDJNMADJJ_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A48CF00)
#define JPLDJNMADJJ_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A48CC70)
#define JPLDJNMADJJ_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1A48D190)
#define JPLDJNMADJJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A48D6A0)
#define JPLDJNMADJJ_PPLFPCPCCEA_OFFSET UNITYSDK_OFFSET(0x1A48EF30)
#define JPLDJNMADJJ_RECEIVECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1A48D880)
#define JPLDJNMADJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48BCC0)

inline static constexpr unsigned int JPLDJNMADJJ_TypeDefinitionIndex = 63532;

class JPLDJNMADJJ
{
public:
	::DBMAHDDGMHM_1<::Foundation::Unreal::FGameplayTagContainer>* HHHJBNICDNP; // 0x38
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* BBGEPINKOBG; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DBMAHDDGMHM_1<::System::Single>*>*>* HFEHCMCKAID; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::NMANHEHIJAL_1<::Foundation::ViewObject::ViewObjectHandle>*>* MFDFPKNELBE; // 0x50
	::CFHOEGBMPKN* EBKOMBOLONI; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::NMANHEHIJAL_1<::Foundation::ViewObject::ViewObjectHandle>*>* CMEJMNKCILD; // 0x60
	::NMANHEHIJAL_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* FLOLEBKPNDJ; // 0x68
	::System::Boolean EHBMLIDMEPG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ__CTOR_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveCustomEvent(::Foundation::ViewObject::EViewObjectComponentCustomEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_RECEIVECUSTOMEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::CFHOEGBMPKN* JDKOBPIMEAO()
	{
		return ((::CFHOEGBMPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_JDKOBPIMEAO_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ILHIIDBCNEC_OFFSET))(this);
	}

	::DBMAHDDGMHM_1<::Foundation::Unreal::FGameplayTagContainer>* GOKBKMPKAAD()
	{
		return ((::DBMAHDDGMHM_1<::Foundation::Unreal::FGameplayTagContainer>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_GOKBKMPKAAD_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void GONGHOPLHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_GONGHOPLHBD_OFFSET))(this);
	}

	::DBMAHDDGMHM_1<::System::Single>* FBEHGILMMCG(::NCJLKIIGPIC GEEKODJDNLG, ::GPJMHAAEIKO CBHKCCOFHKA)
	{
		return ((::DBMAHDDGMHM_1<::System::Single>*(*)(::PVOID, ::NCJLKIIGPIC, ::GPJMHAAEIKO))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_FBEHGILMMCG_OFFSET))(this, GEEKODJDNLG, CBHKCCOFHKA);
	}

	::System::Void ANNLOHJBBEK(::Foundation::ViewObject::EViewObjectComponentCustomEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentCustomEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_ANNLOHJBBEK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void EMAFJDGCFLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_EMAFJDGCFLF_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void KFHCBEFMEDA(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_KFHCBEFMEDA_OFFSET))(this, EIFONLCJOPG);
	}

	::NMANHEHIJAL_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* GBHNJINEEFA()
	{
		return ((::NMANHEHIJAL_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_GBHNJINEEFA_OFFSET))(this);
	}

	::System::Boolean NAHNNJPNKDI(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_NAHNNJPNKDI_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void BGPBAEDLDEH(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_BGPBAEDLDEH_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void CCHKPLIMOJE(::PJOHPBGHNHK* FPBEPINAPII, ::System::Single KGGJCGPMAIH, ::System::Single BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::PJOHPBGHNHK*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_CCHKPLIMOJE_OFFSET))(this, FPBEPINAPII, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void PPLFPCPCCEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDJNMADJJ_PPLFPCPCCEA_OFFSET))(this);
	}
};
