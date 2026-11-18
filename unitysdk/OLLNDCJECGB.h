#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBEIBBMOPFL.h"
#include "unitysdk/PLBFJACKICL.h"

class NJBLKIEPLBK;
namespace System { class EventArgs; }

#define OLLNDCJECGB_BBMPBBKPLCO_OFFSET UNITYSDK_OFFSET(0xE160030)
#define OLLNDCJECGB_BEOEBDLCEHE_OFFSET UNITYSDK_OFFSET(0xE160790)
#define OLLNDCJECGB_BFNKPAAEGNM_OFFSET UNITYSDK_OFFSET(0xE160040)
#define OLLNDCJECGB_BKBEMABJBJH_OFFSET UNITYSDK_OFFSET(0xE160820)
#define OLLNDCJECGB_CBMBKKLPBIH_OFFSET UNITYSDK_OFFSET(0xE160930)
#define OLLNDCJECGB_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0xE1604D0)
#define OLLNDCJECGB_NBJODPPPHND_OFFSET UNITYSDK_OFFSET(0xE160430)
#define OLLNDCJECGB_PCGPGCGJBEH_OFFSET UNITYSDK_OFFSET(0xE1609C0)
#define OLLNDCJECGB__CTOR_OFFSET UNITYSDK_OFFSET(0xE160780)

inline static constexpr unsigned int OLLNDCJECGB_TypeDefinitionIndex = 87237;

class OLLNDCJECGB : public ::PLBFJACKICL
{
public:
	// static const ::System::Boolean KAIHKFHHMBH = 0x1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLNDCJECGB__CTOR_OFFSET))(this);
	}

	::BBEIBBMOPFL BBMPBBKPLCO()
	{
		return ((::BBEIBBMOPFL(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLNDCJECGB_BBMPBBKPLCO_OFFSET))(this);
	}

	::System::Void BFNKPAAEGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLNDCJECGB_BFNKPAAEGNM_OFFSET))(this);
	}

	::System::Void INOKFEPEEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLNDCJECGB_INOKFEPEEDJ_OFFSET))(this);
	}

	::System::Void BEOEBDLCEHE(::System::EventArgs* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OLLNDCJECGB_BEOEBDLCEHE_OFFSET))(this, NFFNEFLKPDG);
	}

	::NJBLKIEPLBK* BKBEMABJBJH()
	{
		return ((::NJBLKIEPLBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLNDCJECGB_BKBEMABJBJH_OFFSET))(this);
	}

	::System::Void CBMBKKLPBIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLNDCJECGB_CBMBKKLPBIH_OFFSET))(this);
	}

	::System::Void NBJODPPPHND(::System::EventArgs* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OLLNDCJECGB_NBJODPPPHND_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void PCGPGCGJBEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLNDCJECGB_PCGPGCGJBEH_OFFSET))(this);
	}
};
