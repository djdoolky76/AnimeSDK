#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIJCHJAFBNO;
class NHPANPDOPKH;
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIJCHJAFBNO_HFPCCJPGMBG_BBHEBPCHHHI_OFFSET UNITYSDK_OFFSET(0x14A9D3C0)
#define EIJCHJAFBNO_HFPCCJPGMBG_BNLAALHGAEF_OFFSET UNITYSDK_OFFSET(0x14A9D370)
#define EIJCHJAFBNO_HFPCCJPGMBG_BOEGPHAODKJ_OFFSET UNITYSDK_OFFSET(0x14A9D410)
#define EIJCHJAFBNO_HFPCCJPGMBG_GBLIMOLECFG_OFFSET UNITYSDK_OFFSET(0x14A9D4C0)
#define EIJCHJAFBNO_HFPCCJPGMBG_LAADFKKEBLB_OFFSET UNITYSDK_OFFSET(0x14A9D320)
#define EIJCHJAFBNO_HFPCCJPGMBG__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9D520)

inline static constexpr unsigned int EIJCHJAFBNO_HFPCCJPGMBG_TypeDefinitionIndex = 62215;

class EIJCHJAFBNO_HFPCCJPGMBG : public ::System::Object
{
public:
	::EIJCHJAFBNO* BCHELCMCPJB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HFPCCJPGMBG__CTOR_OFFSET))(this);
	}

	::System::Void LAADFKKEBLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HFPCCJPGMBG_LAADFKKEBLB_OFFSET))(this);
	}

	::System::Void BNLAALHGAEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HFPCCJPGMBG_BNLAALHGAEF_OFFSET))(this);
	}

	::System::Void BBHEBPCHHHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HFPCCJPGMBG_BBHEBPCHHHI_OFFSET))(this);
	}

	::System::Void BOEGPHAODKJ(::NHPANPDOPKH* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::NHPANPDOPKH*))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HFPCCJPGMBG_BOEGPHAODKJ_OFFSET))(this, CENDLIKDNJA);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>* GBLIMOLECFG()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_HFPCCJPGMBG_GBLIMOLECFG_OFFSET))(this);
	}
};
