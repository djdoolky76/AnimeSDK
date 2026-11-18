#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/System/ValueTuple_2.h"

template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define JBDBIJEPOEL_ALPJNPEJLHP_OFFSET UNITYSDK_OFFSET(0x197F2440)
#define JBDBIJEPOEL_CMLBPMFPBBK_OFFSET UNITYSDK_OFFSET(0x197F2470)
#define JBDBIJEPOEL_DKAACPJINKI_OFFSET UNITYSDK_OFFSET(0x197F2410)
#define JBDBIJEPOEL_EINOLBCHFPB_OFFSET UNITYSDK_OFFSET(0x197F2460)
#define JBDBIJEPOEL_ELKOIBJJMNA_OFFSET UNITYSDK_OFFSET(0x197F2420)
#define JBDBIJEPOEL_GET_CURHPFORVIEW_OFFSET UNITYSDK_OFFSET(0x197F2300)
#define JBDBIJEPOEL_GET_CURHPRATIOFORVIEW_OFFSET UNITYSDK_OFFSET(0x197F22D0)
#define JBDBIJEPOEL_GET_CURMULTIPLEHPPROGRESS_OFFSET UNITYSDK_OFFSET(0x197F22E0)
#define JBDBIJEPOEL_GET_MAXHPFORVIEW_OFFSET UNITYSDK_OFFSET(0x197F22F0)
#define JBDBIJEPOEL_JGOGPKCIKAN_OFFSET UNITYSDK_OFFSET(0x197F2480)
#define JBDBIJEPOEL_KJFNLKINEPH_OFFSET UNITYSDK_OFFSET(0x197F2450)
#define JBDBIJEPOEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x197F2310)
#define JBDBIJEPOEL_PPPBCCIKLHE_OFFSET UNITYSDK_OFFSET(0x197F2430)
#define JBDBIJEPOEL__CTOR_OFFSET UNITYSDK_OFFSET(0x197F2400)

inline static constexpr unsigned int JBDBIJEPOEL_TypeDefinitionIndex = 44288;

class JBDBIJEPOEL : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Single>* _FHAGHDHFNNL_k__BackingField; // 0x88
	::LJHFMILANJA_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* _JLFOLDJNGMK_k__BackingField; // 0x90
	::LJHFMILANJA_1<::System::Double>* _MDKHMOIGDCD_k__BackingField; // 0x98
	::LJHFMILANJA_1<::System::Double>* _JMGNJOKFICL_k__BackingField; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL__CTOR_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Single>* get_CurHpRatioForView()
	{
		return ((::JIOLFCAGOFH_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_GET_CURHPRATIOFORVIEW_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* get_CurMultipleHPProgress()
	{
		return ((::JIOLFCAGOFH_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_GET_CURMULTIPLEHPPROGRESS_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Double>* get_MaxHpForView()
	{
		return ((::JIOLFCAGOFH_1<::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_GET_MAXHPFORVIEW_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Double>* get_CurHpForView()
	{
		return ((::JIOLFCAGOFH_1<::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_GET_CURHPFORVIEW_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void DKAACPJINKI(::LJHFMILANJA_1<::System::Double>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Double>*))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_DKAACPJINKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::Single>* ELKOIBJJMNA()
	{
		return ((::LJHFMILANJA_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_ELKOIBJJMNA_OFFSET))(this);
	}

	::LJHFMILANJA_1<::System::Double>* PPPBCCIKLHE()
	{
		return ((::LJHFMILANJA_1<::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_PPPBCCIKLHE_OFFSET))(this);
	}

	::System::Void ALPJNPEJLHP(::LJHFMILANJA_1<::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Single>*))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_ALPJNPEJLHP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KJFNLKINEPH(::LJHFMILANJA_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_KJFNLKINEPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* EINOLBCHFPB()
	{
		return ((::LJHFMILANJA_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_EINOLBCHFPB_OFFSET))(this);
	}

	::System::Void CMLBPMFPBBK(::LJHFMILANJA_1<::System::Double>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Double>*))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_CMLBPMFPBBK_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::Double>* JGOGPKCIKAN()
	{
		return ((::LJHFMILANJA_1<::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDBIJEPOEL_JGOGPKCIKAN_OFFSET))(this);
	}
};
