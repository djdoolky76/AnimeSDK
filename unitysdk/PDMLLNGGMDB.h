#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PDMLLNGGMDB_CEJIIGHOEAA_OFFSET UNITYSDK_OFFSET(0x136F4480)
#define PDMLLNGGMDB_DAKGOBAIJFN_OFFSET UNITYSDK_OFFSET(0x136F45E0)
#define PDMLLNGGMDB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x136F4250)
#define PDMLLNGGMDB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x136F40A0)
#define PDMLLNGGMDB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x136F4B60)
#define PDMLLNGGMDB__CTOR_OFFSET UNITYSDK_OFFSET(0x136F4A00)

inline static constexpr unsigned int PDMLLNGGMDB_TypeDefinitionIndex = 78486;

class PDMLLNGGMDB : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* JADBEIKLMLC; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* LCIAPICCIFM; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* IEKKBKCIJPF; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMLLNGGMDB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMLLNGGMDB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PDMLLNGGMDB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Boolean CEJIIGHOEAA(::Foundation::ViewObject::ViewObjectHandle EAPIEMGDDMM, ::System::Int32& GBGMOIONEEI, ::System::Int32& DBDEDDMCECC, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*& DJLOKMMLFJC, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*& OJNMDCBCDDA)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*&, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*&))((::PBYTE)hIl2Cpp + PDMLLNGGMDB_CEJIIGHOEAA_OFFSET))(EAPIEMGDDMM, GBGMOIONEEI, DBDEDDMCECC, DJLOKMMLFJC, OJNMDCBCDDA);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMLLNGGMDB_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Boolean DAKGOBAIJFN(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*&))((::PBYTE)hIl2Cpp + PDMLLNGGMDB_DAKGOBAIJFN_OFFSET))(DJLOKMMLFJC);
	}
};
