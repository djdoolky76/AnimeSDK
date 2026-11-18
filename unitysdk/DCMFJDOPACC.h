#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCMFJDOPACC_AAJIKEECGLE_OFFSET UNITYSDK_OFFSET(0x1973FD10)
#define DCMFJDOPACC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1973FD20)
#define DCMFJDOPACC_GMPFGOHIPAD_OFFSET UNITYSDK_OFFSET(0x1973FD50)
#define DCMFJDOPACC_HHMLOGCFEAD_OFFSET UNITYSDK_OFFSET(0x19740020)
#define DCMFJDOPACC_NDMOLIOKHLH_OFFSET UNITYSDK_OFFSET(0x1973FD30)
#define DCMFJDOPACC_OGMKFPCALJB_OFFSET UNITYSDK_OFFSET(0x197402F0)
#define DCMFJDOPACC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1973FC80)
#define DCMFJDOPACC_PCIBFHACNPN_OFFSET UNITYSDK_OFFSET(0x19740300)
#define DCMFJDOPACC_PDBDKIHGIMP_OFFSET UNITYSDK_OFFSET(0x1973FD40)
#define DCMFJDOPACC_PMNOHPIHEEP_OFFSET UNITYSDK_OFFSET(0x19740310)
#define DCMFJDOPACC__CTOR_OFFSET UNITYSDK_OFFSET(0x1973FCD0)

inline static constexpr unsigned int DCMFJDOPACC_TypeDefinitionIndex = 61839;

class DCMFJDOPACC
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* BEMODJJBCLD; // 0x28
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CNOKMDOFDJL; // 0x30
	::System::Int32 _GFNEFJBJHKO_k__BackingField; // 0x38
	::System::Int32 _GIDJGLJMPNG_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMFJDOPACC__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMFJDOPACC_ONRECYCLE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* AAJIKEECGLE()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMFJDOPACC_AAJIKEECGLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMFJDOPACC_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void NDMOLIOKHLH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCMFJDOPACC_NDMOLIOKHLH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PDBDKIHGIMP()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMFJDOPACC_PDBDKIHGIMP_OFFSET))(this);
	}

	::System::Void GMPFGOHIPAD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCMFJDOPACC_GMPFGOHIPAD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void HHMLOGCFEAD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCMFJDOPACC_HHMLOGCFEAD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Int32 OGMKFPCALJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMFJDOPACC_OGMKFPCALJB_OFFSET))(this);
	}

	::System::Int32 PCIBFHACNPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMFJDOPACC_PCIBFHACNPN_OFFSET))(this);
	}

	::System::Void PMNOHPIHEEP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCMFJDOPACC_PMNOHPIHEEP_OFFSET))(this, EGEGIMGMJHN);
	}
};
