#pragma once
#include "unitysdk/unitysdk.h"

class OKGLILBPOFO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMDBAAMHJNL_BCEPEIHDNEC_OFFSET UNITYSDK_OFFSET(0x15E096D0)
#define LMDBAAMHJNL_BCKGCGOKOAC_OFFSET UNITYSDK_OFFSET(0x15E092F0)
#define LMDBAAMHJNL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E08EB0)
#define LMDBAAMHJNL_GJMLCOJPIMI_OFFSET UNITYSDK_OFFSET(0x15E09120)
#define LMDBAAMHJNL_IBHKDPADDHD_OFFSET UNITYSDK_OFFSET(0x15E09300)
#define LMDBAAMHJNL_JMFPHIMGHHJ_OFFSET UNITYSDK_OFFSET(0x15E09210)
#define LMDBAAMHJNL_LHLJOIHKDAL_OFFSET UNITYSDK_OFFSET(0x15E09200)
#define LMDBAAMHJNL_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x15E096C0)
#define LMDBAAMHJNL_ONCREATE_OFFSET UNITYSDK_OFFSET(0x15E08EF0)
#define LMDBAAMHJNL_UPDATE_OFFSET UNITYSDK_OFFSET(0x15E08F30)
#define LMDBAAMHJNL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E090A0)

inline static constexpr unsigned int LMDBAAMHJNL_TypeDefinitionIndex = 48902;

class LMDBAAMHJNL
{
public:
	::OKGLILBPOFO* LMEOFFKHGCA; // 0x10
	::System::Collections::Generic::List_1<::OKGLILBPOFO*>* JLFMGIMNGLK; // 0x18
	::System::Boolean _MLMGDKLCIGA_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDBAAMHJNL__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean GJMLCOJPIMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_GJMLCOJPIMI_OFFSET))(this);
	}

	::System::Boolean LHLJOIHKDAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_LHLJOIHKDAL_OFFSET))(this);
	}

	::System::Void JMFPHIMGHHJ(::OKGLILBPOFO* KHPKIPHHBLE)
	{
		return ((::System::Void(*)(::PVOID, ::OKGLILBPOFO*))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_JMFPHIMGHHJ_OFFSET))(this, KHPKIPHHBLE);
	}

	::System::Void BCKGCGOKOAC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_BCKGCGOKOAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IBHKDPADDHD(::System::Int32 BLGOIJBLAOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_IBHKDPADDHD_OFFSET))(this, BLGOIJBLAOP);
	}

	::OKGLILBPOFO* NCNOMFOCLBH()
	{
		return ((::OKGLILBPOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_NCNOMFOCLBH_OFFSET))(this);
	}

	::System::Void BCEPEIHDNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDBAAMHJNL_BCEPEIHDNEC_OFFSET))(this);
	}
};
